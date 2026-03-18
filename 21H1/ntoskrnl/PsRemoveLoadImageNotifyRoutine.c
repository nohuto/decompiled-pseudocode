/*
 * XREFs of PsRemoveLoadImageNotifyRoutine @ 0x140907E20
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x140942C54 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x1402A5A10 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1402A5AD0 (ExDereferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x1403AF60C (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EX_RUNDOWN_REF *v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = ExReferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3);
    v8 = v4;
    if ( v4 )
      break;
LABEL_6:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6, v7);
      return -1073741702;
    }
  }
  if ( (PLOAD_IMAGE_NOTIFY_ROUTINE)v4[1].Count != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, 0LL, (__int64)v4) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, v8);
    goto LABEL_6;
  }
  _InterlockedAdd(&PspLoadImageNotifyRoutineCount, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  ExWaitForRundownProtectionRelease(v8);
  ExFreePoolWithTag(v8, 0);
  return 0;
}
