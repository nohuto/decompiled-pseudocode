/*
 * XREFs of PopPepReleaseActivityLink @ 0x14023C1C0
 * Callers:
 *     PopPepProcessEvent @ 0x14023C01C (PopPepProcessEvent.c)
 *     PopPepTryPowerDownDevice @ 0x14030D134 (PopPepTryPowerDownDevice.c)
 *     PopPepSurprisePowerOn @ 0x140388238 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14039D04C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x14056E704 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x14056E80C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14056E8F8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14056E9F0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPepReleaseActivityLink(__int64 a1, volatile LONG *a2, char a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v11; // zf

  v4 = a4;
  if ( a3 == 1 )
  {
    v6 = 0;
    v7 = (_QWORD *)(a1 + 72);
    while ( !*v7 || !*(_DWORD *)*v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= 6 )
      {
        if ( *(_BYTE *)(a1 + 136) )
          *(_BYTE *)(a1 + 125) = 0;
        break;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(a2);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
