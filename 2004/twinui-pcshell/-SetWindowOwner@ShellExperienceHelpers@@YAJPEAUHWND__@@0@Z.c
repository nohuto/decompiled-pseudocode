/*
 * XREFs of ?SetWindowOwner@ShellExperienceHelpers@@YAJPEAUHWND__@@0@Z @ 0x18022C54C
 * Callers:
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x18022C4F0 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139C44 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FixRelativeZOrderingBeforeOwnership@ShellExperienceHelpers@@YAXPEAUHWND__@@0@Z @ 0x18022A130 (-FixRelativeZOrderingBeforeOwnership@ShellExperienceHelpers@@YAXPEAUHWND__@@0@Z.c)
 */

signed int __fastcall ShellExperienceHelpers::SetWindowOwner(HWND hWnd, HWND hWndInsertAfter, HWND a3)
{
  __int64 v5; // rdx
  wil::details *v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( hWndInsertAfter )
    ShellExperienceHelpers::FixRelativeZOrderingBeforeOwnership(hWnd, hWndInsertAfter, a3);
  SetLastError(0);
  if ( SetWindowLongPtrW(hWnd, -8, (LONG_PTR)hWndInsertAfter) || !GetLastError() )
  {
    if ( hWndInsertAfter )
      SetWindowPos(hWnd, hWndInsertAfter, 0, 0, 0, 0, 0x13u);
    return 0;
  }
  else if ( GetLastError() == 1400 )
  {
    return wil::details::GetLastErrorFailHr(v6, v5, v7, v8);
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x44,
             (__int64)"internal\\Shell\\inc\\OwnedWindowHelpers.h",
             v8);
  }
}
