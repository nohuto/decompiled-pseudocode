/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f___::Run @ 0x180266B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802669D8 (-RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f___::Run(
        __int64 a1,
        __int64 a2,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = TitleBarController::RemoveWin32View(
         *(TitleBarController **)(a1 + 16),
         *(struct IWin32ApplicationView **)(a1 + 32),
         a3);
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v3);
}
