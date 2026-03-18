/*
 * XREFs of HalpBuddyAllocatorBltRemove @ 0x1405345E8
 * Callers:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140534894 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x140534A70 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpBuddyAllocatorBltRemove(_QWORD *a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v2 = (KSPIN_LOCK *)(a2 + 104);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v5 = (_QWORD *)*a1;
  v6 = v4;
  if ( (_QWORD *)*a1 != a1 )
  {
    v7 = (_QWORD *)a1[1];
    if ( (_QWORD *)v5[1] != a1 || (_QWORD *)*v7 != a1 )
      __fastfail(3u);
    *v7 = v5;
    v5[1] = v7;
    a1[1] = a1;
    *a1 = a1;
  }
  KxReleaseSpinLock(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
