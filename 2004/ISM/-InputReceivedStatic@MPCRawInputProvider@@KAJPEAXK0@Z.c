/*
 * XREFs of ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x18008A710
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x18008AA40 (-OnInputReceived@MPCRawInputProvider@@IEAAJXZ.c)
 */

__int64 __fastcall MPCRawInputProvider::InputReceivedStatic(MPCRawInputProvider *a1, int a2, void *a3, const char *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      115LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      a4);
    __debugbreak();
  }
  if ( a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      116LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      a4);
    __debugbreak();
  }
  v4 = MPCRawInputProvider::OnInputReceived(a1);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      120LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return 0LL;
}
