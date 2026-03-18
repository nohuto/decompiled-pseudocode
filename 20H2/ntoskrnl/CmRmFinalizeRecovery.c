/*
 * XREFs of CmRmFinalizeRecovery @ 0x1406DF7BC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransDereferenceTransaction @ 0x1406A16E0 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrRollback @ 0x14076CD70 (CmpTransMgrRollback.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmRmFinalizeRecovery(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v6; // rax
  struct _DMA_ADAPTER *v7; // rcx
  void *v8; // rcx
  struct _KTHREAD *v9; // rax
  int v10; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v11[3]; // [rsp+28h] [rbp-40h] BYREF

  v10 = 0;
  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v6 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = v3;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmpTransMgrRollback(v4, &v10);
    CmpAttachToRegistryProcess((__int64)v11);
    CmpTransMgrFreeVolatileData((__int64)v4, 8);
    KiUnstackDetachProcess((__int64)v11, 0);
    if ( v4[7] )
      CmpTransDereferenceTransaction(v4[7]);
    v7 = (struct _DMA_ADAPTER *)v4[9];
    if ( v7 )
      HalPutDmaAdapter(v7);
    v8 = (void *)v4[10];
    if ( v8 )
      ZwClose(v8);
    ExFreePoolWithTag(v4, 0x72544D43u);
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
