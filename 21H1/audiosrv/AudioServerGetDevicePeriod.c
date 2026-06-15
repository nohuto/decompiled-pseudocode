/*
 * XREFs of AudioServerGetDevicePeriod @ 0x180001E30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x1800020DC (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x1800447C0 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180048C08 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004B740 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006ECF0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        __int64 a2,
        struct VadServerSettings *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  __int64 v8; // rcx
  int v9; // eax
  int ConnectorFormatForProcessingMode; // ebx
  int MinProcessingPeriodForExclusiveMode; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // edx
  struct _GUID v13; // xmm6
  void *v14; // rcx
  int SharedModeEnginePeriodicity; // eax
  void *v16; // rcx
  int v17; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  void *v22; // rcx
  int v23; // [rsp+28h] [rbp-E0h]
  CEndpointCharacteristics **v24; // [rsp+28h] [rbp-E0h]
  CEndpointCharacteristics *v25; // [rsp+88h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-78h] BYREF
  int v27; // [rsp+98h] [rbp-70h]
  struct _GUID v28; // [rsp+A8h] [rbp-60h] BYREF
  LPVOID *p_pv; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v30; // [rsp+C0h] [rbp-48h] BYREF
  char v31; // [rsp+C8h] [rbp-40h]
  _BYTE v32[56]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v33; // [rsp+108h] [rbp+0h]
  __int128 v34; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v33 = *(_OWORD *)a3;
  v34 = v33;
  EtwEventActivityIdControl(4LL, &v34);
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v8,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(v32);
  v9 = ValidateVadServerSettings(a3);
  ConnectorFormatForProcessingMode = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v9,
      v23);
    goto LABEL_16;
  }
  v25 = 0LL;
  v24 = &v25;
  MinProcessingPeriodForExclusiveMode = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                  + 24LL))(
                                          g_pEndpointCharacteristicsCache,
                                          a2,
                                          0LL,
                                          0LL);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v19 = 4157LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MinProcessingPeriodForExclusiveMode,
      (int)v24);
    goto LABEL_15;
  }
  if ( !a5 )
    goto LABEL_12;
  LODWORD(v24) = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v25 + 56LL))(v25) == 1;
  MinProcessingPeriodForExclusiveMode = DeriveAudioProcessingModeConfiguration(
                                          *((unsigned int *)a3 + 12),
                                          *((unsigned int *)a3 + 14),
                                          *((unsigned int *)a3 + 32),
                                          v25);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v19 = 4180LL;
    goto LABEL_25;
  }
  v13 = v28;
  p_pv = &pv;
  pv = 0LL;
  v30 = 0LL;
  v31 = 1;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                       v25,
                                       eHostProcessConnector,
                                       &v28,
                                       &v30);
  if ( v31 )
  {
    v14 = *p_pv;
    *p_pv = v30;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    v20 = (unsigned int)ConnectorFormatForProcessingMode;
    v21 = 4184LL;
    goto LABEL_22;
  }
  LODWORD(v24) = 0;
  v28 = v13;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v25, 0LL, pv, &v28);
  ConnectorFormatForProcessingMode = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v20 = (unsigned int)SharedModeEnginePeriodicity;
    v21 = 4188LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v20,
      (int)v24);
    v22 = pv;
    pv = 0LL;
    if ( v22 )
      CoTaskMemFree(v22);
    goto LABEL_15;
  }
  v16 = pv;
  v17 = *((_DWORD *)pv + 1);
  pv = 0LL;
  *a5 = (unsigned int)(int)((double)v27 * 10000000.0 / (double)v17 + 0.5);
  if ( v16 )
    CoTaskMemFree(v16);
LABEL_12:
  if ( a6 )
  {
    MinProcessingPeriodForExclusiveMode = CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(v25, v12, a6);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode < 0 )
    {
      v19 = 4196LL;
      goto LABEL_25;
    }
  }
  ConnectorFormatForProcessingMode = 0;
LABEL_15:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
LABEL_16:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(v32);
  EtwEventActivityIdControl(4LL, &v34);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
