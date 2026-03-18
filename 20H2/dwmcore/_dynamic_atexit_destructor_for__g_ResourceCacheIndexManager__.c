/*
 * XREFs of _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x1800F3AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__()
{
  DeleteCriticalSection(&g_ResourceCacheIndexManager);
}
