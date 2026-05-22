/*
 * XREFs of _KeyboardDockServer::KeyboardDockServer_::_1_::dtor$1 @ 0x180050A7B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardDockServer::KeyboardDockServer_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>(*(_QWORD *)(a2 + 48) + 56LL);
}
