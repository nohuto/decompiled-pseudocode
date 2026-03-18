/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1407C2654
 * Callers:
 *     FsRtlInitSystem @ 0x140A6EA60 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140C47568 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = (__int64)&FsRtlTieringHeatData;
  return ExInitializeResourceLite(&Resource);
}
