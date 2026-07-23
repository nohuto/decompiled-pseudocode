/*
 * XREFs of CcCoalescingCallBackHelper @ 0x1404E9900
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcRescheduleLazyWriteScan @ 0x140281A20 (CcRescheduleLazyWriteScan.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcCoalescingCallBackHelper(__int64 a1, int *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rcx
  bool v13; // cf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v3 = *a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = v3 - 1;
  if ( !v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v13 = *(_QWORD *)(a1 + 640) < 0x2000uLL;
    *(_BYTE *)(a1 + 964) = 1;
    *(_BYTE *)(a1 + 632) = 0;
    if ( !v13 )
      CcScheduleLazyWriteScan(a1, 1, 0);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_23;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_23;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu )
      goto LABEL_23;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_23;
    if ( CurrentIrql < 2u )
      goto LABEL_23;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v11 = (v17 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v17;
    if ( !v11 )
      goto LABEL_23;
    v12 = (__int64)CurrentPrcb;
    goto LABEL_22;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    *(_BYTE *)(a1 + 964) = 0;
    CcRescheduleLazyWriteScan(a1, 0LL);
LABEL_5:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_23;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_23;
    v7 = KeGetCurrentIrql();
    if ( v7 > 0xFu )
      goto LABEL_23;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_23;
    if ( v7 < 2u )
      goto LABEL_23;
    v8 = KeGetCurrentPrcb();
    v9 = v8->SchedulerAssist;
    v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v11 = (v10 & v9[5]) == 0;
    v9[5] &= v10;
    if ( !v11 )
      goto LABEL_23;
    v12 = (__int64)v8;
LABEL_22:
    KiRemoveSystemWorkPriorityKick(v12);
LABEL_23:
    __writecr8(OldIrql);
    return 1;
  }
  if ( v5 == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    CcScheduleLazyWriteScan(a1, 1, 0);
    goto LABEL_5;
  }
  return 1;
}
