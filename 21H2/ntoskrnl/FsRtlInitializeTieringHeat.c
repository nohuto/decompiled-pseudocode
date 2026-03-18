/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x140855918
 * Callers:
 *     FsRtlInitSystem @ 0x140B25C04 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C48A88 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
