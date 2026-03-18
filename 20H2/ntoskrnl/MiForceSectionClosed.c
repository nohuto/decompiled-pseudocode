/*
 * XREFs of MiForceSectionClosed @ 0x140315B60
 * Callers:
 *     MmForceSectionClosed @ 0x140315B20 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x140529570 (MmForceSectionClosedEx.c)
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x140315C04 (MiAttemptSectionDelete.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiForceSectionClosed(_QWORD *a1, char a2)
{
  int v3; // r14d
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  _DWORD *v20; // r8

  v3 = a2 & 1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C4C800);
    v9 = v3 ? *a1 : a1[2];
    if ( !v9 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9 + 72, v5, v7, v8) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
      LOBYTE(v10) = v6;
      return 2 - (unsigned int)((unsigned __int8)MiAttemptSectionDelete(v9, v10, a2 & 4) != 0);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v20 = v18->SchedulerAssist;
        v16 = (v19 & v20[5]) == 0;
        v20[5] &= v19;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
