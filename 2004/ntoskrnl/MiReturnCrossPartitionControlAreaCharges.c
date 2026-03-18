/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x140525454
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x14060C198 (MiMapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiUnmapImageInSystemSpace @ 0x1406EB634 (MiUnmapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiReleaseSessionDriverCharges @ 0x140766928 (MiReleaseSessionDriverCharges.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x14024A370 (MiDecrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
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
             *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             v2,
             v4);
  return result;
}
