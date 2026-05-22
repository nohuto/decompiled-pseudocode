/*
 * XREFs of _KeyboardDockServer::KeyboardDockServer_::_1_::dtor$2 @ 0x180050AE1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardDockServer::KeyboardDockServer_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::map<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>::~map<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>(*(_QWORD *)(a2 + 48) + 80LL);
}
