/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x140524E04
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiSessionInsertImage @ 0x14039F454 (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x1406412E8 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406CA3B4 (MiUnmapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiReleaseSessionDriverCharges @ 0x140764F68 (MiReleaseSessionDriverCharges.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C48A8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x1402A33A0 (MiDecrementSubsectionViewCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionControlAreaCharges(__int64 a1)
{
  BOOL v2; // r14d
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = *(_QWORD *)(a1 + 64) != 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = MiDecrementSubsectionViewCount((__int64 *)(a1 + 128), 24);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( v4 )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             v2,
             v4);
  return result;
}
