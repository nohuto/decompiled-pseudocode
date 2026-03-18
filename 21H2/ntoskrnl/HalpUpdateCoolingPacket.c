/*
 * XREFs of HalpUpdateCoolingPacket @ 0x14052A6F0
 * Callers:
 *     HalpStartPccCommand @ 0x14090AF30 (HalpStartPccCommand.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
    xmmword_140C4A050 = *(_OWORD *)(a1 + 16);
    xmmword_140C4A060 = *(_OWORD *)(a1 + 32);
    xmmword_140C4A070 = *(_OWORD *)(a1 + 48);
    xmmword_140C4A080 = *(_OWORD *)(a1 + 64);
    xmmword_140C4A090 = *(_OWORD *)(a1 + 80);
    xmmword_140C4A0A0 = *(_OWORD *)(a1 + 96);
    xmmword_140C4A0B0 = *(_OWORD *)(a1 + 112);
    qword_140C4A0C0 = *(_QWORD *)(a1 + 72);
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
