/*
 * XREFs of KeSetProcessSchedulingGroup @ 0x1402FCD88
 * Callers:
 *     PspSetProcessSchedulingGroup @ 0x140655B10 (PspSetProcessSchedulingGroup.c)
 *     PspTerminateProcess @ 0x1406B3CF4 (PspTerminateProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetThreadSchedulingGroup @ 0x14034E548 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r12
  _QWORD *i; // rbx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v11; // r9
  int v12; // edx
  bool v13; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v5 = *(_QWORD *)(a1 + 880);
  if ( v5 != a2 )
  {
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      if ( *(i - 82) != a2 )
        KiSetThreadSchedulingGroup(i - 95, a2);
    }
    *(_QWORD *)(a1 + 880) = a2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
