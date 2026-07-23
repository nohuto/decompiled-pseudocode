/*
 * XREFs of HalpDmaReferenceDomainObject @ 0x1403A1564
 * Callers:
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A1344 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalJoinDmaDomain @ 0x1403C72B0 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateDomain @ 0x1403C7388 (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x1404C4E90 (HalpDmaIsAutomaticDomain.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5940 (HalAllocateCommonBufferVector.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB530 (HalpAllocateCommonBufferThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpDmaReferenceDomainObject(__int64 a1)
{
  char v2; // bl
  KIRQL v3; // al
  __int64 *v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v4 = (__int64 *)HalpDmaDomainList;
  v5 = v3;
  while ( v4 != &HalpDmaDomainList )
  {
    if ( (__int64 *)a1 == v4 )
    {
      ++*(_DWORD *)(a1 + 128);
      v2 = 1;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  KxReleaseSpinLock(&HalpDmaDomainListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v2 == 0 ? 0xC000000D : 0;
}
