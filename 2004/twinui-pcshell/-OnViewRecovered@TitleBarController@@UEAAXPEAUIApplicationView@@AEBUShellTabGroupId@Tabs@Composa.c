/*
 * XREFs of ?OnViewRecovered@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802880D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A6BA8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x180285218 (--$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOperation@@@WRL.c)
 *     ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x180287CD4 (-OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Compo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TitleBarController::OnViewRecovered(
        TitleBarController *this,
        struct IApplicationView *a2,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a3,
        char a4)
{
  bool v8; // bl
  char v9; // bl
  unsigned int v10; // eax
  const char *v11; // r9
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    (**(void (***)(void))a2)();
    v8 = v14 != 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    if ( v8 )
    {
      wil::MakeOrThrow<ApplicationViewOperation,>(&v14);
      v9 = 1;
      *(_BYTE *)(v14 + 273) = 1;
      *(_OWORD *)(v14 + 256) = *(_OWORD *)a3;
      if ( a4 )
        *(_BYTE *)(v14 + 272) = 1;
      v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v14);
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147319765 )
        v9 = 0;
      if ( v9 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          239LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)v10);
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v14);
    }
    else
    {
      v12 = TitleBarController::OnViewCreatedImpl((TitleBarController *)((char *)this - 8), a2, a3, a4);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          243LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
          (const char *)(unsigned int)v12);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xF6,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      v11);
  }
}
