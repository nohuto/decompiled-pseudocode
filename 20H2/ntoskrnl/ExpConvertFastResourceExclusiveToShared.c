/*
 * XREFs of ExpConvertFastResourceExclusiveToShared @ 0x14038DE30
 * Callers:
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x14038DD68 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExConvertFastResourceExclusiveToShared @ 0x1405B2650 (ExConvertFastResourceExclusiveToShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x140318018 (KeWakeWaitChain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpConvertFastResourceExclusiveToShared(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 *v5; // rax
  _DWORD *v6; // r9
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v15; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
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
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v5 = *(__int64 **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v15 = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += (_DWORD)v5;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeWakeWaitChain(&v15, 0LL, 0LL, v6);
  *(_BYTE *)(a2 + 17) &= ~4u;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
