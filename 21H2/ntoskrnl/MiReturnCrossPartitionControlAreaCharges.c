/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4
 * Callers:
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiReleaseSessionDriverCharges @ 0x1406EB5A4 (MiReleaseSessionDriverCharges.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406F39F8 (MiUnmapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
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
  v4 = MiDecrementSubsectionViewCount((_QWORD *)(a1 + 128), 24);
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
             *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             v2,
             v4);
  return result;
}
