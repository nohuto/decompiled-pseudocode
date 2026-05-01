/*
 * XREFs of ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180014380
 * Callers:
 *     _lambda_1499a186909557a83ff0f6afb6d3c526_::operator() @ 0x1800150A0 (_lambda_1499a186909557a83ff0f6afb6d3c526_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::Invoke @ 0x180146B30 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180146B30.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x18014D504 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x18014E528 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000B688 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180013CC8 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180014820 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180014918 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x18001499C (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180014B04 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x180014BAC (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x180014BDC (-SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180014C58 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18001505C (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019124 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A5A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18002AD50 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180041F68 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061400 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180135D48 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180135E78 (WPP_SF_d.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180147D88 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x18014EE34 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     WPP_SF_ll @ 0x18014F0B8 (WPP_SF_ll.c)
 *     WPP_SF_qqLLd @ 0x18014F180 (WPP_SF_qqLLd.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAppViewManager::_ShowViewAsyncWorker(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        const struct CAppViewManager::ShowViewAsyncOptions *a4,
        struct Windows::Foundation::Collections::IPropertySet *a5,
        struct IAsyncCallback *a6,
        struct IPresentationRequestedArgs *a7)
{
  __int64 v11; // r15
  bool v12; // bl
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  bool v16; // r15
  struct IImmersiveApplicationInternal *v17; // rdi
  RTL_SRWLOCK *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  int GlomForWindow; // r14d
  struct IImmersiveApplicationInternal *v22; // rsi
  bool v23; // di
  char v24; // r15
  struct Windows::Foundation::Collections::IPropertySet *v25; // rax
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v26; // rdx
  unsigned __int8 v27; // r8
  int v28; // eax
  IUnknown **v29; // rbx
  int v30; // r15d
  RTL_SRWLOCK *v31; // rbx
  char v32; // di
  struct IAsyncCallback *v33; // r12
  unsigned __int8 v35; // al
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r15
  __int64 (__fastcall *v39)(__int64, HWND, struct IImmersiveApplicationInternal *, struct Windows::Foundation::Collections::IPropertySet *, struct IImmersiveApplicationInternal **); // r14
  unsigned int v40; // eax
  unsigned int v41; // ebx
  char v42; // [rsp+40h] [rbp-C0h]
  bool v43; // [rsp+41h] [rbp-BFh] BYREF
  bool v44; // [rsp+42h] [rbp-BEh] BYREF
  char v45; // [rsp+43h] [rbp-BDh]
  struct Windows::Foundation::Collections::IPropertySet *v46; // [rsp+48h] [rbp-B8h] BYREF
  struct IImmersiveApplicationInternal *v47; // [rsp+50h] [rbp-B0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v48; // [rsp+58h] [rbp-A8h] BYREF
  struct IImmersiveApplicationInternal *v49; // [rsp+60h] [rbp-A0h] BYREF
  int v50; // [rsp+68h] [rbp-98h]
  struct IImmersiveApplicationInternal *v51; // [rsp+70h] [rbp-90h] BYREF
  CAppViewManager *v52; // [rsp+78h] [rbp-88h]
  struct IAsyncCallback *v53; // [rsp+80h] [rbp-80h]
  struct IIAMServiceProvider *v54; // [rsp+88h] [rbp-78h] BYREF
  HWND v55; // [rsp+90h] [rbp-70h]
  PSRWLOCK v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  _BYTE v58[16]; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h]
  _QWORD v61[40]; // [rsp+E0h] [rbp-20h] BYREF

  v55 = a2;
  v52 = this;
  v48 = a5;
  v53 = a6;
  v56 = (PSRWLOCK)a7;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v61);
  v61[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  CAppViewManagerTelemetry::ShowViewAsyncWorker::StartActivity((CAppViewManagerTelemetry::ShowViewAsyncWorker *)v61);
  v11 = *((_QWORD *)a4 + 2);
  v57 = v11;
  v12 = 0;
  if ( a5 )
  {
    v49 = a5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v49);
    v60 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v14 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v49, v60, v13, &v46);
    v15 = (int)v46;
    if ( v14 < 0 )
      v15 = 0;
    v12 = v15 == 2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
  }
  v16 = (v11 || v12) && a2 == a3;
  v54 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
  (***((void (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))this + 15))(
    *((_QWORD *)this + 15),
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    &v54);
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v58,
    v54);
  v42 = 1;
  v50 = 0;
  v17 = 0LL;
  v51 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v18 = CApplicationManagerUtility::g_pIAMGlobals;
  v46 = (struct Windows::Foundation::Collections::IPropertySet *)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqLLd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v19,
      v20,
      a2,
      a3,
      *(_DWORD *)a4,
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 2));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, &v49, &v43);
  v22 = v49;
  if ( GlomForWindow >= 0 )
  {
    v23 = v43;
    if ( v16 && !v43 )
      a3 = (HWND)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v49 + 384LL))(v49);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
    GlomForWindow = CAppViewManager::_GetGlomForWindow(v52, v55, &v51, &v44);
    if ( GlomForWindow < 0 )
      goto LABEL_61;
    if ( !v23 && !v16 )
    {
      v42 = 0;
      v50 = 1;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v35 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v22 + 416LL))(v22);
        WPP_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 2), v36, v37, 0LL, v35);
      }
LABEL_61:
      v17 = v51;
      goto LABEL_16;
    }
    v17 = v51;
    if ( !CAppViewManager::_IsMultiViewOperationAllowed(0LL, v51) )
    {
      v42 = 0;
      v50 = -2147024891;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
    }
  }
LABEL_16:
  if ( GlomForWindow >= 0 && v42 )
  {
    if ( v44 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v47, &v51);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
LABEL_20:
      v24 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v22 + 416LL))(v22) )
        goto LABEL_22;
      goto LABEL_21;
    }
    v38 = *((_QWORD *)v52 + 15);
    v39 = *(__int64 (__fastcall **)(__int64, HWND, struct IImmersiveApplicationInternal *, struct Windows::Foundation::Collections::IPropertySet *, struct IImmersiveApplicationInternal **))(*(_QWORD *)v38 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    v40 = v39(v38, v55, v17, v48, &v47);
    GlomForWindow = v40;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids, v40);
    if ( GlomForWindow >= 0 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*(_QWORD *)v47 + 368LL))(v47, 2LL);
      v45 = 1;
      goto LABEL_20;
    }
  }
LABEL_21:
  v24 = 0;
LABEL_22:
  if ( v18 )
    ReleaseSRWLockExclusive(v18);
  if ( GlomForWindow >= 0 && v42 )
  {
    v46 = v48;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v46);
    v25 = v46;
    if ( !v46 )
    {
      v60 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      GlomForWindow = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
                        v60,
                        &v46);
      v60 = 0LL;
      v25 = v46;
    }
    if ( GlomForWindow >= 0 )
    {
      v48 = v25;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v48);
      GlomForWindow = ViewSizePreferenceHelpers::SetTargetViewSizePreference(&v48, *(unsigned int *)a4);
      if ( GlomForWindow >= 0 )
      {
        if ( v57 )
        {
          LOBYTE(v26) = 1;
          v28 = PositionerPropertySetHelpers::SetAppActivationResponse((PositionerPropertySetHelpers *)&v48, v26, v27);
        }
        else
        {
          v28 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v48, a3, *((unsigned int *)a4 + 1));
        }
        GlomForWindow = v28;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v48);
      if ( GlomForWindow >= 0 )
      {
        if ( v24 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
        v29 = (IUnknown **)v52;
        if ( v45 )
          GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct Windows::Foundation::Collections::IPropertySet *, PSRWLOCK, struct IImmersiveApplicationInternal *))(**((_QWORD **)v52 + 15) + 152LL))(
                            *((_QWORD *)v52 + 15),
                            v47,
                            v46,
                            v56,
                            v22);
        if ( GlomForWindow >= 0 )
          GlomForWindow = CAppViewManager::_TrySwitchToApplication(v29, v47, v46);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  }
  v30 = 0;
  LODWORD(v46) = 0;
  v31 = CApplicationManagerUtility::g_pIAMGlobals;
  v56 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow < 0 )
  {
    if ( v47 && v17 && v17 != v47 )
      (*(void (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v52 + 15) + 104LL))(
        *((_QWORD *)v52 + 15),
        v47,
        v17,
        0LL);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids,
        (unsigned int)GlomForWindow);
    v32 = v42;
    goto LABEL_82;
  }
  v32 = v42;
  if ( !v42 )
  {
LABEL_82:
    v33 = v53;
    goto LABEL_46;
  }
  v33 = v53;
  if ( v53 && (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v47 + 472LL))(v47) )
  {
    GlomForWindow = CAppViewManager::_AddPresentedWindowCallbackTrigger(
                      (__int64)v52,
                      1,
                      (__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *))v47,
                      (__int64)v55,
                      (__int64)v33,
                      (int *)&v46);
    v30 = (int)v46;
  }
LABEL_46:
  if ( v31 )
    ReleaseSRWLockExclusive(v31);
  if ( v33 && !v30 )
  {
    v41 = GlomForWindow;
    if ( GlomForWindow >= 0 )
      v41 = v50;
    CAppViewManager::_s_QueueCallback(v22, v33, v41);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids, v41);
  }
  if ( GlomForWindow >= 0 )
    GlomForWindow = v32 != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v61,
    (unsigned int)GlomForWindow);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v49);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v58);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
  v61[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v61);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(v61);
  return (unsigned int)GlomForWindow;
}
