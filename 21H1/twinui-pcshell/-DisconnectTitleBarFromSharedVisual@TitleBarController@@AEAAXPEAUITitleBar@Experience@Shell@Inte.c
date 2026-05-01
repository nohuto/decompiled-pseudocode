/*
 * XREFs of ?DisconnectTitleBarFromSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x1802654B0
 * Callers:
 *     ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802669D8 (-RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TitleBarController::DisconnectTitleBarFromSharedVisual(
        TitleBarController *this,
        struct Windows::Internal::Shell::Experience::ITitleBar *a2,
        struct IWin32ApplicationView *a3,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::Shell::Experience::ITitleBar *v6; // [rsp+38h] [rbp+10h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp+20h] BYREF

  hObject = a4;
  v6 = a2;
  v4 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, struct Windows::Internal::Shell::Experience::ITitleBar **))(*(_QWORD *)a3 + 24LL))(
         a3,
         &v6);
  if ( v4 >= 0 )
  {
    if ( v6 )
    {
      hObject = (HANDLE)-1LL;
      DwmpGetTitleBarVisual(v6, &hObject);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19B,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v4);
  }
}
