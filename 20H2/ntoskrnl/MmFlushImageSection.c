/*
 * XREFs of MmFlushImageSection @ 0x1403159F0
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x14030E88C (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x140315C04 (MiAttemptSectionDelete.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  BOOLEAN v2; // di
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile LONG *DataSectionObject; // rsi
  char *ImageSectionObject; // rsi
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v20; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  int v24; // eax
  _DWORD *v25; // r8

  v2 = 0;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C4C800);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile LONG *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18, v5, v7, v8) )
          goto LABEL_17;
        if ( *((_QWORD *)DataSectionObject + 6)
          || (DataSectionObject[14] & 2) != 0
          || *((_QWORD *)DataSectionObject + 14) > 1uLL )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
          ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v17 = (v20 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v20;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          goto LABEL_7;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
      }
    }
    ImageSectionObject = (char *)SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v25 = v23->SchedulerAssist;
            v17 = (v24 & v25[5]) == 0;
            v25[5] &= v24;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
      }
      v2 = 1;
LABEL_7:
      __writecr8(v6);
      return v2;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 72, v5, v7, v8) )
      break;
LABEL_17:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
    }
    __writecr8(v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
  LOBYTE(v12) = v6;
  return MiAttemptSectionDelete(ImageSectionObject, v12, 0LL);
}
