/*
 * XREFs of ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025E77C
 * Callers:
 *     ?OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z @ 0x180251D70 (-OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025E8D0 (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableSh.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002F668 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18012AB18 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::UpdateTabDisplayName(
        TabViewManager *this,
        HWND a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  int v5; // eax
  char v6; // al
  int v7; // edx
  unsigned int v8; // r8d
  __int64 (__fastcall *v9)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64); // rsi
  unsigned __int64 v10; // rbx
  UINT32 v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-268h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-260h] BYREF
  __int64 v17; // [rsp+40h] [rbp-248h]
  WCHAR pString[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  LOBYTE(v15) = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, int *))(*(_QWORD *)a3 + 336LL))(
         a3,
         &v15);
  if ( v5 >= 0 )
  {
    v6 = 0;
    if ( !(_BYTE)v15 )
      goto LABEL_5;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBA4,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v5);
  }
  v6 = 1;
LABEL_5:
  if ( v6 )
  {
    if ( !InternalGetWindowText(a2, pString, 261) )
      pString[0] = 0;
    v9 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64))(*(_QWORD *)a3 + 64LL);
    v10 = -1LL;
    do
      ++v10;
    while ( pString[v10] );
    if ( v10 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    }
    else
    {
      v11 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v10, v7, v8);
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, pString, v11, v10);
      v12 = v9(a3, v17);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBBE,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
    }
  }
  return 0LL;
}
