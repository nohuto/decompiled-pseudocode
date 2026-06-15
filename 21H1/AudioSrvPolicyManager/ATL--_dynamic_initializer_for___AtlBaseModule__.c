/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180002440
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18003BF98 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlBaseModule__()
{
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_180055248);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}
