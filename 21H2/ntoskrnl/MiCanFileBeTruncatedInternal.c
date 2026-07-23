/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x14021E62C
 * Callers:
 *     MmCanFileBeTruncated @ 0x14021E5B0 (MmCanFileBeTruncated.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 * Callees:
 *     MiFindLastSubsection @ 0x14021E97C (MiFindLastSubsection.c)
 *     MmFlushImageSection @ 0x140237290 (MmFlushImageSection.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiEndingOffset @ 0x140327590 (MiEndingOffset.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  bool v8; // zf
  unsigned __int64 v9; // rbx
  char *DataSectionObject; // rdi
  __int64 LastSubsection; // rax
  __int64 i; // rcx
  unsigned __int64 v14; // rax
  volatile LONG *v15; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax

  while ( 1 )
  {
    v8 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v8 )
    {
      v9 = ExAcquireSpinLockExclusive(&dword_140C4C9C0);
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v8 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    LOBYTE(v9) = ExAcquireSpinLockExclusive(&dword_140C4C9C0);
LABEL_3:
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v8 = (v32 & v31[5]) == 0;
            v31[5] &= v32;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
      }
      __writecr8((unsigned __int8)v9);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8((unsigned __int8)v9);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
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
        LastSubsection = MiFindLastSubsection(DataSectionObject, 1LL);
      for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
        LastSubsection = i;
      v14 = MiEndingOffset(LastSubsection);
      if ( *a2 >= v14 )
      {
        v28 = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *a2 < v28 )
          *a2 = v28;
        goto LABEL_11;
      }
      v15 = (volatile LONG *)(DataSectionObject + 72);
      goto LABEL_20;
    }
LABEL_22:
    v15 = (volatile LONG *)(DataSectionObject + 72);
LABEL_20:
    ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8((unsigned __int8)v9);
    return 0LL;
  }
LABEL_11:
  *a5 = v9;
  return DataSectionObject;
}
