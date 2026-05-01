/*
 * XREFs of _lambda_898c08e1df1d86c3a23ee6020b72647e_::operator() @ 0x180173710
 * Callers:
 *     _lambda_898c08e1df1d86c3a23ee6020b72647e_::_lambda_invoker_cdecl_ @ 0x180173590 (_lambda_898c08e1df1d86c3a23ee6020b72647e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x1801739FC (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 */

__int64 __fastcall lambda_898c08e1df1d86c3a23ee6020b72647e_::operator()(__int64 a1, HWND a2, HWND *a3)
{
  int v5; // ecx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  int pvAttribute; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  if ( (unsigned int)GetWindowBand(a2, &v7) )
  {
    if ( (unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher((unsigned int)v7) )
      return 0LL;
    if ( v5 == 13
      && GetPropW(a2, L"ConsiderByRealmActivationHistory") == HANDLE_FLAG_INHERIT
      && IsWindowVisible(a2)
      && DwmGetWindowAttribute(a2, 0xEu, &pvAttribute, 4u) >= 0
      && !pvAttribute )
    {
      *a3 = a2;
      return 0LL;
    }
  }
  return 1LL;
}
