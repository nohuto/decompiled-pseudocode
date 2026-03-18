/*
 * XREFs of RtlCSparseBitmapLeaveLockingRegion @ 0x1402D97A4
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x1402D89D8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1402D8E00 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x1402D9700 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402D9A2C (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlCSparseBitmapLeaveLockingRegion(unsigned __int8 *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf

  if ( !*(_BYTE *)(*((_QWORD *)a1 + 1) + 48LL) )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  result = (unsigned int)KiIrqlFlags;
  v2 = *a1;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v5 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
