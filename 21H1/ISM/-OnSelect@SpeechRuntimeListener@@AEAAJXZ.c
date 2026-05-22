/*
 * XREFs of ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x18008E9E4
 * Callers:
 *     ?OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z @ 0x18008E9A0 (-OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x1800899E4 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x18008B0A0 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x18008E92C (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall SpeechRuntimeListener::OnSelect(SpeechRuntimeListener *this)
{
  __int64 v2; // rcx
  ISMTracing *v3; // rcx
  int v4; // r9d
  int v5; // eax
  MPCRawInputProvider *v6; // rcx
  int v7; // eax
  int v9[4]; // [rsp+30h] [rbp-808h] BYREF
  __int64 v10; // [rsp+40h] [rbp-7F8h]
  int v11; // [rsp+48h] [rbp-7F0h]
  int v12; // [rsp+2F0h] [rbp-548h]
  __int64 v13; // [rsp+2F8h] [rbp-540h]
  int v14; // [rsp+304h] [rbp-534h]
  wil::details::in1diag3 *retaddr; // [rsp+838h] [rbp+0h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v2, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogSpeechRuntimeListenerFunct_(v3, L"OnSelect");
  }
  memset_0(v9, 0, 0x7F0uLL);
  v4 = *((_DWORD *)this + 20);
  v11 = 2032;
  v5 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7, 0x40000, v4, (__int64)v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      52LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (MPCRawInputProvider *)*((_QWORD *)this + 9);
  v14 = -1;
  v13 = v10;
  v12 = 1;
  v7 = MPCRawInputProvider::QueueInput(v6, (struct InputInfo *)v9);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      61LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  return 0LL;
}
