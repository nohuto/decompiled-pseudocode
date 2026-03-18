/*
 * XREFs of PfTAccessTracingCleanup @ 0x14099D47C
 * Callers:
 *     PfTTraceListAdd @ 0x14064E5C4 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1408E2BFC (PfTCleanup.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14099372C (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MmFreeAccessPfnBuffer @ 0x1402440A8 (MmFreeAccessPfnBuffer.c)
 *     MmGetDefaultPagePriority @ 0x14024422C (MmGetDefaultPagePriority.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     MmSetAccessLogging @ 0x140380314 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x140405340 (RtlpInterlockedFlushSList.c)
 *     MmEnablePeriodicAccessClearing @ 0x1409934F8 (MmEnablePeriodicAccessClearing.c)
 *     PfTAccessTracingInitialize @ 0x14099D574 (PfTAccessTracingInitialize.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // r14
  volatile signed __int64 *v7; // rsi
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v9; // rdi
  _QWORD *p_Next; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a3 == 4;
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  dword_140CEC028 = 0;
  ExWaitForRundownProtectionRelease(&stru_140CEC008);
  v9 = RtlpInterlockedFlushSList(&ListHead);
  while ( v9 )
  {
    p_Next = &v9->Next;
    v9 = v9->Next;
    MmFreeAccessPfnBuffer(p_Next, v6);
  }
  MmEnablePeriodicAccessClearing(0);
  PfTAccessTracingInitialize(a1, &PfKernelGlobals, 1LL);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}
