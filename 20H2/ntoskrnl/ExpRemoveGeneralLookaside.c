/*
 * XREFs of ExpRemoveGeneralLookaside @ 0x14031D094
 * Callers:
 *     ExDeletePagedLookasideList @ 0x14031CF90 (ExDeletePagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x14031D010 (ExDeleteLookasideListEx.c)
 *     ExDeleteNPagedLookasideList @ 0x14039A6B0 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

PVOID __fastcall ExpRemoveGeneralLookaside(PKSPIN_LOCK SpinLock, __int64 a2)
{
  PVOID *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 *v6; // r9
  __int64 **v7; // r8
  PVOID result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v4 = (PVOID *)(a2 + 64);
  v5 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v6 = (__int64 *)*v4;
  v7 = *(__int64 ***)(a2 + 72);
  if ( *((_QWORD *)*v4 + 1) != a2 + 64 || *v7 != (__int64 *)v4 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  *(_WORD *)(a2 + 16) = 0;
  result = MmBadPointer;
  *v4 = MmBadPointer;
  return result;
}
