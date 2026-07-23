/*
 * XREFs of HalpUpdateCoolingPacket @ 0x1404DCC40
 * Callers:
 *     HalpStartPccCommand @ 0x140866D88 (HalpStartPccCommand.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpUpdateCoolingPacket(__int64 a1)
{
  KIRQL v2; // al
  char v3; // si
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v2 = ExAcquireSpinLockExclusive(&HalpMemoryCoolingPacketLock);
  v3 = HalpAcquiredInterface;
  v4 = v2;
  if ( a1 && !HalpAcquiredInterface )
  {
    HalpMemoryCoolingPacket = *(_OWORD *)a1;
    HalpAcquiredInterface = 1;
    xmmword_140C48C90 = *(_OWORD *)(a1 + 16);
    xmmword_140C48CA0 = *(_OWORD *)(a1 + 32);
    xmmword_140C48CB0 = *(_OWORD *)(a1 + 48);
    xmmword_140C48CC0 = *(_OWORD *)(a1 + 64);
    xmmword_140C48CD0 = *(_OWORD *)(a1 + 80);
    xmmword_140C48CE0 = *(_OWORD *)(a1 + 96);
    xmmword_140C48CF0 = *(_OWORD *)(a1 + 112);
    qword_140C48D00 = *(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpMemoryCoolingPacketLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v3;
}
