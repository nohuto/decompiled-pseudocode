/*
 * XREFs of ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18021195C
 * Callers:
 *     ?OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationScope@@W4ActivityFeedOperationState@@@Z @ 0x180210F20 (-OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationS.c)
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x180213710 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180045E64 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1801EF250 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18020A37C (--$ActivateInstance@V-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL.c)
 *     ??$PoliciesTaskFlowFeatureState@AEAE_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N@Z @ 0x18020B49C (--$PoliciesTaskFlowFeatureState@AEAE_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N@Z.c)
 *     ??$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18020B774 (--$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     _lambda_e6dbb4c1b06bb51faf8482f5ad286731_::operator() @ 0x18020D3D8 (_lambda_e6dbb4c1b06bb51faf8482f5ad286731_--operator().c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18020E330 (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?IsAFCAndActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x180210D04 (-IsAFCAndActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ClipboardSignalsForActivities@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802120C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ClipboardSignalsForActivities@@@details@w.c)
 *     ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180212B4C (-StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180212C5C (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180212EB0 (-StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180213044 (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18021339C (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180213574 (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?reset@?$unique_call@P6AXXZ$1?CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ @ 0x1802146A0 (-reset@-$unique_call@P6AXXZ$1-CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskFlowImmersiveShellBroker::ReinitializeObjects(TaskFlowImmersiveShellBroker *this)
{
  TaskFlowImmersiveShellBroker *v1; // rdi
  int started; // eax
  char *v3; // rsi
  int v4; // ebx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  bool IsAFCAndActivityTrackingEnabled; // si
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  bool v23; // dl
  int v24; // eax
  TaskFlowImmersiveShellBroker *v25; // rcx
  int active; // eax
  char v27; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int8 v28; // [rsp+21h] [rbp-48h] BYREF
  unsigned __int8 v29[2]; // [rsp+22h] [rbp-47h] BYREF
  __int16 v30; // [rsp+24h] [rbp-45h] BYREF
  int v31; // [rsp+28h] [rbp-41h] BYREF
  __int64 v32; // [rsp+30h] [rbp-39h] BYREF
  TaskFlowImmersiveShellBroker *v33; // [rsp+38h] [rbp-31h] BYREF
  TaskFlowImmersiveShellBroker *v34; // [rsp+40h] [rbp-29h] BYREF
  int v35; // [rsp+4Ch] [rbp-1Dh]
  unsigned int v36[2]; // [rsp+50h] [rbp-19h] BYREF
  const char *v37; // [rsp+58h] [rbp-11h]
  __int64 v38; // [rsp+60h] [rbp-9h]
  __int16 v39; // [rsp+68h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+7h] BYREF
  __int64 v41; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v1 = this;
  if ( !*((_QWORD *)this + 35) && *((_DWORD *)this + 50) != 2 )
  {
    started = TaskFlowImmersiveShellBroker::StartActivityIndexer(this);
    this = retaddr;
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)started);
  }
  v3 = (char *)v1 + 296;
  if ( !*((_BYTE *)v1 + 296) )
  {
    v4 = CDPInitialize(this);
    v31 = v4;
    TaskFlowDataEngineTelemetry::TaskflowDataEngine_CDPInitializeResult<long &>(&v31);
    if ( v4 >= 0 )
    {
      v27 = 1;
      if ( v3 != &v27 )
      {
        wil::unique_call<void (*)(void),&void CDPShutdown(void),1>::reset((char *)v1 + 296);
        *v3 = 1;
        v27 = 0;
      }
      wil::unique_call<void (*)(void),&void CDPShutdown(void),1>::reset(&v27);
      if ( !*((_QWORD *)v1 + 38) && *((_DWORD *)v1 + 50) != 2 )
      {
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)v1 + 38);
        v5 = CDPGetUserActivitySettings((char *)v1 + 304);
        v6 = retaddr;
        if ( v5 < 0 )
        {
          v7 = 81LL;
LABEL_15:
          wil::details::in1diag3::_Log_Hr(
            v6,
            (void *)v7,
            (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
            (const char *)(unsigned int)v5);
          goto LABEL_16;
        }
        v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(**((_QWORD **)v1 + 38) + 40LL))(
               *((_QWORD *)v1 + 38),
               ((unsigned __int64)v1 + 144) & -(__int64)(v1 != 0LL),
               (__int64)v1 + 312);
        v6 = retaddr;
        if ( v5 < 0 )
        {
          v7 = 83LL;
          goto LABEL_15;
        }
      }
    }
  }
LABEL_16:
  IsAFCAndActivityTrackingEnabled = TaskFlowImmersiveShellBroker::IsAFCAndActivityTrackingEnabled(v1);
  v29[0] = IsAFCAndActivityTrackingEnabled;
  v30 = 1;
  v9 = *((_QWORD *)v1 + 38);
  if ( !v9 )
    goto LABEL_20;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)v9 + 32LL))(v9, 3LL, &v30);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v10);
  v11 = 1;
  if ( v30 )
LABEL_20:
    v11 = 0;
  v28 = v11;
  TaskFlowDataEngineTelemetry::PoliciesTaskFlowFeatureState<unsigned char &,bool>(v29, &v28);
  if ( IsAFCAndActivityTrackingEnabled && (!*((_QWORD *)v1 + 26) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320)) )
  {
    v41 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.TaskFlow.DataEngine.ActivityArbiter",
      0x3Bu,
      0x3Au);
    v13 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>>(
            v41,
            (__int64 *)v1 + 26);
    if ( v13 < 0 )
    {
      v14 = 104LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  if ( *((_DWORD *)v1 + 50) != 2 )
  {
    v32 = *((_QWORD *)v1 + 26);
    v16 = v32;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
    if ( v16 )
    {
      LOBYTE(v17) = IsAFCAndActivityTrackingEnabled;
      v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 80LL))(v16, v17);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x75,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  }
  if ( IsAFCAndActivityTrackingEnabled )
  {
    if ( !*((_QWORD *)v1 + 27) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v13 = TaskFlowImmersiveShellBroker::StartAppViewListener(v1);
      if ( v13 < 0 )
      {
        v14 = 126LL;
        goto LABEL_27;
      }
    }
    if ( !*((_QWORD *)v1 + 31) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v19 = TaskFlowImmersiveShellBroker::StartAppActivitySessionListener(v1);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v19);
    }
    if ( !*((_QWORD *)v1 + 30) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v20 = TaskFlowImmersiveShellBroker::StartUserPresenceListener(v1);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v20);
    }
    if ( !*((_QWORD *)v1 + 29) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v21 = TaskFlowImmersiveShellBroker::StartFileListener(v1);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8E,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v21);
    }
    if ( !*((_QWORD *)v1 + 28) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v22 = TaskFlowImmersiveShellBroker::StartAppViewTitleChangeListener(v1);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x93,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v22);
    }
    v33 = v1;
    *(_QWORD *)v36 = retaddr;
    v37 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
    v38 = 0LL;
    v39 = 150;
    LOBYTE(v12) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClipboardSignalsForActivities>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ClipboardSignalsForActivities>::GetImpl'::`2'::impl,
      v12);
    wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v34, v23);
    v24 = lambda_e6dbb4c1b06bb51faf8482f5ad286731_::operator()((__int64 *)&v33);
    if ( v24 < 0 )
      wil::details::ReportFeatureError(
        (wil::details *)(unsigned int)v24,
        (wil::ThreadErrorContext *)&v34,
        (struct wil::ThreadErrorContext *)0x10AAB75,
        (__int64)v36);
    v25 = v34;
    if ( v34 )
      *((_DWORD *)v34 + 4) = v35;
    active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(v25);
    if ( active < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)active);
    *((_BYTE *)v1 + 320) = 0;
  }
  return 0LL;
}
