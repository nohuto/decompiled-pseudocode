/*
 * XREFs of CmRmFinalizeRecovery @ 0x1406E7AC4
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     CmpTransDereferenceTransaction @ 0x14067F788 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrRollback @ 0x1406E2798 (CmpTransMgrRollback.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmRmFinalizeRecovery(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v6; // rax
  void *v7; // rcx
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
    KeLeaveCriticalRegion();
    CmpTransMgrRollback((__int64)v4, &v10);
    CmpAttachToRegistryProcess(v11);
    CmpTransMgrFreeVolatileData((ULONG_PTR)v4);
    CmpDetachFromRegistryProcess(v11);
    if ( v4[7] )
      CmpTransDereferenceTransaction(v4[7]);
    v7 = (void *)v4[9];
    if ( v7 )
      ObfDereferenceObject(v7);
    v8 = (void *)v4[10];
    if ( v8 )
      ZwClose(v8);
    ExFreePoolWithTag(v4, 0x72544D43u);
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
