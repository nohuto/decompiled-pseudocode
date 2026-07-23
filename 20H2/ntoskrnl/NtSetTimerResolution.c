/*
 * XREFs of NtSetTimerResolution @ 0x1406F3D70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExpInsertTimerResolutionEntry @ 0x14033B744 (ExpInsertTimerResolutionEntry.c)
 *     ExpUpdateTimerResolution @ 0x14033BE38 (ExpUpdateTimerResolution.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406F1614 (PoDiagCaptureUsermodeStack.c)
 *     PoTraceSystemTimerResolution @ 0x1406F3F48 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  ULONG v5; // r14d
  __int64 v6; // r8
  _KPROCESS *Process; // rbx
  NTSTATUS v8; // esi
  bool v9; // r15
  ULONG updated; // edi
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v12; // ett
  __int16 v13; // di
  unsigned int v14; // edx
  char v15; // cl
  signed __int32 v17; // ett
  PVOID *v18; // rdi
  void *v19; // rcx

  v5 = DesiredTime;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ActualTime < 0x7FFFFFFF0000LL )
      v6 = (__int64)ActualTime;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = 0;
  v9 = 1;
  LOBYTE(DesiredTime) = 1;
  ExAcquireTimeRefreshLock(DesiredTime);
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( SetResolution )
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
      v9 = v5 <= LODWORD(Process[1].EndPadding[1]);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[1].EndPadding[0] || v5 < HIDWORD(Process[1].EndPadding[1]) )
    {
      v18 = PoDiagCaptureUsermodeStack();
      if ( v18 )
      {
        v19 = (void *)Process[1].EndPadding[0];
        if ( v19 )
          ExFreePoolWithTag(v19, 0x50455654u);
        Process[1].EndPadding[0] = (unsigned __int64)v18;
        HIDWORD(Process[1].EndPadding[1]) = v5;
      }
    }
    LODWORD(Process[1].EndPadding[1]) = v5;
    PoTraceSystemTimerResolution(0LL, Process);
    if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x4000000) != 0 )
    {
      updated = KeTimeIncrement;
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
    LODWORD(Process[1].EndPadding[1]) = 0;
    PoTraceSystemTimerResolution(0LL, Process);
    v14 = 0;
    v15 = 0;
  }
  updated = ExpUpdateTimerResolution(v15, v14, 0LL);
LABEL_16:
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  *ActualTime = updated;
  return v8;
}
