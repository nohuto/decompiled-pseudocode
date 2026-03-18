/*
 * XREFs of LpcExitProcess @ 0x140660498
 * Callers:
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140279990 (PsReturnProcessPagedPoolQuota.c)
 *     AlpcpCleanupProcessViews @ 0x1406604DC (AlpcpCleanupProcessViews.c)
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
