/*
 * XREFs of _dynamic_atexit_destructor_for__g_CritSecSubmixList__ @ 0x14002DBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_CritSecSubmixList__()
{
  DeleteCriticalSection(&g_CritSecSubmixList);
}
