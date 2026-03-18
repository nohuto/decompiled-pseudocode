/*
 * XREFs of PsSetProcessFaultInformation @ 0x14075E230
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x14071E1F0 (DbgkForwardException.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseExtensionTable @ 0x1402D3FCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     EtwTelemetryCoverageReport @ 0x140318CF0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140318EE8 (TelemetryCoverageStringHashInternal.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PsSetProcessTelemetryAppState @ 0x140663550 (PsSetProcessTelemetryAppState.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140903E28 (PspRecordCrashedProcessIntoBlackbox.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(__int64 a1, int *a2)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void (__fastcall **ExtensionTable)(__int64, struct _KTHREAD *, int *); // rax
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+48h] [rbp+10h] BYREF
  int v23; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 2172));
    v12 = *(_DWORD *)(a1 + 2172);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2172), v12 | 4, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 4) == 0 )
    {
      if ( (unsigned int)dword_140C0EE84 < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140C0EE80 )
          dword_140C0EE80 = TelemetryCoverageStringHashInternal(off_140C0EE78, &v22);
        EtwTelemetryCoverageReport((__int64 *)&off_140C0EE78);
      }
      PspRecordCrashedProcessIntoBlackbox(a1);
      PsSetProcessTelemetryAppState((signed __int64 *)a1, 4);
    }
  }
  v4 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_140C0EE6C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C0EE68 )
        dword_140C0EE68 = TelemetryCoverageStringHashInternal(off_140C0EE60, &v23);
      EtwTelemetryCoverageReport((__int64 *)&off_140C0EE60);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (volatile signed __int64 *)(a1 + 1080);
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( (*(_BYTE *)(a1 + 2171) & 7) != 7 )
      *(_BYTE *)(a1 + 2171) ^= (*(_BYTE *)(a1 + 2171) ^ (*(_BYTE *)(a1 + 2171) + 1)) & 7;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1080);
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v15, v16, v17);
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
    KeLeaveCriticalRegionThread((__int64)v6, v7, v8, v9);
    v4 = *a2;
  }
  if ( (v4 & 8) != 0 )
  {
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    *(_BYTE *)(a1 + 2171) |= 0x40u;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v18, v19, v20, v21);
  }
  ExtensionTable = (void (__fastcall **)(__int64, struct _KTHREAD *, int *))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  if ( ExtensionTable )
  {
    (*ExtensionTable)(a1, KeGetCurrentThread(), a2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
