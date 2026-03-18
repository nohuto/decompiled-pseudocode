/*
 * XREFs of NtSetTimerResolution @ 0x1407D6CE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpInsertTimerResolutionEntry @ 0x14025AB54 (ExpInsertTimerResolutionEntry.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExpUpdateTimerResolution @ 0x14035C864 (ExpUpdateTimerResolution.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406E8628 (PoDiagCaptureUsermodeStack.c)
 *     PoTraceSystemTimerResolution @ 0x1407D6EC0 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetTimerResolution(__int64 a1, char a2, int *a3)
{
  unsigned int v5; // r14d
  __int64 v6; // r8
  _KPROCESS *Process; // rbx
  unsigned int v8; // esi
  bool v9; // r15
  int updated; // edi
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v12; // ett
  __int16 v13; // di
  unsigned int v14; // edx
  char v15; // cl
  signed __int32 v17; // ett
  _DWORD *v18; // rdi
  void *LastRebalanceQpc; // rcx

  v5 = a1;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = 0;
  v9 = 1;
  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( a2 )
  {
    do
    {
      v12 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v12 != DirectoryTableBase_high );
    v13 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v13 & 0x1000) != 0 )
      v9 = v5 <= LODWORD(Process[1].PerProcessorCycleTimes);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[1].LastRebalanceQpc || v5 < HIDWORD(Process[1].PerProcessorCycleTimes) )
    {
      v18 = PoDiagCaptureUsermodeStack();
      if ( v18 )
      {
        LastRebalanceQpc = (void *)Process[1].LastRebalanceQpc;
        if ( LastRebalanceQpc )
          ExFreePoolWithTag(LastRebalanceQpc, 0x50455654u);
        Process[1].LastRebalanceQpc = (unsigned __int64)v18;
        HIDWORD(Process[1].PerProcessorCycleTimes) = v5;
      }
    }
    LODWORD(Process[1].PerProcessorCycleTimes) = v5;
    PoTraceSystemTimerResolution(0LL, Process);
    if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x4000000) != 0 )
    {
      updated = KePseudoHrTimeIncrement;
      goto LABEL_16;
    }
    v14 = v5;
    v15 = v9;
  }
  else
  {
    do
    {
      v17 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high & 0xFFFFEFFF,
                                  DirectoryTableBase_high);
    }
    while ( v17 != DirectoryTableBase_high );
    if ( (DirectoryTableBase_high & 0x1000) == 0 )
    {
      v8 = -1073741243;
      goto LABEL_16;
    }
    --ExpTimerResolutionCount;
    LODWORD(Process[1].PerProcessorCycleTimes) = 0;
    PoTraceSystemTimerResolution(0LL, Process);
    v14 = 0;
    v15 = 0;
  }
  updated = ExpUpdateTimerResolution(v15, v14, 0LL);
LABEL_16:
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  *a3 = updated;
  return v8;
}
