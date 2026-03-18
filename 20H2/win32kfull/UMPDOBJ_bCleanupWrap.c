/*
 * XREFs of UMPDOBJ_bCleanupWrap @ 0x1C0071AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0071AF8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall UMPDOBJ_bCleanupWrap(UMPDOBJ *a1)
{
  return UMPDOBJ::bCleanupWorker(a1);
}
