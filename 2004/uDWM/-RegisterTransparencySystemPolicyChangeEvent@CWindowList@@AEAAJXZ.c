/*
 * XREFs of ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004A7B0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18004AC50 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18004A89C (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x18004A8B4 (--$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180087830 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

__int64 __fastcall CWindowList::RegisterTransparencySystemPolicyChangeEvent(CWindowList *this, __int64 a2, __int64 a3)
{
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details *v4; // rbx
  wil::details **v5; // r14
  wil::details *v6; // rsi
  DWORD LastError; // edi
  struct wil::details::wnf_subscription_state_base *v9; // rdx
  wil::details *v10[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v12[15]; // [rsp+38h] [rbp-90h] BYREF

  v12[1] = this;
  v12[0] = off_1800C50B0;
  v12[13] = v12;
  v4 = 0LL;
  v5 = (wil::details **)((char *)this + 592);
  if ( (int)wil::details::make_wnf_subscription_state<int>(this, v11, a3, v10) >= 0 )
    v4 = v10[0];
  if ( v5 != v10 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      LastError = GetLastError();
      wil::details::delete_wnf_subscription_state(v6, v9);
      SetLastError(LastError);
    }
    *v5 = v4;
    v4 = 0LL;
  }
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v3);
  wistd::function<void (int const &)>::~function<void (int const &)>(v11);
  return 0LL;
}
