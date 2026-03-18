/*
 * XREFs of LpcExitProcess @ 0x1406613A8
 * Callers:
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140230470 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x1406613EC (AlpcpCleanupProcessViews.c)
 */

__int64 __fastcall LpcExitProcess(ULONG_PTR a1)
{
  if ( *(_QWORD *)(a1 + 2072) )
  {
    PsReturnProcessPagedPoolQuota(a1, *(_QWORD *)(a1 + 2072));
    *(_QWORD *)(a1 + 2072) = 0LL;
  }
  return AlpcpCleanupProcessViews(a1);
}
