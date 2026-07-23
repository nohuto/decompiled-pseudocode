/*
 * XREFs of HalpDmaRemoveAdapterFromMasterQueue @ 0x1404B8280
 * Callers:
 *     HalCancelAdapterChannel @ 0x1404C6100 (HalCancelAdapterChannel.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelThin @ 0x1404CAF20 (HalCancelAdapterChannelThin.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpDmaRemoveAdapterFromMasterQueue(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD **v3; // rdx
  _QWORD **v4; // rbx
  char v5; // di
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD **v8; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  _QWORD *v16; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 120), &LockHandle);
  v3 = (_QWORD **)(v1 + 152);
  v4 = (_QWORD **)(v1 + 168);
  if ( !*(_BYTE *)(a1 + 434) )
    v4 = v3;
  v5 = 0;
  v6 = *v4;
  if ( *v4 != v4 )
  {
    v7 = (_QWORD *)(a1 + 160);
    while ( 1 )
    {
      v8 = (_QWORD **)*v6;
      if ( v6 == v7 )
        break;
      v6 = (_QWORD *)*v6;
      if ( v8 == v4 )
        goto LABEL_7;
    }
    v16 = (_QWORD *)v6[1];
    if ( v8[1] != v6 || (_QWORD *)*v16 != v6 )
      __fastfail(3u);
    *v16 = v8;
    v5 = 1;
    v8[1] = v16;
  }
LABEL_7:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v5;
}
