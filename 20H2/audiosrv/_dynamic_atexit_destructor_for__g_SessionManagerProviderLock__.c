/*
 * XREFs of _dynamic_atexit_destructor_for__g_SessionManagerProviderLock__ @ 0x18007CD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_SessionManagerProviderLock__()
{
  DeleteCriticalSection(&g_SessionManagerProviderLock);
}
