/*
 * XREFs of ATL::_dynamic_atexit_destructor_for__g_strmgr__ @ 0x180042C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **ATL::_dynamic_atexit_destructor_for__g_strmgr__()
{
  void **result; // rax

  result = &ATL::CAtlStringMgr::`vftable';
  ATL::g_strmgr = &ATL::CAtlStringMgr::`vftable';
  return result;
}
