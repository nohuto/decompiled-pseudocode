/*
 * XREFs of MiLockSectionControlArea @ 0x1403544E8
 * Callers:
 *     MmOnlySystemCacheViewsPresent @ 0x140326BC0 (MmOnlySystemCacheViewsPresent.c)
 *     MmDisableModifiedWriteOfSection @ 0x140353FE0 (MmDisableModifiedWriteOfSection.c)
 *     MmGetImageFileSignatureInformation @ 0x140354060 (MmGetImageFileSignatureInformation.c)
 *     MiReferenceExistingControlArea @ 0x140354104 (MiReferenceExistingControlArea.c)
 *     MmEnoughMemoryForWrite @ 0x1403541BC (MmEnoughMemoryForWrite.c)
 *     MiComputeFlushRange @ 0x140354434 (MiComputeFlushRange.c)
 *     MmUpdateSectionIoAttribution @ 0x140355A70 (MmUpdateSectionIoAttribution.c)
 *     MiFlushDataSection @ 0x140355B28 (MiFlushDataSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, KIRQL *a3)
{
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  _DWORD *v19; // r8

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C4C800);
    v7 = v6;
    *a3 = v6;
    v8 = a2 == 1 ? *a1 : a1[2];
    if ( !v8 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v8 + 72)) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
      return v8;
    }
    v10 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v19 = v17->SchedulerAssist;
        v15 = (v18 & v19[5]) == 0;
        v19[5] &= v18;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(v7);
  return 0LL;
}
