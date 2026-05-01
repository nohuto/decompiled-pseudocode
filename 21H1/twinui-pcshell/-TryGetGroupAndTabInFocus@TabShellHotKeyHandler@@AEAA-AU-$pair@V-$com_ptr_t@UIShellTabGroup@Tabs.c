/*
 * XREFs of ?TryGetGroupAndTabInFocus@TabShellHotKeyHandler@@AEAA?AU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@XZ @ 0x180271B5C
 * Callers:
 *     ?OnCloseActiveTab@TabShellHotKeyHandler@@AEAAJXZ @ 0x180270C08 (-OnCloseActiveTab@TabShellHotKeyHandler@@AEAAJXZ.c)
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x180270E70 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 *     ?OnSelectRelativeTab@TabShellHotKeyHandler@@AEAAJW4RelativeTabPosition@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180271208 (-OnSelectRelativeTab@TabShellHotKeyHandler@@AEAAJW4RelativeTabPosition@Tabs@ComposableShell@Inte.c)
 *     ?OnSelectTabByIndex@TabShellHotKeyHandler@@AEAAJI@Z @ 0x180271378 (-OnSelectTabByIndex@TabShellHotKeyHandler@@AEAAJI@Z.c)
 *     ?OnTryCreateNewTab@TabShellHotKeyHandler@@AEAAJU_GUID@@@Z @ 0x180271534 (-OnTryCreateNewTab@TabShellHotKeyHandler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall TabShellHotKeyHandler::TryGetGroupAndTabInFocus(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v17);
  if ( v5(v4, &v17) < 0 || (v6 = v17) == 0 )
  {
LABEL_10:
    v11 = v16;
    goto LABEL_11;
  }
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v7 + 64LL);
  v9 = v16;
  v16 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v6 = v17;
  }
  v10 = v8(v7, v6, &GUID_f264283f_b510_4555_80ed_4c7216018854, &v16);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      185LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = v16;
  if ( v16 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 96LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v18);
    v13 = v12(v11, &v18);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        189LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    goto LABEL_10;
  }
LABEL_11:
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    a2,
    v11);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    a2 + 1,
    v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  return a2;
}
