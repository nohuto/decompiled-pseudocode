/*
 * XREFs of HalpIommuDereferenceHardwareDomain @ 0x1404C4214
 * Callers:
 *     HalpIommuJoinDmaDomain @ 0x1404C49C4 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C4A9C (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1403772D0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuFreeDomain @ 0x1404C6F6C (HalpIommuFreeDomain.c)
 */

__int64 __fastcall HalpIommuDereferenceHardwareDomain(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v11; // zf

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  if ( a1 != HalpIommuBypassDomain )
    --a2[2];
  if ( !a2[2] )
  {
    v5 = *a2;
    v6 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    HalpIommuFreeDomain(a2[3], a2 + 4);
    HalpMmAllocCtxFree(v7, (__int64)a2);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
