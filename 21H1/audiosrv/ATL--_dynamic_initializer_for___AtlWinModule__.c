/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x180054620 (--0CAtlWinModule@ATL@@QEAA@XZ.c)
 */

int __fastcall ATL::_dynamic_initializer_for___AtlWinModule__(ATL::CAtlWinModule *a1)
{
  ATL::CAtlWinModule::CAtlWinModule(a1);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}
