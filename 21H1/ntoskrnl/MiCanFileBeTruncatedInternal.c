/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x1402CFE0C
 * Callers:
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1402CFD90 (MmCanFileBeTruncated.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiEndingOffset @ 0x14027D6D0 (MiEndingOffset.c)
 *     MiFindLastSubsection @ 0x1402BF004 (MiFindLastSubsection.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmFlushImageSection @ 0x140306E90 (MmFlushImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  bool v8; // zf
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  char *DataSectionObject; // rdi
  __int64 LastSubsection; // rax
  __int64 i; // rcx
  unsigned __int64 v17; // rax
  volatile LONG *v18; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax

  while ( 1 )
  {
    v8 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v8 )
    {
      v10 = ExAcquireSpinLockExclusive(&dword_140C4C8C0);
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v8 = (v22 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v22;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    LOBYTE(v10) = ExAcquireSpinLockExclusive(&dword_140C4C8C0);
LABEL_3:
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v32 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v8 = (v35 & v34[5]) == 0;
            v34[5] &= v35;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
      }
      __writecr8((unsigned __int8)v10);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72, v9, v11, v12) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v8 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8((unsigned __int8)v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
  if ( *((_DWORD *)DataSectionObject + 14) & 1 | ((*((_DWORD *)DataSectionObject + 14) & 2) != 0)
    || *((_QWORD *)DataSectionObject + 14) > 1uLL && (*((_DWORD *)DataSectionObject + 14) & 8) == 0 && !a4 )
  {
    goto LABEL_22;
  }
  if ( *((_QWORD *)DataSectionObject + 6) && (a3 != 1 || *((_QWORD *)DataSectionObject + 5) && a4 != 1) )
  {
    if ( a2 )
    {
      LastSubsection = (__int64)(DataSectionObject + 128);
      if ( *((_QWORD *)DataSectionObject + 8) )
        LastSubsection = MiFindLastSubsection((__int64)DataSectionObject, 1);
      for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
        LastSubsection = i;
      v17 = MiEndingOffset(LastSubsection);
      if ( *a2 >= v17 )
      {
        v31 = (v17 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *a2 < v31 )
          *a2 = v31;
        goto LABEL_11;
      }
      v18 = (volatile LONG *)(DataSectionObject + 72);
      goto LABEL_20;
    }
LABEL_22:
    v18 = (volatile LONG *)(DataSectionObject + 72);
LABEL_20:
    ExReleaseSpinLockExclusiveFromDpcLevel(v18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v8 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    __writecr8((unsigned __int8)v10);
    return 0LL;
  }
LABEL_11:
  *a5 = v10;
  return DataSectionObject;
}
