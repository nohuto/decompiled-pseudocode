/*
 * XREFs of _dynamic_atexit_destructor_for__g_powerReferenceManager__ @ 0x18007D890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_powerReferenceManager__()
{
  std::unique_ptr<CPowerReferenceManager>::~unique_ptr<CPowerReferenceManager>(&g_powerReferenceManager);
}
