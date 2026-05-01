/*
 * XREFs of _lambda_89df5410cec75dfa270b441e23c20fb9_::operator() @ 0x180286B00
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___::Run @ 0x180288840 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_89df5410cec75dfa270b441e23c20fb9___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@Windows@@PEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@56@@Z @ 0x18028704C (-ConnectTitleBarToSharedVisual@TitleBarController@@AEAAXPEAUITitleBar@Experience@Shell@Internal@.c)
 *     ?TryGetTitleBarForView@TitleBarController@@AEAA?AV?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180288C5C (-TryGetTitleBarForView@TitleBarController@@AEAA-AV-$com_ptr_t@UITitleBar@Experience@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_89df5410cec75dfa270b441e23c20fb9_::operator()(__int64 a1)
{
  TitleBarController *v2; // rcx
  const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *v3; // r9
  __int64 result; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::Shell::Experience::ITitleBar *v7; // [rsp+30h] [rbp+8h] BYREF

  TitleBarController::TryGetTitleBarForView(*(_QWORD *)a1, &v7, *(_QWORD *)(a1 + 16));
  try
  {
    if ( v7 )
      TitleBarController::ConnectTitleBarToSharedVisual(v2, v7, *(struct IWin32ApplicationView **)(a1 + 16), v3);
    result = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v7);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x108,
             (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
             v5);
  }
  return result;
}
