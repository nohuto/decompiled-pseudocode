/*
 * XREFs of _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18003C497
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
