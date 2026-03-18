/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x1409D973C
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     VfFaultsInjectResourceFailure @ 0x1409D981C (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagTarget @ 0x1409DA3AC (ViFaultsIsTagTarget.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  unsigned __int64 v3; // rdi
  unsigned int IsTagTarget; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_140D483E4;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140D4840C;
    return 0LL;
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  IsTagTarget = ViFaultsIsTagTarget(a1);
  KxReleaseSpinLock(&ViFaultInjectionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( IsTagTarget )
    return (unsigned int)VfFaultsInjectResourceFailure(1LL);
  return IsTagTarget;
}
