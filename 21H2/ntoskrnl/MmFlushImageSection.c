/*
 * XREFs of MmFlushImageSection @ 0x140237290
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x14021E62C (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     MiAttemptSectionDelete @ 0x1402374A4 (MiAttemptSectionDelete.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  BOOLEAN v2; // di
  unsigned __int64 v5; // rbx
  volatile LONG *DataSectionObject; // rsi
  char *ImageSectionObject; // rsi
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v17; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8

  v2 = 0;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_140C4C9C0);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile LONG *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
          goto LABEL_17;
        if ( *((_QWORD *)DataSectionObject + 6)
          || (DataSectionObject[14] & 2) != 0
          || *((_QWORD *)DataSectionObject + 14) > 1uLL )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
          ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v14 = (v17 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v17;
                if ( v14 )
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
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v19 >= 2u )
          {
            v20 = KeGetCurrentPrcb();
            v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v22 = v20->SchedulerAssist;
            v14 = (v21 & v22[5]) == 0;
            v22[5] &= v21;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
      }
      v2 = 1;
LABEL_7:
      __writecr8(v5);
      return v2;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 72) )
      break;
LABEL_17:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v10 >= 2u )
        {
          v11 = KeGetCurrentPrcb();
          v12 = v11->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
    }
    __writecr8(v5);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
  LOBYTE(v9) = v5;
  return MiAttemptSectionDelete(ImageSectionObject, v9, 0LL);
}
