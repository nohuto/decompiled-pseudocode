/*
 * XREFs of MiGetSlabStandbyPage @ 0x1405515FC
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x140332F1C (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiReInitializeFreeSlabPfn @ 0x1403757DC (MiReInitializeFreeSlabPfn.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetSlabStandbyPage(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v20; // [rsp+70h] [rbp+30h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( *(_QWORD *)(a1 + 80) == 0xFFFFFFFFFLL )
    return -1LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 == 0xFFFFFFFFFLL )
  {
LABEL_14:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    v5 = -1LL;
  }
  else
  {
    while ( 1 )
    {
      v6 = 48 * v5 - 0x58000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
        break;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20, v7, v8, v9);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 96));
      if ( v5 == *(_QWORD *)(a1 + 80) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v5 = *(_QWORD *)(a1 + 80);
      if ( v5 == 0xFFFFFFFFFLL )
        goto LABEL_14;
    }
    MiUnlinkPageFromList(48 * v5 - 0x58000000000LL, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiDiscardTransitionPteEx(48 * v5 - 0x58000000000LL, 2048);
    MiReInitializeFreeSlabPfn(48 * v5 - 0x58000000000LL, a1);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v16);
        }
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
