/*
 * XREFs of _dynamic_atexit_destructor_for__g_csVadList__ @ 0x18007D770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_csVadList__()
{
  DeleteCriticalSection(&g_csVadList);
}
