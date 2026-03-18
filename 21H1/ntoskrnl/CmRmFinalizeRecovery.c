/*
 * XREFs of CmRmFinalizeRecovery @ 0x1406E9558
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpTransDereferenceTransaction @ 0x140656BF0 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrRollback @ 0x14075C220 (CmpTransMgrRollback.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmRmFinalizeRecovery(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  __int64 v16; // r8
  _DWORD *v17; // r9
  struct _DMA_ADAPTER *v18; // rcx
  void *v19; // rcx
  struct _KTHREAD *v20; // rax
  int v21; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v22[3]; // [rsp+28h] [rbp-40h] BYREF

  v21 = 0;
  memset(v22, 0, sizeof(v22));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v9 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v9;
    v9[1] = v3;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    CmpTransMgrRollback(v4, &v21);
    CmpAttachToRegistryProcess((__int64)v22, v13, v14, v15);
    CmpTransMgrFreeVolatileData((__int64)v4, 8);
    KiUnstackDetachProcess((__int64)v22, 0LL, v16, v17);
    if ( v4[7] )
      CmpTransDereferenceTransaction(v4[7]);
    v18 = (struct _DMA_ADAPTER *)v4[9];
    if ( v18 )
      HalPutDmaAdapter(v18);
    v19 = (void *)v4[10];
    if ( v19 )
      ZwClose(v19);
    ExFreePoolWithTag(v4, 0x72544D43u);
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return 0LL;
}
