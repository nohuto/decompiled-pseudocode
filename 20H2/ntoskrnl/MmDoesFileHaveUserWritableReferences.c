/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x140303360
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x140303474 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *DataSectionObject; // rdi
  volatile LONG *v10; // r14
  ULONG v11; // edi
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // rax
  _DWORD *v18; // r9
  int v19; // edx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax

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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C800, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_140C4C800, CurrentIrql, v1, (__int64)SchedulerAssist);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v15 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      return 0;
    }
    v10 = (volatile LONG *)(DataSectionObject + 72);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72, v5, v6, v7) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          SchedulerAssist = v13->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          v1 = (unsigned int)v14 & SchedulerAssist[5];
          SchedulerAssist[5] = v1;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
  v11 = MiDoesControlAreaHaveUserWritableReferences(DataSectionObject) != 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
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
        v15 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v11;
}
