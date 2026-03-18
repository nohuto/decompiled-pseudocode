/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x14033B744
 * Callers:
 *     NtSetTimerResolution @ 0x1406F3D70 (NtSetTimerResolution.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpInsertTimerResolutionEntry(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v3 = ExpTimerResolutionListHead;
  v4 = (__int64 *)(a1 + 2080);
  if ( *(__int64 **)(ExpTimerResolutionListHead + 8) != &ExpTimerResolutionListHead )
    __fastfail(3u);
  v4[1] = (__int64)&ExpTimerResolutionListHead;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  ExpTimerResolutionListHead = (__int64)v4;
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  result = (unsigned int)KiIrqlFlags;
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
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
