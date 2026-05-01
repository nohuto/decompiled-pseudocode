/*
 * XREFs of ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18031A684
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180318B44 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003704C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x1803255A4 (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1803256A8 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlAllUpViewController::HandleSnappingCommands(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int AppViewFromSwitchItem; // eax
  unsigned int v9; // edi
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  struct IInspectable *v14; // rcx
  struct IInspectable *v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      211LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  XamlBaseViewController::DismissView(a1 + 8);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(v7, a2, &v17);
  if ( AppViewFromSwitchItem < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      215LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)AppViewFromSwitchItem);
    __debugbreak();
  }
  v9 = 2;
  v10 = a3 - 1501;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
LABEL_9:
      v9 = 1;
      goto LABEL_11;
    }
    v12 = v11 - 7;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_11;
      goto LABEL_9;
    }
  }
  v9 = 0;
LABEL_11:
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  if ( *(_QWORD *)(a1 + 176) )
  {
    v13 = Microsoft::WRL::WeakRef::InternalResolve(
            (Microsoft::WRL::WeakRef *)(a1 + 176),
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &v16);
    v14 = v16;
  }
  else
  {
    v14 = 0LL;
    v16 = 0LL;
    v13 = -2147024809;
  }
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      240LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  ((void (__fastcall *)(struct IInspectable *, __int64, _QWORD, _QWORD, _BYTE *))v14->lpVtbl->GetIids)(
    v14,
    v17,
    v9,
    0LL,
    v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
}
