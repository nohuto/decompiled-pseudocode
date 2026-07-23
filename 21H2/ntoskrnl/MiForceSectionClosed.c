/*
 * XREFs of MiForceSectionClosed @ 0x140237400
 * Callers:
 *     MmForceSectionClosed @ 0x1402373C0 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x14052B2B0 (MmForceSectionClosedEx.c)
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiAttemptSectionDelete @ 0x1402374A4 (MiAttemptSectionDelete.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiForceSectionClosed(_QWORD *a1, char a2)
{
  int v3; // r14d
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  _DWORD *v17; // r8

  v3 = a2 & 1;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_140C4C9C0);
    v6 = v3 ? *a1 : a1[2];
    if ( !v6 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v6 + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
      LOBYTE(v7) = v5;
      return 2 - (unsigned int)((unsigned __int8)MiAttemptSectionDelete(v6, v7, a2 & 4) != 0);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
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
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v17 = v15->SchedulerAssist;
        v13 = (v16 & v17[5]) == 0;
        v17[5] &= v16;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
  }
  __writecr8(v5);
  return 0LL;
}
