/*
 * XREFs of _CProcess::CProcess_::_1_::dtor$10 @ 0x18003BD34
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::CProcess_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>((volatile signed __int32 **)(*(_QWORD *)(a2 + 48) + 256LL));
}
