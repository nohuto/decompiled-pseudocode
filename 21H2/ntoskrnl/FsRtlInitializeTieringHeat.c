/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1407C6910
 * Callers:
 *     FsRtlInitSystem @ 0x140A6B9E0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC50 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C476A8 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
