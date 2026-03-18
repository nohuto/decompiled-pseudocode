/*
 * XREFs of _UMPDOBJ_bCleanupWrap@4 @ 0x1F47BA
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QAEHXZ @ 0x1F41F3 (-bCleanupWorker@UMPDOBJ@@QAEHXZ.c)
 */

int __stdcall UMPDOBJ_bCleanupWrap(UMPDOBJ *a1)
{
  return UMPDOBJ::bCleanupWorker(a1);
}
