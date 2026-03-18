/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x14030F1E0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402A2490 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403857EC (FsRtlpRequestExclusiveOplock.c)
 * Callees:
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x140239CF8 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  unsigned __int8 CurrentIrql; // bl
  char *DataSectionObject; // rdi
  volatile LONG *v5; // r14
  ULONG v6; // edi
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // rax
  _DWORD *v18; // r9
  int v19; // edx
  unsigned __int8 v20; // al

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4F100, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_140C4F100, CurrentIrql);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v8 = CurrentPrcb->SchedulerAssist;
            v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v10 = (v9 & v8[5]) == 0;
            v8[5] &= v9;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      return 0;
    }
    v5 = (volatile LONG *)(DataSectionObject + 72);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  v6 = MiDoesControlAreaHaveUserWritableReferences((__int64)DataSectionObject) != 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
