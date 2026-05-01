/*
 * XREFs of ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x18022FC8C
 * Callers:
 *     ?CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@AEAVAsyncEventSerialInvocationContextToken@7@PEAUIServiceProvider@@@Z @ 0x180235DDC (-CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UIViewHo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x180025184 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18004D8C0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18008550C (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180085550 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??$com_query_failfast@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_failfast_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x18009BFA8 (--$com_query_failfast@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011C428 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreatedForView@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x1802273E0 (--$CreatedForView@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180228014 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_180228014.c)
 *     ??$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@ZPEB_KIPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@SmartCookie@@QEAAJPEAUIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@Z1IPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802280E8 (--$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK.c)
 *     ?_CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x180231D80 (-_CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x1802323DC (-_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA-AV-$basic_.c)
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802327AC (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::RuntimeClassInitialize(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        struct IApplicationView *a2,
        struct IServiceProvider *a3)
{
  struct IApplicationView **v5; // rax
  struct IApplicationView *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 AumIdForView; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v13; // eax
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  struct IApplicationView *v27; // [rsp+40h] [rbp-40h] BYREF
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v30[4]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v27 = a2;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 70, (__int64)a2);
  v5 = (struct IApplicationView **)wil::com_query_failfast<IWin32ApplicationView,IApplicationView * &>(
                                     (__int64)&StringRawBuffer,
                                     &v27);
  v6 = *v5;
  if ( *((struct IApplicationView **)this + 71) != *v5 )
  {
    v27 = *v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
    v27 = (struct IApplicationView *)*((_QWORD *)this + 71);
    *((_QWORD *)this + 71) = v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&StringRawBuffer);
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 71) + 24LL))(
         *((_QWORD *)this + 71),
         (char *)this + 520);
  if ( v9 >= 0 )
  {
    if ( IsHolographicWin32SlatesFeatureEnabled(v8, v7) )
    {
      AumIdForView = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GenerateAumIdForView(
                       v30,
                       *((_QWORD *)this + 71));
      if ( *(_QWORD *)(AumIdForView + 24) >= 8uLL )
        AumIdForView = *(_QWORD *)AumIdForView;
      StringRawBuffer = (PCWSTR)AumIdForView;
      Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(
        (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)((char *)this + 512),
        &StringRawBuffer);
      std::wstring::_Tidy_deallocate(v30);
    }
    else
    {
      Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 64, L"Win32BackedItem!App", 0x13u);
    }
    LODWORD(v27) = *((_DWORD *)this + 130);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 64), 0LL);
    Win32BackedViewHostItemTelemetry::CreatedForView<unsigned short const *,unsigned int>(
      (__int64 *)&StringRawBuffer,
      &v27);
    Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_CheckWindowTextChanged(this);
    QueryService = a3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 73);
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
            a3,
            &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
            &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
            (char *)this + 584);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        67LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = a3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 74);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
           a3,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           (char *)this + 592);
    if ( v9 < 0 )
    {
      v10 = 68LL;
      goto LABEL_5;
    }
    if ( IsHolographicWin32SlatesFeatureEnabled(v16, v15) )
    {
      v17 = a3->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 76);
      v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
             a3,
             &CLSID_VirtualMonitorSlateHostFactory,
             &GUID_de2e9b5d_746f_5435_9e02_38148a6440e4,
             (char *)this + 608);
      if ( v9 < 0 )
      {
        v10 = 72LL;
        goto LABEL_5;
      }
      if ( Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate(this) )
      {
        v27 = 0LL;
        v18 = a3->lpVtbl->QueryService;
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v27);
        v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, struct IApplicationView **))v18)(
                a3,
                &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                &v27);
        v9 = v19;
        if ( v19 < 0 )
        {
          v21 = 77LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
            (const char *)(unsigned int)v19);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
          return (unsigned int)v9;
        }
        v19 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>(
                (__int64)this + 384,
                (__int64)v27,
                v20);
        v9 = v19;
        if ( v19 < 0 )
        {
          v21 = 84LL;
          goto LABEL_23;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
      }
    }
    v29 = 0LL;
    v22 = a3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v22)(
            a3,
            &SID_ImmersiveShellHookService,
            &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
            &v29);
    v9 = v23;
    if ( v23 >= 0 )
    {
      v23 = SmartCookie::Register<IImmersiveShellHookService,long (IImmersiveShellHookService::*)(unsigned __int64 const *,unsigned int,IImmersiveShellHookNotification *,unsigned long *),long (IImmersiveShellHookService::*)(unsigned long),unsigned __int64 const *,unsigned int,Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>(
              (__int64)this + 256,
              v29,
              v24);
      v9 = v23;
      if ( v23 >= 0 )
      {
        v9 = 0;
        goto LABEL_31;
      }
      v25 = 108LL;
    }
    else
    {
      v25 = 102LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v23);
LABEL_31:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    return (unsigned int)v9;
  }
  v10 = 52LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
