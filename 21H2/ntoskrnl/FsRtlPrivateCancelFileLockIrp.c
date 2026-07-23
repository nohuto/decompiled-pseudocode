/*
 * XREFs of FsRtlPrivateCancelFileLockIrp @ 0x1404EFCF0
 * Callers:
 *     FsRtlPrivateLock @ 0x1403630B0 (FsRtlPrivateLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlCompleteLockIrpReal @ 0x1404EF8B0 (FsRtlCompleteLockIrpReal.c)
 */

void __fastcall FsRtlPrivateCancelFileLockIrp(__int64 a1, IRP *a2)
{
  ULONG_PTR Information; // rsi
  char v3; // bp
  KSPIN_LOCK *v4; // rsi
  KIRQL CancelIrql; // bl
  void **i; // rax
  IRP *v8; // rdi
  IRP *v9; // rcx
  KSPIN_LOCK *v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  NTSTATUS v20; // [rsp+50h] [rbp+8h] BYREF

  Information = a2->IoStatus.Information;
  v3 = 0;
  v20 = 0;
  v4 = (KSPIN_LOCK *)(Information + 24);
  CancelIrql = a2->CancelIrql;
  if ( !a1 )
    goto LABEL_3;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CancelIrql = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
  v3 = 1;
  for ( i = (void **)&FsRtlFileLockCancelCollideList; ; i = (void **)(v4 + 3) )
  {
    v8 = (IRP *)*i;
    if ( *i )
      break;
LABEL_7:
    if ( !v3 )
    {
      KxReleaseSpinLock(v4);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && CancelIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (CancelIrql + 1));
            v15 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CancelIrql);
      return;
    }
    v3 = 0;
    KxAcquireSpinLock(v4);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
LABEL_3:
    ;
  }
  while ( 1 )
  {
    v9 = *(IRP **)&v8->Type;
    if ( v8->AssociatedIrp.MasterIrp == a2 )
      break;
    i = (void **)v8;
    v8 = *(IRP **)&v8->Type;
    if ( !v9 )
      goto LABEL_7;
  }
  *i = v9;
  if ( !v3 && v8 == (IRP *)v4[4] )
    v4[4] = (KSPIN_LOCK)i;
  a2->IoStatus.Information = 0LL;
  v10 = &FsRtlFileLockCancelCollideLock;
  if ( !v3 )
    v10 = v4;
  KxReleaseSpinLock(v10);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CancelIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CancelIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v12);
      }
    }
  }
  __writecr8(CancelIrql);
  FsRtlCompleteLockIrpReal(
    (__int64 (__fastcall *)(__int64, IRP *))v8->MdlAddress,
    *(_QWORD *)&v8->Flags,
    a2,
    -1073741536,
    &v20,
    0LL);
  ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v8);
}
