/*
 * XREFs of _GameInputProcessor::_GameInputProcessor_::_1_::dtor$1 @ 0x18017BD15
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GameInputProcessor::_GameInputProcessor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 24LL));
}
