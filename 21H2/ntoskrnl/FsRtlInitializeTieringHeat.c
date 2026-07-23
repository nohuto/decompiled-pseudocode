/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1407C6C30
 * Callers:
 *     FsRtlInitSystem @ 0x140A6C9E0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C47728 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
