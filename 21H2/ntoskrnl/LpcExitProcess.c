/*
 * XREFs of LpcExitProcess @ 0x14067DA88
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140323160 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x14067DACC (AlpcpCleanupProcessViews.c)
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
