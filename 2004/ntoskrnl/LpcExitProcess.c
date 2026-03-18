/*
 * XREFs of LpcExitProcess @ 0x14061AD78
 * Callers:
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140220940 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x14061ADBC (AlpcpCleanupProcessViews.c)
 */

__int64 __fastcall LpcExitProcess(struct _KPROCESS *a1)
{
  if ( a1[1].SecureState.SecureHandle )
  {
    PsReturnProcessPagedPoolQuota(a1, a1[1].SecureState.SecureHandle);
    a1[1].SecureState.SecureHandle = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
