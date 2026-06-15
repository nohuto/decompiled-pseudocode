/*
 * XREFs of _CAudioSessionManagerProvider::RuntimeClassInitialize_::_1_::dtor$5 @ 0x18007D1C6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManagerProvider::RuntimeClassInitialize_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
