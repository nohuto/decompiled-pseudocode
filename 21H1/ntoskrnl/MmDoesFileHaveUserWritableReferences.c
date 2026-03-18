/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x1402F3370
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x1402F3484 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *DataSectionObject; // rdi
  volatile LONG *v7; // r14
  ULONG v8; // edi
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // rax
  _DWORD *v15; // r9
  int v16; // edx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v1 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = v1;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C8C0, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_140C4C8C0, CurrentIrql, v1, SchedulerAssist);
    DataSectionObject = (volatile signed __int32 *)SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v12 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      return 0;
    }
    v7 = DataSectionObject + 18;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          SchedulerAssist = v10->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          v1 = (unsigned int)v11 & SchedulerAssist[5];
          SchedulerAssist[5] = v1;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
  v8 = MiDoesControlAreaHaveUserWritableReferences(DataSectionObject) != 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
