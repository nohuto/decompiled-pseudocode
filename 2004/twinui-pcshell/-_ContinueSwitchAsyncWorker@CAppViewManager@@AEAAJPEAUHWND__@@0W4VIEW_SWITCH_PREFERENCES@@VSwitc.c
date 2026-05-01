/*
 * XREFs of ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18016FF98
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::Invoke @ 0x18016B120 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_18016B120.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180172AC8 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000BC28 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x1800141F8 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019594 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061B30 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18015A2D8 (WPP_SF_.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180167C5C (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18016BD38 (-PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Col.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016C044 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivati.c)
 *     ?TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x18016FB4C (-TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1801714A8 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1801733D4 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::_ContinueSwitchAsyncWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        CAppViewManagerTelemetry::SwitchAsyncWorker *a5,
        struct IAsyncCallback *a6)
{
  IUnknown **v8; // rsi
  int v9; // r14d
  int v10; // ebx
  RTL_SRWLOCK *v11; // rdi
  __int64 v12; // r8
  int v13; // r13d
  struct IImmersiveApplicationInternal *v14; // rbx
  __int64 (__fastcall *v15)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *); // rsi
  int v16; // eax
  int v17; // eax
  char v19; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[7]; // [rsp+41h] [rbp-BFh] BYREF
  struct IImmersiveApplicationInternal *v21; // [rsp+48h] [rbp-B8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v22; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  IUnknown **v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  CAppViewManagerTelemetry::SwitchAsyncWorker *v27; // [rsp+78h] [rbp-88h]
  _QWORD v28[4]; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-48h]
  _BYTE v31[320]; // [rsp+C0h] [rbp-40h] BYREF

  v23 = a4;
  v26 = a2;
  v8 = (IUnknown **)a1;
  v25 = (IUnknown **)a1;
  v27 = a5;
  v28[3] = a5;
  CAppViewManagerTelemetry::SwitchAsyncWorker::TransferToCurrentThread(
    (__int64)a5,
    (struct wil::details::IFailureCallback *)v31);
  v9 = 0;
  v19 = 0;
  v20[0] = 0;
  v10 = 0;
  LODWORD(v22) = 0;
  v21 = 0LL;
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  v28[2] = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v28[1] = 0LL;
  v28[0] = a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v13 = CAppViewManager::_PrepareToSwitchHelper(v8, v26, a3, a4, v28, &v21, &v19, v20);
  if ( v13 == 1 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_4118369381663a2e526d206c00d3ecd5_Traceguids);
    v9 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, __int64, bool))(*(_QWORD *)v21 + 112LL))(
           v21,
           a3,
           2LL,
           (v23 & 1) == 0);
    if ( v9 < 0 )
      goto LABEL_11;
    if ( a6 )
    {
      v24 = 0LL;
      v14 = v21;
      v15 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)v21 + 352LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v16 = v15(v14, 3LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v24);
      v8 = v25;
      if ( v16 >= 0 )
        v9 = CAppViewManager::_AddPresentedWindowCallbackTrigger(
               (__int64)v25,
               2,
               (__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *))v21,
               a3,
               (__int64)a6,
               (int *)&v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v10 = (int)v22;
    }
    if ( v9 < 0 )
LABEL_11:
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, _QWORD))(*(_QWORD *)v21 + 224LL))(
        v21,
        a3,
        0LL);
  }
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  if ( v13 < 0 )
  {
    v9 = v13;
  }
  else if ( v19 )
  {
    v22 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetImpl'::`2'::impl,
      1u,
      v12);
    v30 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v17 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v30,
            &v22);
    v30 = 0LL;
    if ( v17 >= 0 )
      PopulateSwitchAsyncPropertySet(v26, a3, v23, (__int64)v22);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    CAppViewManager::_TrySwitchToApplication(v8, v21, v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  }
  if ( a6 && !v10 )
    CAppViewManager::_s_QueueCallback(v21, a6, v9);
  if ( v9 >= 0 )
    v9 = v20[0] != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v31, v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v31);
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(v27);
  return (unsigned int)v9;
}
