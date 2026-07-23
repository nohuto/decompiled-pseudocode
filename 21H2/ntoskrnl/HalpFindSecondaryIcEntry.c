/*
 * XREFs of HalpFindSecondaryIcEntry @ 0x1404D0E98
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x1404D0DEC (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1404D105C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x1404D13B4 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x140865644 (HalpEnableSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140865730 (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpFindSecondaryIcEntry(unsigned int a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v2 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
  v3 = SecondaryIcList;
  v4 = v2;
  v5 = 0LL;
  while ( (__int64 *)v3 != &SecondaryIcList )
  {
    v6 = *(_DWORD *)(v3 + 16);
    if ( a1 >= v6 && a1 < v6 + *(_DWORD *)(v3 + 20) )
    {
      v5 = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 112));
      break;
    }
    v3 = *(_QWORD *)v3;
  }
  KxReleaseSpinLock(&SecondaryIcListSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v5;
}
