/*
 * XREFs of _lambda_0d811e3ff9caf4aeb25826d22c7c0665_::operator() @ 0x18026468C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0d811e3ff9caf4aeb25826d22c7c0665___::Run @ 0x180266AF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0d811e3ff9caf4aeb25826d22c7c0665___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801363F8 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$?0UIApplicationView@@@?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180262D18 (--$-0UIApplicationView@@@-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?OnShellHookMessage@TitleBarController@@UEAAJ_K_J@Z @ 0x180265F70 (-OnShellHookMessage@TitleBarController@@UEAAJ_K_J@Z.c)
 *     ?RegisterForShellHooks@TitleBarController@@AEAAJXZ @ 0x1802667FC (-RegisterForShellHooks@TitleBarController@@AEAAJXZ.c)
 *     ?SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationView@@_N@Z @ 0x180266BD0 (-SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationVi.c)
 *     ?TryGetTitleBarForView@TitleBarController@@AEAA?AV?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180266FCC (-TryGetTitleBarForView@TitleBarController@@AEAA-AV-$com_ptr_t@UITitleBar@Experience@Shell@Intern.c)
 *     ?UnregisterFromShellHooks@TitleBarController@@AEAAXXZ @ 0x1802671EC (-UnregisterFromShellHooks@TitleBarController@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_0d811e3ff9caf4aeb25826d22c7c0665_::operator()(__int64 *a1)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  HWND v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v2 = (RTL_SRWLOCK *)(*a1 + 80);
  AcquireSRWLockExclusive(v2);
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 216);
  v17 = v4;
  *(_QWORD *)(v3 + 216) = 0LL;
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)(*a1 + 216), a1[3]);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  try
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 472LL))(v4, 0LL);
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v4)(v4, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v14);
      if ( v14
        && ((*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 24LL))(v14, &v16) < 0
         || v16 != GetForegroundWindow()) )
      {
        TitleBarController::TryGetTitleBarForView(*a1, &v15, v14);
        if ( v15 )
        {
          v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 200LL))(v15, 0LL);
          if ( v5 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2BA,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
              (const char *)(unsigned int)v5);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    }
    v6 = a1[3];
    if ( !v6 )
    {
      TitleBarController::UnregisterFromShellHooks((TitleBarController *)*a1);
      goto LABEL_28;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 472LL))(v6, 1LL);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 144) + 96LL))(*(_QWORD *)(*a1 + 144));
    v8 = v7;
    if ( *((_BYTE *)a1 + 8) )
    {
      if ( v7 < 0 )
      {
LABEL_24:
        TitleBarController::SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate(
          (TitleBarController *)*a1,
          0LL,
          *((_BYTE *)a1 + 8));
LABEL_28:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
        return 0LL;
      }
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))a1[3])(
        a1[3],
        &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
        &v15);
      if ( v15 )
      {
        TitleBarController::TryGetTitleBarForView(*a1, &v14, v15);
        if ( v14 )
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 256LL))(v14);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      }
      else
      {
        wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>(
          (__int64)&v14,
          (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))a1[3]);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    }
    if ( v8 >= 0 )
    {
      v9 = TitleBarController::RegisterForShellHooks((TitleBarController *)*a1);
      if ( v9 >= 0 )
      {
        v10 = TitleBarController::OnShellHookMessage((TitleBarController *)(*a1 + 24), 0x13uLL, 0LL);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2E0,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
            (const char *)(unsigned int)v10);
        goto LABEL_28;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D7,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v9);
    }
    goto LABEL_24;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2EE,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v11);
  }
  return result;
}
