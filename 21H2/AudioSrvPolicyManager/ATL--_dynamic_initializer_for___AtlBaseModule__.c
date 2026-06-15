/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800366D8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlBaseModule__()
{
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18004F0F8);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}
