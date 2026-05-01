/*
 * XREFs of ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180132950
 * Callers:
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180030430 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180083604 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180092484 (--$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIViewWrapp.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?value@?$optional@UAppTitlebarConfiguration@@@std@@QEGAAAEAUAppTitlebarConfiguration@@XZ @ 0x1801359C0 (-value@-$optional@UAppTitlebarConfiguration@@@std@@QEGAAAEAUAppTitlebarConfiguration@@XZ.c)
 *     ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180136634 (-GetAppTitleBarConfig@@YA-AV-$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewMan.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  RTL_SRWLOCK *v7; // rbx
  int First; // eax
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64); // rsi
  __int64 v15; // rax
  int v16; // eax
  __int64 *v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h] BYREF
  int v20; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF
  int v23; // [rsp+78h] [rbp+20h] BYREF

  v4 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         v18,
         (__int64)a2);
  try
  {
    v5 = (_QWORD *)wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                     v4,
                     (__int64)&v22);
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v5 + 48LL))(*v5, &v23);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1743LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
    v7 = CApplicationManagerUtility::g_pIAMGlobals;
    v18[1] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v17 = 0LL;
    v19 = v23;
    v20 = 4;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this, &v19, &v17, 0LL);
    if ( First == -2147319765 )
    {
      if ( !v7 )
      {
LABEL_7:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
        return 0LL;
      }
    }
    else
    {
      if ( First < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1759LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)First);
      v18[0] = 0LL;
      v11 = *v17;
      v18[0] = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 504))(v17, v18);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1764LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v12);
      GetAppTitleBarConfig(&v22, a2);
      if ( !BYTE2(v22) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1769LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)0x8000FFFFLL);
      v13 = v18[0];
      v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18[0] + 176LL);
      v15 = std::optional<AppTitlebarConfiguration>::value(&v22);
      v16 = v14(v13, v15);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1771LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v16);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
      if ( !v7 )
        goto LABEL_7;
    }
    ReleaseSRWLockExclusive(v7);
    goto LABEL_7;
  }
  catch ( ... )
  {
    LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x6EF,
                     (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                     v9);
    return (unsigned int)v22;
  }
  return result;
}
