/*
 * XREFs of MiLockSectionControlArea @ 0x14022F9DC
 * Callers:
 *     MiComputeFlushRange @ 0x14022F928 (MiComputeFlushRange.c)
 *     MmEnoughMemoryForWrite @ 0x140232028 (MmEnoughMemoryForWrite.c)
 *     MiFlushDataSection @ 0x1402BED80 (MiFlushDataSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1402D0098 (MmOnlySystemCacheViewsPresent.c)
 *     MmUpdateSectionIoAttribution @ 0x1402DCBA4 (MmUpdateSectionIoAttribution.c)
 *     MiReferenceExistingControlArea @ 0x14030651C (MiReferenceExistingControlArea.c)
 *     MmGetImageFileSignatureInformation @ 0x14030D420 (MmGetImageFileSignatureInformation.c)
 *     MmDisableModifiedWriteOfSection @ 0x14030F740 (MmDisableModifiedWriteOfSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, KIRQL *a3)
{
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C4C8C0);
    v10 = v6;
    *a3 = v6;
    v11 = a2 == 1 ? *a1 : a1[2];
    if ( !v11 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v11 + 72, v7, v8, v9) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
      return v11;
    }
    v13 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v22 = v20->SchedulerAssist;
        v18 = (v21 & v22[5]) == 0;
        v22[5] &= v21;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v10);
  return 0LL;
}
