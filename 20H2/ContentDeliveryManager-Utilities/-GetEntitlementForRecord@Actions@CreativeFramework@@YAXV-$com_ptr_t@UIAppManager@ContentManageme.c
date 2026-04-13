/*
 * XREFs of ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800849B8
 * Callers:
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x180084D74 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x180085034 (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005C644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_N.c)
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180084440 (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x180086484 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800CE5AC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800CE61C (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=2
__int64 __fastcall CreativeFramework::Actions::GetEntitlementForRecord(
        _QWORD *a1,
        WCHAR *a2,
        WCHAR *a3,
        const WCHAR **a4,
        const WCHAR **a5,
        char a6)
{
  char v10; // r14
  HRESULT v11; // eax
  HSTRING v12; // rdi
  PVOID v13; // rbx
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  HRESULT v17; // eax
  HSTRING v18; // rdi
  PVOID v19; // rbx
  HSTRING_HEADER *v20; // rax
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 result; // rax
  CreativeFramework::Actions *v24; // rcx
  char v25; // [rsp+40h] [rbp-148h] BYREF
  PVOID v26; // [rsp+48h] [rbp-140h] BYREF
  const WCHAR *v27[3]; // [rsp+50h] [rbp-138h] BYREF
  __int64 (__fastcall *v28)(_QWORD, PVOID, PVOID, HSTRING, const WCHAR **, char, const WCHAR **); // [rsp+68h] [rbp-120h]
  __int64 (__fastcall *v29)(_QWORD, PVOID, PVOID, HSTRING, PVOID, _BYTE, PVOID); // [rsp+70h] [rbp-118h]
  const WCHAR **v30; // [rsp+78h] [rbp-110h]
  const WCHAR **Reserved1; // [rsp+80h] [rbp-108h]
  PVOID v32; // [rsp+88h] [rbp-100h]
  _QWORD *v33; // [rsp+90h] [rbp-F8h]
  __int64 v34; // [rsp+98h] [rbp-F0h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-E8h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-D0h] BYREF
  HSTRING_HEADER v37; // [rsp+C0h] [rbp-C8h] BYREF
  HSTRING_HEADER v38; // [rsp+E0h] [rbp-A8h] BYREF
  HSTRING_HEADER v39; // [rsp+100h] [rbp-88h] BYREF
  HSTRING_HEADER v40; // [rsp+120h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v34 = -2LL;
  v33 = a1;
  v27[2] = a2;
  v27[1] = a3;
  v30 = a5;
  Reserved1 = a5;
  if ( a6 )
    goto LABEL_5;
  if ( dword_1801994B0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801994B0);
    if ( dword_1801994B0 == -1 )
    {
      byte_1801994B4 = CreativeFramework::Actions::IsMsaConnected(v24);
      Init_thread_footer(&dword_1801994B0);
    }
  }
  if ( !byte_1801994B4 )
LABEL_5:
    v10 = 1;
  else
    v10 = 0;
  v25 = v10;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallAttribution>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetImpl'::`2'::impl,
    1u,
    0);
  v27[0] = *a4;
  if ( v10 )
  {
    v29 = (__int64 (__fastcall *)(_QWORD, PVOID, PVOID, HSTRING, PVOID, _BYTE, PVOID))*a1;
    v28 = *(__int64 (__fastcall **)(_QWORD, PVOID, PVOID, HSTRING, const WCHAR **, char, const WCHAR **))(*(_QWORD *)v29 + 80LL);
    Reserved1 = (const WCHAR **)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, v27)[1].Reserved.Reserved1;
    v30 = (const WCHAR **)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, a5)[1].Reserved.Reserved1;
    string = 0LL;
    v17 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
    if ( v17 >= 0 )
    {
      v18 = string;
      v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, (const WCHAR **)a3)[1].Reserved.Reserved1;
      v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)a2);
      v21 = v28(v29, v20[1].Reserved.Reserved1, v19, v18, v30, v10, Reserved1);
      v22 = retaddr;
      if ( v21 >= 0 )
        goto LABEL_12;
LABEL_20:
      wil::details::in1diag3::Throw_Hr(
        v22,
        (void *)0x8F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v21);
      JUMPOUT(0x180084D6CLL);
    }
LABEL_19:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    goto LABEL_20;
  }
  v28 = (__int64 (__fastcall *)(_QWORD, PVOID, PVOID, HSTRING, const WCHAR **, char, const WCHAR **))*a1;
  v29 = *(__int64 (__fastcall **)(_QWORD, PVOID, PVOID, HSTRING, PVOID, _BYTE, PVOID))(*(_QWORD *)v28 + 80LL);
  v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, v27)[1].Reserved.Reserved1;
  v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, a5)[1].Reserved.Reserved1;
  string = 0LL;
  v11 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    goto LABEL_18;
  }
  v12 = string;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)a3)[1].Reserved.Reserved1;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)a2);
  v15 = v29(v28, v14[1].Reserved.Reserved1, v13, v12, v32, 0, v26);
  v16 = retaddr;
  if ( v15 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x79,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_19;
  }
LABEL_12:
  LODWORD(v26) = 0;
  result = ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
             (_DWORD)a2,
             (_DWORD)a3,
             (unsigned int)&v25,
             (unsigned int)&v26,
             (__int64)v27);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
