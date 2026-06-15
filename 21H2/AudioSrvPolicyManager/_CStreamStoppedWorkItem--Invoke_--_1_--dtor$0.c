/*
 * XREFs of _CStreamStoppedWorkItem::Invoke_::_1_::dtor$0 @ 0x18003C7E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamStoppedWorkItem::Invoke_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)(a2 + 128));
}
