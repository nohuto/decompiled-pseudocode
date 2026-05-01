/*
 * XREFs of ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1802C95E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801588A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x1802C9414 (-SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z.c)
 *     ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x1802C948C (-SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA?AW4Visibility@@XZ @ 0x1802CA7E4 (-GetVisibility@NavigationLevelHelper@LegacyViewWrapper@@QEBA-AW4Visibility@@XZ.c)
 */

void __fastcall LegacyViewWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  __int64 v2; // rsi
  const char *v4; // r9
  unsigned int Visibility; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 552;
  if ( *(_DWORD *)(a1 + 552) )
  {
    if ( a2 != 1 )
    {
      if ( *(_DWORD *)(a1 + 568) == 1 && !GetWindowRect(*(HWND *)(a1 + 272), (LPRECT)(a1 + 200)) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xA8,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
          v4);
      LegacyViewWrapper::SendViewStateToWindow((LegacyViewWrapper *)(a1 - 8), 0);
      Visibility = LegacyViewWrapper::NavigationLevelHelper::GetVisibility(v2);
      LegacyViewWrapper::SendVisibilityToWindow(a1 - 8, Visibility);
      v6 = *(_QWORD *)(a1 + 192);
      if ( v6 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 504LL) + 160LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 168) + 504LL),
          v6,
          *(unsigned int *)(a1 + 272));
    }
  }
  else
  {
    PostMessageW(*(HWND *)(a1 + 272), 0x10u, 0LL, 0LL);
  }
}
