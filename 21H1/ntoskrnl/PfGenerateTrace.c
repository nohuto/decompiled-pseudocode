/*
 * XREFs of PfGenerateTrace @ 0x1407629D4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1405D0D98 (PfSetSuperfetchInformation.c)
 *     PfpLogEventRequest @ 0x1407627EC (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1407628C4 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x14098D1AC (PfPowerActionNotify.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfGenerateTrace(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  struct _DMA_ADAPTER *v6; // r14
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  v5 = 0;
  if ( *(_QWORD *)a1 )
  {
    if ( !a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 80));
    KeResetEvent((PRKEVENT)(a1 + 56));
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    v6 = *(struct _DMA_ADAPTER **)a1;
    ObfReferenceObject(*(PVOID *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
    Object[0] = (PVOID)(a1 + 56);
    Object[1] = v6;
    KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    HalPutDmaAdapter(v6);
    if ( !a2 )
      _InterlockedAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  }
  else
  {
    v5 = -1073741177;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
  }
  return v5;
}
