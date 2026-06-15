/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063C30
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180063120 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800127D4 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x180055900 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x180055CE4 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x180056018 (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIV.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Z @ 0x1800564D8 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPol.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005DC2C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x1800643D0 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180064690 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180064E20 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___ @ 0x180064E90 (Microsoft--WRL--Details--OutOfProcModuleBase_Windows--Internal--SvcHostModule_--Create__lambda_b.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18006503C (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x180065C80 (-InitializeDeviceGraphManager@@YAJXZ.c)
 *     ??$com_query_to@UIPolicyConfigInternal@@AEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@PEAPEAUIPolicyConfigInternal@@@Z @ 0x180065D9C (--$com_query_to@UIPolicyConfigInternal@@AEAV-$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAE.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x180065DD4 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPolicyConfig@@@12@XZ @ 0x180065E20 (--$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPolicyConfig@@@12@XZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x18006D4F0 (--$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServer.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B6198 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800B825C (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     ??4?$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B89C4 (--4-$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BBD08 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  CPolicyConfig **v2; // rax
  CPolicyConfig *v3; // rdx
  CPolicyConfig *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  CAudioHealthMonitor *v7; // rax
  CAudioHealthMonitor *v8; // rax
  unsigned int LastError; // ebx
  unsigned int v10; // r8d
  const char *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  int AudioSessionManagerProvider; // eax
  LSTATUS ValueW; // eax
  DWORD v16; // ecx
  _QWORD *v17; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  const char *v21; // r9
  int v22; // ebx
  Windows::Internal::ServiceModuleBase *lambda_b07e40d598d2e6cc64bbba968f53c163; // rax
  int v24; // eax
  __int64 v26; // rdx
  struct wil::details::IFunctorHost *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // xmm6_8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  DWORD pvData[2]; // [rsp+48h] [rbp-C0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct IPolicyConfigInternal *v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  DWORD *v40; // [rsp+70h] [rbp-98h] BYREF
  struct IPolicyConfigInternal *v41; // [rsp+78h] [rbp-90h] BYREF
  struct IAudioPolicyManager *v42; // [rsp+80h] [rbp-88h] BYREF
  CAudioHealthMonitor *v43; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v44[2]; // [rsp+90h] [rbp-78h] BYREF
  struct DiagnosticsInfo v45; // [rsp+A0h] [rbp-68h] BYREF
  const char *v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  __int16 v48; // [rsp+B8h] [rbp-50h]
  _BYTE v49[8]; // [rsp+C0h] [rbp-48h] BYREF
  std::_Ref_count_base *v50; // [rsp+C8h] [rbp-40h]
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // [rsp+D0h] [rbp-38h]
  char v52; // [rsp+D8h] [rbp-30h]
  _BYTE v53[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-20h]
  int v55; // [rsp+F4h] [rbp-14h]
  wchar_t String[32]; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_d589406c240c3254166a1ed404a43ff9_Traceguids);
  }
  v2 = (CPolicyConfig **)Microsoft::WRL::Details::Make<CPolicyConfig,>(&v39);
  v3 = 0LL;
  if ( &v43 != v2 )
  {
    v3 = *v2;
    *v2 = 0LL;
  }
  v4 = g_PolicyConfig;
  g_PolicyConfig = v3;
  if ( v4 )
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( !g_PolicyConfig )
  {
    v26 = 2171LL;
LABEL_44:
    LastError = -2147024882;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)LastError);
    return LastError;
  }
  pvData[1] = 4;
  pvData[0] = 5;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"AudioHealthMonitorLimit",
         0x18u,
         0LL,
         pvData,
         &pvData[1]) )
  {
    v40 = pvData;
    v45 = (struct DiagnosticsInfo)retaddr;
    v46 = "avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp";
    v47 = 0LL;
    v48 = 2180;
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetImpl'::`2'::impl,
      v6);
    v44[0] = off_180155D88;
    v44[1] = &v40;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v53, 0xF4D82Du, &v45);
    wil::details::RunFunctor((wil::details *)v44, (struct wil::details::IFunctor *)v53, v27);
    if ( v54 )
      *(_DWORD *)(v54 + 16) = v55;
  }
  if ( pvData[0] )
  {
    v7 = (CAudioHealthMonitor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v43 = v7;
    v8 = v7 ? CAudioHealthMonitor::CAudioHealthMonitor(v7, pvData[0]) : 0LL;
    g_AudioHealthMonitor = v8;
    if ( !v8 )
    {
      v26 = 2193LL;
      goto LABEL_44;
    }
  }
  LastError = Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>();
  if ( (LastError & 0x80000000) != 0 )
  {
    v26 = 2198LL;
    goto LABEL_46;
  }
  if ( !g_pVolumeProvider )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x897, v10, v11);
    goto LABEL_52;
  }
  LastError = (*(__int64 (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 24LL))(g_pVolumeProvider);
  if ( (LastError & 0x80000000) != 0 )
  {
    v26 = 2200LL;
    goto LABEL_46;
  }
  v38 = 0LL;
  wil::com_query_to<IPolicyConfigInternal,Microsoft::WRL::ComPtr<CPolicyConfig> &>(v12, &v38);
  v41 = v38;
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &>(
                                  v13,
                                  &v41);
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
LABEL_52:
    v28 = 2205LL;
LABEL_61:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)AudioSessionManagerProvider);
    goto LABEL_38;
  }
  pvData[1] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioSrvWatchDogTimerInMs",
             0x18u,
             0LL,
             pvData,
             &pvData[1]);
  v16 = g_AudioSrvWatchDogTimerInMs;
  if ( !ValueW )
    v16 = pvData[0];
  g_AudioSrvWatchDogTimerInMs = v16;
  memset_0(String, 0, sizeof(String));
  pcbData[0] = 64;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"RenderStreamVolumeTaperPower",
          2u,
          0LL,
          String,
          pcbData) )
  {
    *(double *)&v29 = _wtof(String);
    if ( *(double *)&v29 != 0.0 )
    {
      v30 = std::make_shared<CVolumeUnit,>(v49);
      std::shared_ptr<CVolumeUnit>::operator=(v31, v30);
      if ( v50 )
        std::_Ref_count_base::_Decref(v50);
      CVolumeUnit::SetDBRange(g_RenderStreamTaperTranslator, v32, -96.0, 0.0, SLODWORD(FLOAT_1_5), v29);
    }
  }
  AudioSessionManagerProvider = InitializeDeviceGraphManager();
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
    v28 = 2226LL;
    goto LABEL_61;
  }
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>();
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
    v28 = 2228LL;
    goto LABEL_61;
  }
  AudioSessionManagerProvider = CreateAudioSessionManagerProvider();
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
    v28 = 2233LL;
    goto LABEL_61;
  }
  v17 = g_pEndpointCharacteristicsCache;
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache,
                     g_pEndpointCharacteristicsCache,
                     0LL);
  v17[12] = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  v42 = g_PolicyManager;
  AudioSessionManagerProvider = Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
                                  v19,
                                  &v42);
  LastError = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
    v28 = 2236LL;
    goto LABEL_61;
  }
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x8BF,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
                  v21);
    goto LABEL_38;
  }
  if ( !SecurityDescriptor )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x8C0, v20, v21);
    goto LABEL_64;
  }
  p_SecurityDescriptor = &SecurityDescriptor;
  v52 = 1;
  if ( !ServerEndpointIsStarted(L"AudioClientRpc") )
  {
    LastError = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
    if ( !LastError )
      goto LABEL_32;
LABEL_64:
    LastError |= 0x80010000;
    v33 = LastError;
    v34 = 2255LL;
    goto LABEL_71;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_d589406c240c3254166a1ed404a43ff9_Traceguids);
  }
LABEL_32:
  v22 = RpcServerRegisterIf3(&unk_180149EB0, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, SecurityDescriptor);
  if ( v22 )
  {
    LastError = v22 | 0x80010000;
    v33 = LastError;
    v34 = 2262LL;
  }
  else
  {
    *((_DWORD *)this + 25) = 1;
    lambda_b07e40d598d2e6cc64bbba968f53c163 = (Windows::Internal::ServiceModuleBase *)Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___();
    v24 = Windows::Internal::ServiceModuleBase::Initialize<Windows::Internal::ServiceModuleBase::SecurityPolicyEveryoneLocal,2,Windows::Internal::DefaultServerDescriptor>(lambda_b07e40d598d2e6cc64bbba968f53c163);
    LastError = v24;
    if ( v24 >= 0 )
    {
      *((_DWORD *)this + 26) = 1;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_d589406c240c3254166a1ed404a43ff9_Traceguids);
      }
      LastError = 0;
      goto LABEL_37;
    }
    v33 = (unsigned int)v24;
    v34 = 2266LL;
  }
LABEL_71:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v34,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
    (const char *)v33);
LABEL_37:
  LocalFree(SecurityDescriptor);
LABEL_38:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
  return LastError;
}
