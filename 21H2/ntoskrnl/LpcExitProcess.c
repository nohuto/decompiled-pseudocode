/*
 * XREFs of LpcExitProcess @ 0x1407E0CE4
 * Callers:
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x1407E0D28 (AlpcpCleanupProcessViews.c)
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
