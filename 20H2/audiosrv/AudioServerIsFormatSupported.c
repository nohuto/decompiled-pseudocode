/*
 * XREFs of AudioServerIsFormatSupported @ 0x18000CBC0
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DEE70 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18000F700 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E2D0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180020060 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180034068 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRender.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180043EE0 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x180043F68 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180044728 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18004A888 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180053A44 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     atexit @ 0x18006A2D8 (atexit.c)
 *     swprintf_s @ 0x18006AE64 (swprintf_s.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D060 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006E330 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800BD99C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800C2938 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800C4EC8 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D5D08 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800D661C (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     wil::details::lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___::_lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___ @ 0x1800DA8C4 (wil--details--lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___--_lambda_call__lambda_c61a.c)
 *     ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800DACF4 (-AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800DB6AC (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800DC3E8 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
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
  unsigned int v27; // r8d
  unsigned int v28; // r8d
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
  __int16 v60; // [rsp+84h] [rbp-7Ch]
  struct CEndpointCharacteristics *v61; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v62[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  LPOLESTR lpsz; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v66; // [rsp+B0h] [rbp-50h] BYREF
  int v67; // [rsp+B8h] [rbp-48h]
  unsigned int *v68; // [rsp+C0h] [rbp-40h] BYREF
  int v69[2]; // [rsp+C8h] [rbp-38h] BYREF
  WINBOOL fPending; // [rsp+D0h] [rbp-30h] BYREF
  int v71; // [rsp+D8h] [rbp-28h] BYREF
  int v72; // [rsp+E0h] [rbp-20h] BYREF
  int v73; // [rsp+E8h] [rbp-18h] BYREF
  int v74; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v75; // [rsp+F4h] [rbp-Ch]
  int v76; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v77; // [rsp+FCh] [rbp-4h]
  int v78; // [rsp+100h] [rbp+0h] BYREF
  LPVOID Context; // [rsp+108h] [rbp+8h] BYREF
  HKEY hKey; // [rsp+110h] [rbp+10h] BYREF
  __int64 v81; // [rsp+118h] [rbp+18h] BYREF
  struct tWAVEFORMATEX *v82; // [rsp+120h] [rbp+20h] BYREF
  __int64 v83; // [rsp+128h] [rbp+28h] BYREF
  __int64 v84; // [rsp+130h] [rbp+30h] BYREF
  struct _FILETIME pftDueTime; // [rsp+138h] [rbp+38h] BYREF
  __int64 v86; // [rsp+140h] [rbp+40h]
  struct IMMDevice *v87; // [rsp+148h] [rbp+48h] BYREF
  struct tWAVEFORMATEX **v88; // [rsp+150h] [rbp+50h]
  struct tWAVEFORMATEX *v89; // [rsp+158h] [rbp+58h] BYREF
  char v90; // [rsp+160h] [rbp+60h]
  void **v91; // [rsp+168h] [rbp+68h]
  struct tWAVEFORMATEX *v92; // [rsp+170h] [rbp+70h] BYREF
  char v93; // [rsp+178h] [rbp+78h]
  void **v94; // [rsp+180h] [rbp+80h]
  struct tWAVEFORMATEX *v95; // [rsp+188h] [rbp+88h] BYREF
  char v96; // [rsp+190h] [rbp+90h]
  void **v97; // [rsp+198h] [rbp+98h]
  struct KSDATAFORMAT_WAVEFORMATEX *v98; // [rsp+1A0h] [rbp+A0h] BYREF
  char v99; // [rsp+1A8h] [rbp+A8h]
  _QWORD pv[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  DWORD v101; // [rsp+1C0h] [rbp+C0h]
  const wchar_t *v102; // [rsp+1C8h] [rbp+C8h]
  void *v103; // [rsp+1D0h] [rbp+D0h]
  char v104; // [rsp+1D8h] [rbp+D8h]
  __int64 v105; // [rsp+1DCh] [rbp+DCh]
  IID rclsid; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _GUID v107; // [rsp+200h] [rbp+100h]
  struct _GUID v108; // [rsp+210h] [rbp+110h]
  char v109[8]; // [rsp+220h] [rbp+120h] BYREF
  char v110[8]; // [rsp+228h] [rbp+128h] BYREF
  struct _GUID v111; // [rsp+230h] [rbp+130h]
  struct _GUID v112; // [rsp+240h] [rbp+140h] BYREF
  __int128 v113; // [rsp+250h] [rbp+150h]
  __int128 v114; // [rsp+260h] [rbp+160h] BYREF
  struct _GUID v115; // [rsp+270h] [rbp+170h] BYREF
  struct _GUID v116; // [rsp+280h] [rbp+180h] BYREF
  struct _GUID v117; // [rsp+290h] [rbp+190h] BYREF
  struct _GUID v118; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _GUID v119; // [rsp+2B0h] [rbp+1B0h] BYREF
  struct _GUID v120; // [rsp+2C0h] [rbp+1C0h]
  __int128 v121; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int128 v122; // [rsp+2F0h] [rbp+1F0h] BYREF
  int v123[4]; // [rsp+300h] [rbp+200h] BYREF
  const wchar_t *v124; // [rsp+310h] [rbp+210h]
  int v125; // [rsp+318h] [rbp+218h]
  int v126; // [rsp+31Ch] [rbp+21Ch]
  int *v127; // [rsp+320h] [rbp+220h]
  __int64 v128; // [rsp+328h] [rbp+228h]
  int *v129; // [rsp+330h] [rbp+230h]
  __int64 v130; // [rsp+338h] [rbp+238h]
  int *v131; // [rsp+340h] [rbp+240h]
  __int64 v132; // [rsp+348h] [rbp+248h]
  int *v133; // [rsp+350h] [rbp+250h]
  __int64 v134; // [rsp+358h] [rbp+258h]
  wchar_t Buffer[264]; // [rsp+360h] [rbp+260h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5B8h] [rbp+4B8h]

  v6 = *a4;
  v86 = a1;
  v67 = a3;
  v121 = v6;
  v122 = v6;
  EtwEventActivityIdControl(4LL, &v122);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E7E8;
    qword_18019E7E8 = &AudioSrvTelemetryProvider::`vftable';
    qword_18019E800 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_18019E7E8,
      qword_18019E800,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019E7E8);
  }
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  v12 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v103 = v10;
  v101 = CurrentThreadId;
  v102 = L"AudioServerIsFormatSupported";
  v104 = 0;
  v105 = 0LL;
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
    v78 = *((_DWORD *)a4 + 13);
    v73 = *((_DWORD *)a4 + 17);
    v72 = *((_DWORD *)a4 + 14);
    v71 = *((_DWORD *)a4 + 12);
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
    v124 = v19;
    v125 = v18;
    v127 = &v71;
    v126 = 0;
    v129 = &v72;
    v131 = &v73;
    v133 = &v78;
    v128 = 4LL;
    v130 = 4LL;
    v132 = 4LL;
    v134 = 4LL;
    McGenEventWrite_EtwEventWriteTransfer(
      v18,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Start,
      v14,
      6,
      (__int64)v123);
  }
  v62[1] = 1;
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
      goto LABEL_136;
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
      goto LABEL_136;
    }
    v61 = 0LL;
    phkResultb = &v61;
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
        (int)&v61);
LABEL_135:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v61);
      goto LABEL_136;
    }
    v87 = (struct IMMDevice *)*((_QWORD *)v61 + 2);
    v26 = v87;
    ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->AddRef)(v26);
    if ( Src[1] > 2u && ((*Src - 1) & 0xFFFD) == 0 )
    {
      MixFormat = -2004287480;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF79,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890008LL,
        (int)&v61);
LABEL_134:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v87);
      goto LABEL_135;
    }
    if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v61 + 56LL))(v61)
      && Src[1] > 2u )
    {
      v27 = `wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl & 2) == 0 )
      {
        v66 = *(struct tWAVEFORMATEX **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetCachedFeatureEnabledState(
                                          &`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl,
                                          v109);
        v27 = (unsigned int)v66;
      }
      LOBYTE(v60) = 3;
      v75 = v60;
      v74 = 0;
      wil::details::ReportUsageToService(&unk_18019EDA0, 11831216LL, (v27 >> 8) & 1, (v27 >> 9) & 1, &v74, 1, 0);
      v28 = `wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl & 2) == 0 )
      {
        v66 = *(struct tWAVEFORMATEX **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetCachedFeatureEnabledState(
                                          &`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl,
                                          v110);
        v28 = (unsigned int)v66;
      }
      LOBYTE(v60) = 3;
      v77 = v60;
      v76 = 0;
      wil::details::ReportUsageToService(&unk_18019EDA0, 11831216LL, (v28 >> 8) & 1, (v28 >> 9) & 1, &v76, 1, 2);
      v26 = v87;
    }
    v29 = Src[8];
    v30 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v29 + 18);
    v31 = v30;
    if ( v30 )
    {
      memcpy_0(v30, Src, v29 + 18);
      v17 = *((_DWORD *)a4 + 13) == 1;
      v66 = v31;
      if ( v17 )
      {
        v63 = 0LL;
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v63);
        v32 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                          + 32LL))(
                g_PolicyManager,
                v86,
                &v63);
        MixFormat = v32;
        if ( v32 >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager
                                                                                          + 80LL))(
                 g_ProcessSubmixManager,
                 v63)
            && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v63 + 144LL))(
                 v63,
                 *((unsigned int *)a4 + 12),
                 0LL) )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 120LL))(v63);
            LODWORD(phkResultb) = 0;
            v33 = DeriveAudioProcessingModeConfiguration(
                    *((unsigned int *)a4 + 12),
                    *((unsigned int *)a4 + 14),
                    *((unsigned int *)a4 + 32),
                    v61);
            MixFormat = v33;
            if ( v33 >= 0 )
            {
              v91 = (void **)&v81;
              v81 = 0LL;
              v59 = *((_DWORD *)a4 + 12);
              v112 = v111;
              v92 = 0LL;
              v93 = 1;
              MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                            v61,
                            v31,
                            v34,
                            &v112,
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
                v114 = v113;
                v36 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v61 + 56LL))(v61);
                phkResultc = *((_DWORD *)a4 + 12);
                if ( (unsigned int)AreResourcesAvailableForStream(a2, v36, &v114, *((unsigned int *)a4 + 13)) )
                {
                  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v81);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v63);
                  MixFormat = 0;
                  goto LABEL_133;
                }
                MixFormat = -2004287480;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xFB0,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                  (const char *)0x88890008LL,
                  phkResultc);
              }
              wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v81);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v63);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xFA6,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v33,
                0);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v63);
            }
          }
          else
          {
            MixFormat = 1;
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v63);
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
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v63);
        }
LABEL_133:
        wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v66);
        goto LABEL_134;
      }
      if ( v67 )
      {
        v45 = IsExclusiveModeDisabled(v26) == 0;
        v46 = IsOffloadDisabled(v26);
        if ( v46 && !v45 )
          goto LABEL_112;
        if ( g_PolicyManager )
        {
          v65 = 0LL;
          v47 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                            + 32LL))(
                  g_PolicyManager,
                  v86,
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
            goto LABEL_133;
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
LABEL_112:
          MixFormat = -2004287474;
          goto LABEL_133;
        }
        if ( !(unsigned int)IsSPDIFFormat(v31) || !(unsigned int)IsSPDIFEndpoint(v26) )
        {
          *(_QWORD *)v69 = 0LL;
          phkResulte = v69;
          v49 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD))v26->lpVtbl->Activate)(
                  v26,
                  &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
                  23LL,
                  0LL);
          MixFormat = v49;
          if ( v49 >= 0 )
          {
            v68 = 0LL;
            v97 = (void **)&v68;
            v98 = 0LL;
            v99 = 1;
            MixFormat = CreateKSFormatFromWFXFormat(v31, &v98);
            if ( v99 )
            {
              v50 = *v97;
              *v97 = v98;
              if ( v50 )
                CoTaskMemFree(v50);
            }
            if ( MixFormat >= 0 )
            {
              v84 = 0LL;
              LODWORD(phkResulte) = v46;
              if ( (*(int (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, int *, __int64 *))(**(_QWORD **)v69 + 80LL))(
                     *(_QWORD *)v69,
                     v68,
                     *v68,
                     0LL,
                     phkResulte,
                     &v84) >= 0 )
              {
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v84);
                wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v68);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v69);
                MixFormat = 0;
                goto LABEL_133;
              }
              MixFormat = -2004287480;
              if ( v84 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1011,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)MixFormat,
                (int)v69);
            }
            wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v68);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v69);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x100E,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v49,
              (int)v69);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v69);
          }
          goto LABEL_133;
        }
        AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v26, v31, 0LL, v46);
        MixFormat = AcceptableSPDIFTypeForDevice;
        if ( AcceptableSPDIFTypeForDevice < 0 )
        {
          v38 = (unsigned int)AcceptableSPDIFTypeForDevice;
          v39 = 4104LL;
          goto LABEL_132;
        }
      }
      else
      {
        LODWORD(phkResultb) = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v61 + 56LL))(v61) == 1;
        v37 = DeriveAudioProcessingModeConfiguration(
                *((unsigned int *)a4 + 12),
                *((unsigned int *)a4 + 14),
                *((unsigned int *)a4 + 32),
                v61);
        MixFormat = v37;
        if ( v37 < 0 )
        {
          v38 = (unsigned int)v37;
          v39 = 4042LL;
LABEL_132:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v39,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)v38,
            (int)phkResultb);
          goto LABEL_133;
        }
        if ( *((_DWORD *)a4 + 17) )
        {
          v43 = *((_DWORD *)a4 + 13);
          v94 = (void **)&v83;
          v117 = v120;
          v83 = 0LL;
          v118 = v107;
          v119 = v108;
          v95 = 0LL;
          v96 = 1;
          MixFormat = DeriveConnectorFormatFromStreamFormat(v61, v43, v31, &v119, &v118, &v117, 1, &v95);
          if ( v96 )
          {
            v44 = *v94;
            *v94 = v95;
            if ( v44 )
              CoTaskMemFree(v44);
          }
          if ( MixFormat >= 0 )
          {
            wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v83);
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
            wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v83);
          }
          goto LABEL_133;
        }
        if ( !*((_DWORD *)a4 + 33) )
        {
          v40 = *((_DWORD *)a4 + 13);
          v115 = v108;
          v88 = &v82;
          v82 = 0LL;
          v89 = 0LL;
          v90 = 1;
          MixFormat = CEndpointCharacteristics::GetMixFormat(v61, v40, &v115, &v89);
          if ( v90 )
          {
            v41 = *v88;
            *v88 = v89;
            if ( v41 )
              CoTaskMemFree(v41);
          }
          if ( MixFormat >= 0 )
          {
            v42 = *((_DWORD *)a4 + 13);
            v116 = v107;
            MixFormat = IsStreamFormatSupportedForMixFormat(v61, &v116, v42, v82, v31, a6);
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
          wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v82);
          goto LABEL_133;
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
LABEL_131:
          v38 = (unsigned int)MixFormat;
          goto LABEL_132;
        }
      }
      MixFormat = 0;
      goto LABEL_133;
    }
    v66 = 0LL;
    MixFormat = -2147024882;
    v39 = 3971LL;
    goto LABEL_131;
  }
  MixFormat = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF64,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x80070057LL,
    phkResult);
LABEL_136:
  wil::details::lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___::_lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___(v62);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v121);
  return (unsigned int)MixFormat;
}
