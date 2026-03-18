/*
 * XREFs of FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x1404EB700
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404EB2C8 (FsRtlpCancelReadOnlyOplockIrp.c)
 */

void __fastcall FsRtlpReadOnlyOplockIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelReadOnlyOplockIrp(a2, 0);
}
