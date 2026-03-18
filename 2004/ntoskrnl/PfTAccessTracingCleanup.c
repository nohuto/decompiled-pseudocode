/*
 * XREFs of PfTAccessTracingCleanup @ 0x14099743C
 * Callers:
 *     PfTTraceListAdd @ 0x14061D984 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1408DCDBC (PfTCleanup.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14098D73C (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     MmGetDefaultPagePriority @ 0x1402FE7D4 (MmGetDefaultPagePriority.c)
 *     MmFreeAccessPfnBuffer @ 0x1403050AC (MmFreeAccessPfnBuffer.c)
 *     MmSetAccessLogging @ 0x14037E5E4 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1403FF070 (RtlpInterlockedFlushSList.c)
 *     MmEnablePeriodicAccessClearing @ 0x14098D508 (MmEnablePeriodicAccessClearing.c)
 *     PfTAccessTracingInitialize @ 0x140997534 (PfTAccessTracingInitialize.c)
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
  dword_140CEBF68 = 0;
  ExWaitForRundownProtectionRelease(&RunRef);
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
