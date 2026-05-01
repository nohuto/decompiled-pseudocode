/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@44PEAUITabViewManager@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18033C630
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1803031C0 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180311560 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x1800AD660 (--$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspec.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$T$$T$$T@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@$$QEAW4AppViewDataSourceScope@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@$$QEA$$T55@Z @ 0x180339DE0 (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@W4AppViewDataSourceScope@@AEAPEAUIApplica.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VAppViewDataSourceAdapterBase@@@Details@23@UIWeakReferenceSource@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18033C834 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VAp.c)
 *     ?InternalRelease@?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ @ 0x18033E498 (-InternalRelease@-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 AppViewDataSourceAdapter_CreateInstance(unsigned int a1, ...)
{
  _QWORD *v1; // rbx
  _DWORD *v2; // rcx
  __int64 v3; // r9
  int CanCastTo; // edi
  AppViewDataSourceAdapter *v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp-28h] BYREF
  __int64 v9[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v11; // [rsp+80h] [rbp+8h] BYREF
  __int64 v12; // [rsp+88h] [rbp+10h] BYREF
  va_list va; // [rsp+88h] [rbp+10h]
  _QWORD *v14; // [rsp+90h] [rbp+18h] BYREF
  va_list va1; // [rsp+90h] [rbp+18h]
  AppViewDataSourceAdapter *v16; // [rsp+98h] [rbp+20h] BYREF
  va_list va2; // [rsp+98h] [rbp+20h]
  __int64 v18; // [rsp+A0h] [rbp+28h] BYREF
  va_list va3; // [rsp+A0h] [rbp+28h]
  __int64 v20; // [rsp+A8h] [rbp+30h] BYREF
  va_list va4; // [rsp+A8h] [rbp+30h]
  __int64 v22; // [rsp+B0h] [rbp+38h] BYREF
  va_list va5; // [rsp+B0h] [rbp+38h]
  __int64 v24; // [rsp+B8h] [rbp+40h] BYREF
  va_list va6; // [rsp+B8h] [rbp+40h]
  _QWORD *v26; // [rsp+C0h] [rbp+48h] BYREF
  va_list va7; // [rsp+C0h] [rbp+48h]
  va_list va8; // [rsp+C8h] [rbp+50h] BYREF

  va_start(va8, a1);
  va_start(va7, a1);
  va_start(va6, a1);
  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD *);
  va_copy(va3, va2);
  v16 = va_arg(va3, AppViewDataSourceAdapter *);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v22 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v24 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v26 = va_arg(va8, _QWORD *);
  v11 = a1;
  v8 = 0LL;
  v9[0] = 0LL;
  v1 = v26;
  *v26 = 0LL;
  try
  {
    wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>(
      (_QWORD **)va1,
      (__int64 *)va3);
    v26 = v14;
    wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,enum AppViewDataSourceScope,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,std::nullptr_t,std::nullptr_t,std::nullptr_t>(
      (AppViewDataSourceAdapter **)va2,
      &v11,
      (__int64 *)va,
      v9,
      &v8,
      (_QWORD **)va7,
      (__int64 *)va4,
      (__int64 *)va5,
      (__int64 *)va6);
    *v1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v5 = v16;
      *v1 = v16;
      (*(void (__fastcall **)(AppViewDataSourceAdapter *))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::CanCastTo(
                    (char *)v16 + 8,
                    v3,
                    v1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
    }
    if ( CanCastTo < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        605LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)CanCastTo);
    Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease((AppViewDataSourceAdapter **)va2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)va1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x260,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                           v6);
  }
  return result;
}
