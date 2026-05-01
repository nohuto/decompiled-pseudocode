/*
 * XREFs of ?_GetVtcAppPanelWidth@PPIWin32VtcLayoutOperation@@AEAAHXZ @ 0x1800B95F4
 * Callers:
 *     _lambda_2480eb69088936ba5a175bbe748a2ddf_::operator() @ 0x1800B76E0 (_lambda_2480eb69088936ba5a175bbe748a2ddf_--operator().c)
 *     ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800BA098 (-_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::_GetVtcAppPanelWidth(PPIWin32VtcLayoutOperation *this)
{
  int v1; // r8d
  _DWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]

  (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *, _DWORD *))(*(_QWORD *)this + 152LL))(this, v3);
  v1 = 480;
  if ( v3[2] - v3[0] <= 1920 * v4 / 100 )
    v1 = 332;
  return (unsigned int)(v4 * v1 / 100);
}
