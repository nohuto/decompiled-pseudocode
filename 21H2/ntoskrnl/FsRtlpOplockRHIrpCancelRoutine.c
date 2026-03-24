/*
 * XREFs of FsRtlpOplockRHIrpCancelRoutine @ 0x1402AD9D0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelOplockRHIrp @ 0x1402AD9F0 (FsRtlpCancelOplockRHIrp.c)
 */

__int64 __fastcall FsRtlpOplockRHIrpCancelRoutine(__int64 a1, __int64 a2)
{
  return FsRtlpCancelOplockRHIrp(a2, 0LL);
}
