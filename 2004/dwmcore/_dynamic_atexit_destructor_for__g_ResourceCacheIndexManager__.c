/*
 * XREFs of _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x1800F3E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__()
{
  DeleteCriticalSection(&g_ResourceCacheIndexManager);
}
