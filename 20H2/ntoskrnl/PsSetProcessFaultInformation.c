/*
 * XREFs of PsSetProcessFaultInformation @ 0x14076EBB0
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x14072DF80 (DbgkForwardException.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x1403272E0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1403274D8 (TelemetryCoverageStringHashInternal.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PsSetProcessTelemetryAppState @ 0x14064EA70 (PsSetProcessTelemetryAppState.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x14090AD28 (PspRecordCrashedProcessIntoBlackbox.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(__int64 a1, int *a2)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *v6; // rbp
  void (__fastcall **ExtensionTable)(__int64, struct _KTHREAD *, int *); // rax
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v12; // rbp
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 2172));
    v9 = *(_DWORD *)(a1 + 2172);
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2172), v9 | 4, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 4) == 0 )
    {
      if ( (unsigned int)dword_140C0EE6C < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140C0EE68 )
          dword_140C0EE68 = TelemetryCoverageStringHashInternal(off_140C0EE60, &v13);
        EtwTelemetryCoverageReport(&off_140C0EE60);
      }
      PspRecordCrashedProcessIntoBlackbox(a1);
      PsSetProcessTelemetryAppState((_QWORD *)a1, 4);
    }
  }
  v4 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140C0EE84 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C0EE80 )
        dword_140C0EE80 = TelemetryCoverageStringHashInternal(off_140C0EE78, &v14);
      EtwTelemetryCoverageReport(&off_140C0EE78);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (volatile signed __int64 *)(a1 + 1080);
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( (*(_BYTE *)(a1 + 2171) & 7) != 7 )
      *(_BYTE *)(a1 + 2171) ^= (*(_BYTE *)(a1 + 2171) ^ (*(_BYTE *)(a1 + 2171) + 1)) & 7;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1080));
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v4 = *a2;
  }
  else
  {
    v5 = (volatile signed __int64 *)(a1 + 1080);
  }
  if ( (v4 & 4) != 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    if ( (*(_BYTE *)(a1 + 2171) & 0x38u) < 0x38 )
      *(_BYTE *)(a1 + 2171) ^= (*(_BYTE *)(a1 + 2171) ^ (*(_BYTE *)(a1 + 2171) + 8)) & 0x38;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v6);
    v4 = *a2;
  }
  if ( (v4 & 8) != 0 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    *(_BYTE *)(a1 + 2171) |= 0x40u;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v12);
  }
  ExtensionTable = (void (__fastcall **)(__int64, struct _KTHREAD *, int *))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  if ( ExtensionTable )
  {
    (*ExtensionTable)(a1, KeGetCurrentThread(), a2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
