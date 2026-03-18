/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1407B3E1C
 * Callers:
 *     FsRtlInitSystem @ 0x140A68230 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C47528 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
