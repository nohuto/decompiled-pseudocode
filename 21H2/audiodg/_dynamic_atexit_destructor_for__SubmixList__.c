/*
 * XREFs of _dynamic_atexit_destructor_for__SubmixList__ @ 0x14002DBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__SubmixList__()
{
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)&SubmixList);
}
