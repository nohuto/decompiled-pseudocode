/*
 * XREFs of RtlCSparseBitmapLeaveLockingRegion @ 0x140361578
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x1403607AC (RtlpCSparseBitmapPageDecommit.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x140360BD4 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x1403614D4 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140361800 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlCSparseBitmapLeaveLockingRegion(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  if ( !*(_BYTE *)(*((_QWORD *)a1 + 1) + 48LL) )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), a2, a3, a4);
  result = (unsigned int)KiIrqlFlags;
  v5 = *a1;
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
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
