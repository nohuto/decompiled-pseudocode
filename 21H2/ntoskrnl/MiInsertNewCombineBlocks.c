/*
 * XREFs of MiInsertNewCombineBlocks @ 0x140245D28
 * Callers:
 *     MiAllocateCombineProto @ 0x14026AB70 (MiAllocateCombineProto.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLockPagedRange @ 0x1406C2718 (MiLockPagedRange.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int v4; // edi
  _QWORD *v5; // rcx
  _QWORD *i; // rax
  _QWORD *v7; // rdx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned int)MiLockPagedRange(a2, 3960LL) )
    return 0LL;
  memset(v2, 0, 0xF78uLL);
  v4 = 54;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v5 = (_QWORD *)(a1 + 72);
  for ( i = *(_QWORD **)(a1 + 72); ; i = v7 )
  {
    v7 = v2;
    if ( (_QWORD *)i[1] != v5 )
      __fastfail(3u);
    *v2 = i;
    v2[1] = v5;
    i[1] = v2;
    *v5 = v2;
    v2 += 9;
    if ( !--v4 )
      break;
  }
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v2;
}
