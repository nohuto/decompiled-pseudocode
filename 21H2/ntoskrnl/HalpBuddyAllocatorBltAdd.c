/*
 * XREFs of HalpBuddyAllocatorBltAdd @ 0x1405342C0
 * Callers:
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x140533E60 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140534894 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x140534970 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpBuddyAllocatorReserveLogicalAddress @ 0x140534A70 (HalpBuddyAllocatorReserveLogicalAddress.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpBuddyAllocatorBltAdd(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 **v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  _BitScanForward64(&v3, a1[7]);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v6 = *(_QWORD *)(a2 + 96) + 16LL * (unsigned int)(v3 - 12);
  v7 = *(__int64 ***)(v6 + 8);
  if ( *v7 != (__int64 *)v6 )
    __fastfail(3u);
  *a1 = v6;
  a1[1] = (__int64)v7;
  *v7 = a1;
  *(_QWORD *)(v6 + 8) = a1;
  KxReleaseSpinLock((PKSPIN_LOCK)(a2 + 104));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
