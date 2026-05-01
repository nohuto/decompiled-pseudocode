/*
 * XREFs of ?OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x1802EE158
 * Callers:
 *     ?OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x1800F7D10 (-OnSwitchItemInvoked@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802EDDF8 (-GetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _OnSwitchItemInvoked__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAXPE_AAUISwitchItem_Multitasking_3Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _GUID v5; // [rsp+40h] [rbp+18h] BYREF

  AppViewDataSourceHelpers::GetApplicationViewForItem(&v5, a2);
  if ( !*(_QWORD *)&v5.Data1 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      174LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v5.Data1 + 56LL))(*(_QWORD *)&v5.Data1);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      175LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
}
