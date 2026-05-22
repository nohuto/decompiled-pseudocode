/*
 * XREFs of ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x180116BF0
 * Callers:
 *     ?OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x18011C1C0 (-OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallb.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002828C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18002E398 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180079738 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$DoInvoke@V_lambda_68c34cd287e5a2a74578b99ce0d07767_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_68c34cd287e5a2a74578b99ce0d07767_@@@Z @ 0x18010E548 (--$DoInvoke@V_lambda_68c34cd287e5a2a74578b99ce0d07767_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHString@Wrappers@WRL@Microsoft@@PEAUIPropertyValue@Foundation@4@2@Z @ 0x180110B10 (--0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHStri.c)
 *     ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x1801139EC (-CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 MPCConstantManagerClient::OnConstantChanged(
        __int64 a1,
        struct Windows::Foundation::IPropertyValue *a2,
        int a3,
        ...)
{
  int v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // rcx
  int v7; // eax
  struct Windows::Foundation::IPropertyValue *v8; // rbx
  struct Windows::Foundation::IPropertyValue *v9; // rdi
  void *v10; // rax
  const char *v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  struct Windows::Foundation::IPropertyValue *v15; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int128 v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Windows::Foundation::IPropertyValue *v21; // [rsp+88h] [rbp+28h] BYREF
  const wchar_t *v22; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+98h] [rbp+38h]
  PROPVARIANT *propvarIn; // [rsp+A0h] [rbp+40h]
  PROPVARIANT *v25; // [rsp+A8h] [rbp+48h]
  va_list va1; // [rsp+B0h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, const wchar_t *);
  propvarIn = va_arg(va1, PROPVARIANT *);
  v25 = va_arg(va1, PROPVARIANT *);
  v21 = a2;
  string = 0LL;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(
    (Microsoft::WRL::Wrappers::HString *)&string,
    (const wchar_t **)va);
  v21 = 0LL;
  v15 = 0LL;
  v5 = MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(propvarIn, &v15);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      225LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v21;
  v21 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = MPCConstantManagerClient::CreatePropertyValueFromPROPVARIANT(v25, &v21);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      226LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = v21;
  v21 = 0LL;
  v9 = v15;
  v15 = 0LL;
  v10 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = 0LL;
  if ( v10 )
    v12 = Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::ConstantChangedEventArgs(
            (__int64)v10,
            a3,
            &string,
            (__int64)v9,
            (__int64)v8);
  if ( !v12 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      234LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      v11);
    __debugbreak();
  }
  v18 = v12;
  v17 = a1;
  *(_QWORD *)&v19 = &v17;
  *((_QWORD *)&v19 + 1) = &v18;
  v13 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCConstantManagerClient *,Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_68c34cd287e5a2a74578b99ce0d07767_>(
          a1 + 120,
          &v19);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      236LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v13);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v21);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v15);
  WindowsDeleteString(string);
  return 0LL;
}
