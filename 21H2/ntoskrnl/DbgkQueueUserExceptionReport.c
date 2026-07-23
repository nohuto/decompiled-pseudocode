/*
 * XREFs of DbgkQueueUserExceptionReport @ 0x140886970
 * Callers:
 *     SepLogLpacAccessFailure @ 0x140596458 (SepLogLpacAccessFailure.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C4404 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     IoThreadToProcess @ 0x140224230 (IoThreadToProcess.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsSuspendThread @ 0x14061AE10 (PsSuspendThread.c)
 *     PsResumeThread @ 0x140641B00 (PsResumeThread.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgkQueueUserExceptionReport(struct _KTHREAD *DmaAdapter, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  char v4; // r15
  char v5; // bp
  char *PoolWithTag; // rdi
  _OWORD *v10; // rcx
  char v11; // al
  _KPROCESS *v12; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v14; // esi
  _OWORD v15[3]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v4 = 0;
  v5 = 0;
  memset(v15, 0, sizeof(v15));
  if ( !DbgkEnableWerUserReporting )
    return 3221226326LL;
  if ( (DmaAdapter->MiscFlags & 0x400) != 0
    || (HIDWORD(IoThreadToProcess(DmaAdapter)[2].Header.WaitListHead.Flink) & 1) != 0 )
  {
    return 3221225659LL;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)&DmaAdapter[1].SwapListEntry + 2, 0x15u) )
    return 3221227268LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x4B474244u);
  if ( !PoolWithTag )
    return 3221225626LL;
  ObfReferenceObject(DmaAdapter);
  *(_QWORD *)PoolWithTag = DmaAdapter;
  v10 = PoolWithTag + 24;
  *((_QWORD *)PoolWithTag + 1) = v3;
  if ( a3 )
  {
    *v10 = *(_OWORD *)a3;
    *(_OWORD *)(PoolWithTag + 40) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(PoolWithTag + 56) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(PoolWithTag + 72) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(PoolWithTag + 88) = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(PoolWithTag + 104) = *(_OWORD *)(a3 + 80);
    *(_OWORD *)(PoolWithTag + 120) = *(_OWORD *)(a3 + 96);
    *(_OWORD *)(PoolWithTag + 136) = *(_OWORD *)(a3 + 112);
    *(_OWORD *)(PoolWithTag + 152) = *(_OWORD *)(a3 + 128);
    *((_QWORD *)PoolWithTag + 21) = *(_QWORD *)(a3 + 144);
    v11 = 1;
  }
  else
  {
    memset(v10, 0, 0x98uLL);
    v11 = 0;
  }
  PoolWithTag[16] = v11;
  *((_QWORD *)PoolWithTag + 22) = 0LL;
  *((_QWORD *)PoolWithTag + 24) = DbgkUserReportWorkRoutine;
  *((_QWORD *)PoolWithTag + 25) = PoolWithTag;
  v12 = IoThreadToProcess(DmaAdapter);
  if ( v12 != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(v12, 0, (__int64)v15);
    v5 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = PsSuspendThread((__int64)DmaAdapter, 0LL);
  if ( v14 >= 0 )
  {
    v4 = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 176), DelayedWorkQueue);
  }
  KeLeaveCriticalRegion();
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x4B474244u);
    _InterlockedAnd((volatile signed __int32 *)&DmaAdapter[1].SwapListEntry + 2, 0xFFDFFFFF);
    if ( v4 )
      PsResumeThread((__int64)DmaAdapter, 0LL);
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
  }
  if ( v5 )
    KiUnstackDetachProcess((__int64)v15, 0LL);
  return (unsigned int)v14;
}
