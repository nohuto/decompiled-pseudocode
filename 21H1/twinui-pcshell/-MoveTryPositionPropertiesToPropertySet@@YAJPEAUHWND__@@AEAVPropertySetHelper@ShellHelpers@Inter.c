/*
 * XREFs of ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x180016C24
 * Callers:
 *     _lambda_1499a186909557a83ff0f6afb6d3c526_::operator() @ 0x1800150A0 (_lambda_1499a186909557a83ff0f6afb6d3c526_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x18014D504 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006E488 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006E5A8 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _lambda_83a37ce19c61df11147dc746175e45d2_::operator() @ 0x180143C28 (_lambda_83a37ce19c61df11147dc746175e45d2_--operator().c)
 *     ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z @ 0x180446F00 (-CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MoveTryPositionPropertiesToPropertySet(
        HWND a1,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2)
{
  bool *v3; // r9
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  HWND *p_hWnd; // [rsp+30h] [rbp-40h] BYREF
  char v11; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v13; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  hWnd = a1;
  if ( !(unsigned int)GetPropW(a1, L"TryPositionView") )
    return 0LL;
  p_hWnd = &hWnd;
  v11 = 1;
  LOBYTE(v8) = 0;
  if ( CallerIdentity::CheckCapabilityFromWindow(
         (CallerIdentity *)hWnd,
         (HWND)&stru_180503D38,
         (const unsigned __int16 *)&v8,
         v3) < 0
    || !(_BYTE)v8 )
  {
    goto LABEL_18;
  }
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView", 0x10u, 0xFu);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(a2, v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    GetPropW(hWnd, L"TryPositionView.Left");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Left", 0x15u, 0x14u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 459LL;
      goto LABEL_17;
    }
    GetPropW(hWnd, L"TryPositionView.Top");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Top", 0x14u, 0x13u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 463LL;
      goto LABEL_17;
    }
    GetPropW(hWnd, L"TryPositionView.Right");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Right", 0x16u, 0x15u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 467LL;
      goto LABEL_17;
    }
    GetPropW(hWnd, L"TryPositionView.Bottom");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Bottom", 0x17u, 0x16u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 471LL;
      goto LABEL_17;
    }
    GetPropW(hWnd, L"TryPositionView.Flags");
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TryPositionView.Flags", 0x16u, 0x15u);
    v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(a2, v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 475LL;
      goto LABEL_17;
    }
LABEL_18:
    v11 = 0;
    lambda_83a37ce19c61df11147dc746175e45d2_::operator()(&p_hWnd);
    return 0LL;
  }
  v7 = 455LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v5,
    v8);
  v11 = 0;
  lambda_83a37ce19c61df11147dc746175e45d2_::operator()(&p_hWnd);
  return v6;
}
