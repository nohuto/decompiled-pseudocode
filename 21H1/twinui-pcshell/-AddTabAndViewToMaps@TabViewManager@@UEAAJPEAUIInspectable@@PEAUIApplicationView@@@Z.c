/*
 * XREFs of ?AddTabAndViewToMaps@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x18024A500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0UIInspectable@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18024189C (--$-0UIInspectable@@@-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exceptio.c)
 *     ?AddTabAndViewToMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18024A5E0 (-AddTabAndViewToMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::AddTabAndViewToMaps(
        RTL_SRWLOCK *this,
        struct IInspectable *a2,
        struct IApplicationView *a3)
{
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v8; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v9; // [rsp+48h] [rbp+20h]

  try
  {
    wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>(
      (__int64)&v8,
      a2);
    AcquireSRWLockExclusive(this + 161);
    v9 = this + 161;
    TabViewManager::AddTabAndViewToMapsLockHeld((TabViewManager *)&this[-18], v8, a3);
    if ( this != (RTL_SRWLOCK *)-1288LL )
      ReleaseSRWLockExclusive(this + 161);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC5A,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v5);
  }
  return result;
}
