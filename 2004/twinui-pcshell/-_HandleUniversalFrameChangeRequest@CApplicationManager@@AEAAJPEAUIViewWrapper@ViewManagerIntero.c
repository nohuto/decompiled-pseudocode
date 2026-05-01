/*
 * XREFs of ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180156C98
 * Callers:
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18003068C (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180083DA4 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180092C70 (--$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIViewWrapp.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?value@?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@XZ @ 0x180159F10 (-value@-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME.c)
 *     ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18015AB00 (-GetAppChromeData@@YA-AV-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_HandleUniversalFrameChangeRequest(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // rcx
  int First; // eax
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD); // rsi
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h] BYREF
  int v21; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v23; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v24; // [rsp+78h] [rbp+20h] BYREF

  v4 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         v18,
         (__int64)a2);
  try
  {
    v5 = (_QWORD *)wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                     v4,
                     (__int64)&v24);
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v5 + 48LL))(*v5, &v23);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1704LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
    v24 = 0LL;
    v7 = CApplicationManagerUtility::g_pIAMGlobals;
    v18[1] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v8 = (__int64)v24;
    v24 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v20 = v23;
    v21 = 4;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this, &v20, &v24, 0LL);
    if ( First == -2147319765 )
    {
      if ( !v7 )
      {
LABEL_9:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
        return 0LL;
      }
    }
    else
    {
      if ( First < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1720LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)First);
      v18[0] = 0LL;
      v12 = *v24;
      v18[0] = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 504))(v24, v18);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1725LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v13);
      GetAppChromeData(v19, a2);
      if ( !v19[8] )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1730LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)0x8000FFFFLL);
      v14 = v18[0];
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18[0] + 160LL);
      v16 = (_QWORD *)std::optional<APPLICATION_FRAME_CHROME_CHANGE_DATA>::value(v19);
      v17 = v15(v14, *v16);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1732LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v17);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
      if ( !v7 )
        goto LABEL_9;
    }
    ReleaseSRWLockExclusive(v7);
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6C8,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v10);
  }
  return result;
}
