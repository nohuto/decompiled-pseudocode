/*
 * XREFs of CmpTransInitializeTransaction @ 0x1407507FC
 * Callers:
 *     CmpTransSearchAddTrans @ 0x14075056C (CmpTransSearchAddTrans.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     CmpTransReferenceTransaction @ 0x140656B90 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x140656BF0 (CmpTransDereferenceTransaction.c)
 *     CmpTransSearchAddTransFromRm @ 0x1407504F4 (CmpTransSearchAddTransFromRm.c)
 *     CmpAccountForLogReservation @ 0x140750970 (CmpAccountForLogReservation.c)
 *     CmTmCreateEnlistment @ 0x140750A20 (CmTmCreateEnlistment.c)
 *     CmpStartRMLogs @ 0x140750AA4 (CmpStartRMLogs.c)
 */

__int64 __fastcall CmpTransInitializeTransaction(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // ebp
  int started; // esi
  void *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = 0LL;
  v1 = 0LL;
  v3 = 64;
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(PVOID *)(a1 + 64) != CmRmSystem )
    {
      started = CmpTransSearchAddTransFromRm(CmRmSystem, *(_QWORD *)(a1 + 56), 0LL, 1, (__int64)&v20);
      if ( started < 0 )
        return (unsigned int)started;
    }
    v1 = *(_QWORD *)(a1 + 56);
    started = CmpTransReferenceTransaction(v1);
    if ( started < 0 )
      return (unsigned int)started;
    started = CmpStartRMLogs(*(_QWORD *)(a1 + 64));
    if ( started < 0 )
      goto LABEL_16;
    started = CmTmCreateEnlistment(
                a1 + 80,
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
                *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFFEuLL,
                a1);
    if ( started < 0 )
      goto LABEL_16;
    v18 = 0LL;
    v5 = *(void **)(a1 + 80);
    Object = 0LL;
    ObReferenceObjectByHandle(v5, 0, 0LL, 0, &Object, 0LL);
    LOBYTE(v6) = 1;
    v7 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 72) = Object;
    if ( (int)CmpAccountForLogReservation(v7, v8, v6) >= 0 )
      v3 = 96;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  if ( (*(_DWORD *)(a1 + 48) & 6) == 0 )
  {
    *(_DWORD *)(a1 + 48) = v3;
    --CmpTransactionInitializingCount;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    _InterlockedOr(v17, 0);
    if ( CmpTransactionInitializingEvent )
      ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
    return 0;
  }
  started = -1072103422;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
LABEL_16:
  if ( v1 )
    CmpTransDereferenceTransaction(v1);
  return (unsigned int)started;
}
