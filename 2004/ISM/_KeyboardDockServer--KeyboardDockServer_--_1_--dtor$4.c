/*
 * XREFs of _KeyboardDockServer::KeyboardDockServer_::_1_::dtor$4 @ 0x180050B0D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardDockServer::KeyboardDockServer_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return std::map<DockInputIdentity,KeyboardDockInput>::~map<DockInputIdentity,KeyboardDockInput>(*(_QWORD *)(a2 + 48) + 112LL);
}
