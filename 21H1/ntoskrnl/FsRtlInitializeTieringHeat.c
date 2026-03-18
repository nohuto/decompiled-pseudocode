/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1407B0CAC
 * Callers:
 *     FsRtlInitSystem @ 0x140A67DB0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C476A8 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
