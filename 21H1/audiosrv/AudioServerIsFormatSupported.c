/*
 * XREFs of AudioServerIsFormatSupported @ 0x18000D070
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DFA40 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18000FC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180012690 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E950 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800206E0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800346F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRender.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180044600 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180044688 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180044E48 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18004B3A0 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     swprintf_s @ 0x18006B6C4 (swprintf_s.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006ECF0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BE53C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800C34D8 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800C5A68 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D68D8 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800D71EC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     wil::details::lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___::_lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___ @ 0x1800DB494 (wil--details--lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___--_lambda_call__lambda_c61a.c)
 *     ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800DB8C4 (-AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800DC27C (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800DCFB8 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall AudioServerIsFormatSupported(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int128 *a4,
        unsigned __int16 *Src,
        struct tWAVEFORMATEX **a6)
{
  __int128 v6; // xmm0
  void *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  DWORD CurrentThreadId; // eax
  int v14; // r8d
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v16; // rax
  bool v17; // zf
  int v18; // ecx
  const wchar_t *v19; // rax
  int MixFormat; // edi
  __int64 v21; // rdx
  HRESULT v22; // eax
  int v23; // ebx
  LSTATUS v24; // eax
  int v25; // eax
  struct IMMDevice *v26; // rbx
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rdi
  struct tWAVEFORMATEX *v30; // rax
  struct tWAVEFORMATEX *v31; // r14
  int v32; // eax
  int v33; // eax
  struct _GUID *v34; // r8
  void *v35; // rdx
  unsigned int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v40; // edx
  struct tWAVEFORMATEX *v41; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v42; // r8d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v43; // edx
  void *v44; // rcx
  int v45; // r12d
  int v46; // r15d
  int v47; // eax
  int AcceptableSPDIFTypeForDevice; // eax
  int v49; // eax
  void *v50; // rcx
  int phkResult; // [rsp+20h] [rbp-E0h]
  int phkResulta; // [rsp+20h] [rbp-E0h]
  int phkResultf; // [rsp+20h] [rbp-E0h]
  struct CEndpointCharacteristics **phkResultb; // [rsp+20h] [rbp-E0h]
  int phkResultc; // [rsp+20h] [rbp-E0h]
  int phkResultd; // [rsp+20h] [rbp-E0h]
  int *phkResulte; // [rsp+20h] [rbp-E0h]
  unsigned int v59; // [rsp+28h] [rbp-D8h]
  struct CEndpointCharacteristics *v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h] BYREF
  __int16 v62; // [rsp+8Ch] [rbp-74h]
  _BYTE v63[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v64; // [rsp+98h] [rbp-68h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-60h] BYREF
  LPOLESTR lpsz; // [rsp+A8h] [rbp-58h] BYREF
  int v67; // [rsp+B0h] [rbp-50h]
  __int16 v68; // [rsp+B4h] [rbp-4Ch]
  int v69; // [rsp+B8h] [rbp-48h]
  int v70[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v71; // [rsp+C8h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *v72; // [rsp+D0h] [rbp-30h] BYREF
  WINBOOL fPending; // [rsp+D8h] [rbp-28h] BYREF
  int v74; // [rsp+E0h] [rbp-20h] BYREF
  int v75; // [rsp+E8h] [rbp-18h] BYREF
  int v76; // [rsp+F0h] [rbp-10h] BYREF
  int v77; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v78; // [rsp+FCh] [rbp-4h]
  int v79; // [rsp+100h] [rbp+0h] BYREF
  LPVOID Context; // [rsp+108h] [rbp+8h] BYREF
  HKEY hKey; // [rsp+110h] [rbp+10h] BYREF
  __int64 v82; // [rsp+118h] [rbp+18h] BYREF
  struct tWAVEFORMATEX *v83; // [rsp+120h] [rbp+20h] BYREF
  __int64 v84; // [rsp+128h] [rbp+28h] BYREF
  __int64 v85; // [rsp+130h] [rbp+30h] BYREF
  struct IMMDevice *v86; // [rsp+138h] [rbp+38h] BYREF
  struct _FILETIME pftDueTime; // [rsp+140h] [rbp+40h] BYREF
  __int64 v88; // [rsp+148h] [rbp+48h]
  int v89; // [rsp+150h] [rbp+50h]
  __int16 v90; // [rsp+154h] [rbp+54h]
  void **v91; // [rsp+158h] [rbp+58h]
  struct tWAVEFORMATEX *v92; // [rsp+160h] [rbp+60h] BYREF
  char v93; // [rsp+168h] [rbp+68h]
  struct tWAVEFORMATEX **v94; // [rsp+170h] [rbp+70h]
  struct tWAVEFORMATEX *v95; // [rsp+178h] [rbp+78h] BYREF
  char v96; // [rsp+180h] [rbp+80h]
  void **v97; // [rsp+188h] [rbp+88h]
  struct tWAVEFORMATEX *v98; // [rsp+190h] [rbp+90h] BYREF
  char v99; // [rsp+198h] [rbp+98h]
  void **v100; // [rsp+1A0h] [rbp+A0h]
  struct KSDATAFORMAT_WAVEFORMATEX *v101; // [rsp+1A8h] [rbp+A8h] BYREF
  char v102; // [rsp+1B0h] [rbp+B0h]
  _QWORD pv[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  DWORD v104; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v105; // [rsp+1D0h] [rbp+D0h]
  void *v106; // [rsp+1D8h] [rbp+D8h]
  char v107; // [rsp+1E0h] [rbp+E0h]
  __int64 v108; // [rsp+1E4h] [rbp+E4h]
  IID rclsid; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _GUID v110; // [rsp+200h] [rbp+100h]
  struct _GUID v111; // [rsp+210h] [rbp+110h]
  __int128 v112; // [rsp+220h] [rbp+120h] BYREF
  struct _GUID v113; // [rsp+230h] [rbp+130h] BYREF
  struct _GUID v114; // [rsp+240h] [rbp+140h] BYREF
  struct _GUID v115; // [rsp+250h] [rbp+150h]
  struct _GUID v116; // [rsp+260h] [rbp+160h] BYREF
  struct _GUID v117; // [rsp+270h] [rbp+170h] BYREF
  struct _GUID v118; // [rsp+280h] [rbp+180h] BYREF
  char v119[8]; // [rsp+290h] [rbp+190h] BYREF
  char v120[8]; // [rsp+298h] [rbp+198h] BYREF
  struct _GUID v121; // [rsp+2A0h] [rbp+1A0h]
  struct _GUID v122; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int128 v123; // [rsp+2C0h] [rbp+1C0h]
  char v124[24]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v125; // [rsp+2F8h] [rbp+1F8h] BYREF
  int v126; // [rsp+300h] [rbp+200h]
  __int64 v127; // [rsp+304h] [rbp+204h]
  int v128; // [rsp+30Ch] [rbp+20Ch]
  __int128 v129; // [rsp+310h] [rbp+210h] BYREF
  __int64 v130; // [rsp+320h] [rbp+220h]
  __int128 v131; // [rsp+328h] [rbp+228h] BYREF
  __int128 v132; // [rsp+338h] [rbp+238h] BYREF
  int v133[4]; // [rsp+350h] [rbp+250h] BYREF
  const wchar_t *v134; // [rsp+360h] [rbp+260h]
  int v135; // [rsp+368h] [rbp+268h]
  int v136; // [rsp+36Ch] [rbp+26Ch]
  int *v137; // [rsp+370h] [rbp+270h]
  __int64 v138; // [rsp+378h] [rbp+278h]
  int *v139; // [rsp+380h] [rbp+280h]
  __int64 v140; // [rsp+388h] [rbp+288h]
  int *v141; // [rsp+390h] [rbp+290h]
  __int64 v142; // [rsp+398h] [rbp+298h]
  int *v143; // [rsp+3A0h] [rbp+2A0h]
  __int64 v144; // [rsp+3A8h] [rbp+2A8h]
  wchar_t Buffer[264]; // [rsp+3B0h] [rbp+2B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+608h] [rbp+508h]

  v6 = *a4;
  v88 = a1;
  v69 = a3;
  v131 = v6;
  v132 = v6;
  EtwEventActivityIdControl(4LL, &v132);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18019F838;
    qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
    qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_18019F838,
      qword_18019F850,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18019F838);
  }
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  v12 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v106 = v10;
  v104 = CurrentThreadId;
  v105 = L"AudioServerIsFormatSupported";
  v107 = 0;
  v108 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    v79 = *((_DWORD *)a4 + 13);
    v76 = *((_DWORD *)a4 + 17);
    v75 = *((_DWORD *)a4 + 14);
    v74 = *((_DWORD *)a4 + 12);
    if ( a2 )
    {
      v16 = -1LL;
      do
        v17 = a2[++v16] == 0;
      while ( !v17 );
      v18 = 2 * v16 + 2;
      v19 = a2;
    }
    else
    {
      v18 = 10;
      v19 = L"NULL";
    }
    v134 = v19;
    v136 = 0;
    v137 = &v74;
    v135 = v18;
    v139 = &v75;
    v141 = &v76;
    v143 = &v79;
    v138 = 4LL;
    v140 = 4LL;
    v142 = 4LL;
    v144 = 4LL;
    McGenEventWrite_EtwEventWriteTransfer(
      v18,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Start,
      v14,
      6,
      (__int64)v133);
  }
  v63[1] = 1;
  if ( a3 || a6 )
  {
    if ( *((_DWORD *)a4 + 12) >= 0x15u )
    {
      v21 = 1391LL;
LABEL_38:
      MixFormat = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x80070057LL,
        phkResult);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF66,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x80070057LL,
        phkResultf);
      goto LABEL_142;
    }
    rclsid = (IID)a4[1];
    if ( *(_QWORD *)&rclsid.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
      || *(_QWORD *)rclsid.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
    {
      lpsz = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &lpsz,
        0LL);
      v22 = StringFromCLSID(&rclsid, &lpsz);
      v23 = v22;
      if ( v22 >= 0 )
      {
        phkResulta = (int)lpsz;
        if ( swprintf_s(
               Buffer,
               0x104uLL,
               L"%s\\%s",
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\") == -1 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x563,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)0x8007007ALL,
            phkResulta);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&lpsz);
          v21 = 1393LL;
          goto LABEL_38;
        }
        hKey = 0LL;
        v24 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 0x20019u, &hKey);
        v23 = v24;
        if ( v24 >= 0 )
        {
          if ( hKey )
            RegCloseKey(hKey);
          if ( lpsz )
            CoTaskMemFree(lpsz);
          goto LABEL_36;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x566,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v24,
          phkResult);
        if ( hKey )
          RegCloseKey(hKey);
        if ( lpsz )
          CoTaskMemFree(lpsz);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x560,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v22,
          phkResult);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&lpsz);
      }
      if ( v23 < 0 )
      {
        v21 = 1393LL;
        goto LABEL_38;
      }
    }
LABEL_36:
    if ( *((_DWORD *)a4 + 13) > 3u )
    {
      v21 = 1395LL;
      goto LABEL_38;
    }
    if ( a6 )
      *a6 = 0LL;
    if ( *Src == 0xFFFE && Src[8] < 0x16u )
    {
      MixFormat = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF6D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x80070057LL,
        phkResult);
      goto LABEL_142;
    }
    v60 = 0LL;
    phkResultb = &v60;
    v25 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                            + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL);
    MixFormat = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF72,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v25,
        (int)&v60);
LABEL_141:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v60);
      goto LABEL_142;
    }
    v86 = (struct IMMDevice *)*((_QWORD *)v60 + 2);
    v26 = v86;
    ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->AddRef)(v26);
    if ( Src[1] > 2u && ((*Src - 1) & 0xFFFD) == 0 )
    {
      MixFormat = -2004287480;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF79,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890008LL,
        (int)&v60);
LABEL_140:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v86);
      goto LABEL_141;
    }
    if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v60 + 56LL))(v60)
      && Src[1] > 2u )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl & 2) == 0 )
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetCachedFeatureEnabledState(
          &`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl,
          v120);
      v27 = `wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl;
      v89 = 0;
      LOBYTE(v68) = 3;
      v90 = v68;
      v67 = 0;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl & 2) == 0 )
      {
        v72 = *(struct tWAVEFORMATEX **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetCachedFeatureEnabledState(
                                          &`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl,
                                          v119);
        v27 = (unsigned int)v72;
      }
      LOBYTE(v62) = 3;
      v77 = 0;
      v78 = v62;
      v61 = 2;
      v28 = wil_details_FeatureReporting_RecordUsageInCache(v124, &unk_18019FE10, 1LL);
      v129 = *(_OWORD *)v28;
      v130 = *(_QWORD *)(v28 + 16);
      if ( g_wil_details_recordFeatureUsage )
      {
        phkResultb = (struct CEndpointCharacteristics **)&v129;
        g_wil_details_recordFeatureUsage(11831216LL, 1LL, 1LL, &unk_18019FE10);
        if ( (v27 & 0x100) != 0 )
        {
          phkResultb = (struct CEndpointCharacteristics **)&v125;
          v128 = (v27 >> 9) & 1;
          v125 = 0LL;
          v127 = 0LL;
          v126 = 1;
          g_wil_details_recordFeatureUsage(11831216LL, 1LL, 1LL, 0LL);
        }
      }
      if ( !(_DWORD)v130 && g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xB487B0u,
          (const struct FEATURE_LOGGED_TRAITS *)&v77,
          0LL,
          1,
          (const enum wil_ReportingKind *)&v61,
          0LL,
          0,
          1uLL);
      v26 = v86;
    }
    v29 = Src[8];
    v30 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v29 + 18);
    v31 = v30;
    if ( v30 )
    {
      memcpy_0(v30, Src, v29 + 18);
      v17 = *((_DWORD *)a4 + 13) == 1;
      v72 = v31;
      if ( v17 )
      {
        v64 = 0LL;
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v64);
        v32 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                          + 32LL))(
                g_PolicyManager,
                v88,
                &v64);
        MixFormat = v32;
        if ( v32 >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager
                                                                                          + 80LL))(
                 g_ProcessSubmixManager,
                 v64)
            && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v64 + 144LL))(
                 v64,
                 *((unsigned int *)a4 + 12),
                 0LL) )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 120LL))(v64);
            LODWORD(phkResultb) = 0;
            v33 = DeriveAudioProcessingModeConfiguration(
                    *((unsigned int *)a4 + 12),
                    *((unsigned int *)a4 + 14),
                    *((unsigned int *)a4 + 32),
                    v60);
            MixFormat = v33;
            if ( v33 >= 0 )
            {
              v91 = (void **)&v82;
              v82 = 0LL;
              v59 = *((_DWORD *)a4 + 12);
              v122 = v121;
              v92 = 0LL;
              v93 = 1;
              MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                            v60,
                            v31,
                            v34,
                            &v122,
                            (struct _GUID *)phkResultb,
                            v59,
                            &v92);
              if ( v93 )
              {
                v35 = *v91;
                *v91 = v92;
                if ( v35 )
                  CoTaskMemFree(v35);
              }
              if ( MixFormat >= 0 )
              {
                v112 = v123;
                v36 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v60 + 56LL))(v60);
                phkResultc = *((_DWORD *)a4 + 12);
                if ( (unsigned int)AreResourcesAvailableForStream(a2, v36, &v112, *((unsigned int *)a4 + 13)) )
                {
                  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v82);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v64);
                  MixFormat = 0;
                  goto LABEL_139;
                }
                MixFormat = -2004287480;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xFB0,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                  (const char *)0x88890008LL,
                  phkResultc);
              }
              wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v82);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v64);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xFA6,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v33,
                0);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v64);
            }
          }
          else
          {
            MixFormat = 1;
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v64);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF88,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v32,
            (int)phkResultb);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v64);
        }
LABEL_139:
        wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v72);
        goto LABEL_140;
      }
      if ( v69 )
      {
        v45 = IsExclusiveModeDisabled(v26) == 0;
        v46 = IsOffloadDisabled(v26);
        if ( v46 && !v45 )
          goto LABEL_118;
        if ( g_PolicyManager )
        {
          v65 = 0LL;
          v47 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                            + 32LL))(
                  g_PolicyManager,
                  v88,
                  &v65);
          MixFormat = v47;
          if ( v47 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xFF1,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v47,
              (int)phkResultb);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v65);
            goto LABEL_139;
          }
          if ( v45 )
            v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v65 + 144LL))(
                    v65,
                    *((unsigned int *)a4 + 12),
                    1LL);
          if ( !v46 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v65 + 88LL))(v65) )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager
                                                                                               + 80LL))(
                      g_ProcessSubmixManager,
                      v65)
                || (v46 = 0,
                    !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v65 + 144LL))(
                       v65,
                       *((unsigned int *)a4 + 12),
                       0LL)) )
              {
                v46 = 1;
              }
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v65);
        }
        if ( !v45 )
        {
LABEL_118:
          MixFormat = -2004287474;
          goto LABEL_139;
        }
        if ( !(unsigned int)IsSPDIFFormat(v31) || !(unsigned int)IsSPDIFEndpoint(v26) )
        {
          *(_QWORD *)v70 = 0LL;
          phkResulte = v70;
          v49 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD))v26->lpVtbl->Activate)(
                  v26,
                  &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
                  23LL,
                  0LL);
          MixFormat = v49;
          if ( v49 >= 0 )
          {
            v71 = 0LL;
            v100 = (void **)&v71;
            v101 = 0LL;
            v102 = 1;
            MixFormat = CreateKSFormatFromWFXFormat(v31, &v101);
            if ( v102 )
            {
              v50 = *v100;
              *v100 = v101;
              if ( v50 )
                CoTaskMemFree(v50);
            }
            if ( MixFormat >= 0 )
            {
              v85 = 0LL;
              LODWORD(phkResulte) = v46;
              if ( (*(int (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, int *, __int64 *))(**(_QWORD **)v70 + 80LL))(
                     *(_QWORD *)v70,
                     v71,
                     *v71,
                     0LL,
                     phkResulte,
                     &v85) >= 0 )
              {
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v85);
                wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v71);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v70);
                MixFormat = 0;
                goto LABEL_139;
              }
              MixFormat = -2004287480;
              if ( v85 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1011,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)MixFormat,
                (int)v70);
            }
            wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v71);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v70);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x100E,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v49,
              (int)v70);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v70);
          }
          goto LABEL_139;
        }
        AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v26, v31, 0LL, v46);
        MixFormat = AcceptableSPDIFTypeForDevice;
        if ( AcceptableSPDIFTypeForDevice < 0 )
        {
          v38 = (unsigned int)AcceptableSPDIFTypeForDevice;
          v39 = 4104LL;
          goto LABEL_138;
        }
      }
      else
      {
        LODWORD(phkResultb) = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v60 + 56LL))(v60) == 1;
        v37 = DeriveAudioProcessingModeConfiguration(
                *((unsigned int *)a4 + 12),
                *((unsigned int *)a4 + 14),
                *((unsigned int *)a4 + 32),
                v60);
        MixFormat = v37;
        if ( v37 < 0 )
        {
          v38 = (unsigned int)v37;
          v39 = 4042LL;
LABEL_138:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v39,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)v38,
            (int)phkResultb);
          goto LABEL_139;
        }
        if ( *((_DWORD *)a4 + 17) )
        {
          v43 = *((_DWORD *)a4 + 13);
          v97 = (void **)&v84;
          v116 = v115;
          v84 = 0LL;
          v117 = v110;
          v118 = v111;
          v98 = 0LL;
          v99 = 1;
          MixFormat = DeriveConnectorFormatFromStreamFormat(v60, v43, v31, &v118, &v117, &v116, 1, &v98);
          if ( v99 )
          {
            v44 = *v97;
            *v97 = v98;
            if ( v44 )
              CoTaskMemFree(v44);
          }
          if ( MixFormat >= 0 )
          {
            wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v84);
            MixFormat = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xFE4,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)MixFormat,
              phkResultd);
            wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v84);
          }
          goto LABEL_139;
        }
        if ( !*((_DWORD *)a4 + 33) )
        {
          v40 = *((_DWORD *)a4 + 13);
          v113 = v111;
          v94 = &v83;
          v83 = 0LL;
          v95 = 0LL;
          v96 = 1;
          MixFormat = CEndpointCharacteristics::GetMixFormat(v60, v40, &v113, &v95);
          if ( v96 )
          {
            v41 = *v94;
            *v94 = v95;
            if ( v41 )
              CoTaskMemFree(v41);
          }
          if ( MixFormat >= 0 )
          {
            v42 = *((_DWORD *)a4 + 13);
            v114 = v110;
            MixFormat = IsStreamFormatSupportedForMixFormat(v60, &v114, v42, v83, v31, a6);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xFDB,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)MixFormat,
              (int)phkResultb);
          }
          wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v83);
          goto LABEL_139;
        }
        if ( (v31->wFormatTag != 0xFFFE
           || (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v31[1].nSamplesPerSec
                                                                                        + 2)
            || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v31[1].wBitsPerSample)
           && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)((char *)&v31[1].nSamplesPerSec
                                                                                        + 2)
            || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)&v31[1].wBitsPerSample))
          && ((v31->wFormatTag - 1) & 0xFFFD) != 0 )
        {
          MixFormat = -2004287480;
          v39 = 4053LL;
LABEL_137:
          v38 = (unsigned int)MixFormat;
          goto LABEL_138;
        }
      }
      MixFormat = 0;
      goto LABEL_139;
    }
    v72 = 0LL;
    MixFormat = -2147024882;
    v39 = 3971LL;
    goto LABEL_137;
  }
  MixFormat = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF64,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x80070057LL,
    phkResult);
LABEL_142:
  wil::details::lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___::_lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___(v63);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v131);
  return (unsigned int)MixFormat;
}
