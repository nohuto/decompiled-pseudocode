/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x1800DFA40
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x1800447C0 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004B740 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006ECF0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D68D8 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800DE290 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        __int64 a1,
        const wchar_t *a2,
        struct VadServerSettings *a3,
        struct tWAVEFORMATEX *Src,
        int a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  IID v9; // xmm0
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r8
  int v17; // eax
  int IsFormatSupported; // ebx
  void *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  struct _GUID v23; // xmm6
  unsigned int v24; // edx
  void *v25; // rcx
  int *v26; // r14
  int *v27; // r15
  int v28; // edx
  int SharedModeEnginePeriodicity; // eax
  void *v30; // r9
  DWORD nSamplesPerSec; // r8d
  int v32; // edx
  __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // r9
  void *v36; // rcx
  int v38; // [rsp+30h] [rbp-D0h]
  struct CEndpointCharacteristics *v39; // [rsp+80h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v41; // [rsp+90h] [rbp-70h] BYREF
  char v42; // [rsp+A0h] [rbp-60h]
  LPVOID v43; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID *p_pv; // [rsp+B8h] [rbp-48h]
  struct tWAVEFORMATEX *v45; // [rsp+C0h] [rbp-40h] BYREF
  char v46; // [rsp+C8h] [rbp-38h]
  int *v47; // [rsp+D0h] [rbp-30h]
  int *v48; // [rsp+D8h] [rbp-28h]
  struct _GUID v49; // [rsp+E0h] [rbp-20h] BYREF
  struct _GUID v50; // [rsp+F0h] [rbp-10h] BYREF
  struct _TP_TIMER *v51[7]; // [rsp+100h] [rbp+0h] BYREF
  IID v52; // [rsp+138h] [rbp+38h]
  IID v53; // [rsp+148h] [rbp+48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v9 = *(IID *)a3;
  v47 = a9;
  v48 = a8;
  v52 = v9;
  v53 = v9;
  EtwEventActivityIdControl(4LL, &v53);
  v15 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v14,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v51,
    (struct _TP_TIMER *)v15[1],
    v16,
    (struct _TP_TIMER *)L"AudioServerGetSharedModeEnginePeriod");
  v17 = ValidateVadServerSettings((IID *)a3);
  IsFormatSupported = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1082,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_29;
  }
  v43 = 0LL;
  *(_QWORD *)v41.Data4 = 0LL;
  *(_QWORD *)&v41.Data1 = &v43;
  v42 = 1;
  IsFormatSupported = AudioServerIsFormatSupported(
                        a1,
                        a2,
                        0,
                        (__int128 *)a3,
                        &Src->wFormatTag,
                        (struct tWAVEFORMATEX **)v41.Data4);
  if ( v42 )
  {
    v19 = **(void ***)&v41.Data1;
    **(_QWORD **)&v41.Data1 = *(_QWORD *)v41.Data4;
    if ( v19 )
      CoTaskMemFree(v19);
  }
  if ( IsFormatSupported < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1086,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)IsFormatSupported);
    goto LABEL_27;
  }
  v39 = 0LL;
  v20 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          &v39);
  IsFormatSupported = v20;
  if ( v20 >= 0 )
  {
    v22 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v39 + 56LL))(v39);
    v20 = DeriveAudioProcessingModeConfiguration(
            *((_DWORD *)a3 + 12),
            *((_DWORD *)a3 + 14),
            *((_DWORD *)a3 + 32),
            v39,
            v22 == 1,
            0,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 13),
            0LL,
            0,
            0,
            &v49,
            &v50,
            &v41,
            0LL,
            0LL);
    IsFormatSupported = v20;
    if ( v20 < 0 )
    {
      v21 = 4254LL;
      goto LABEL_12;
    }
    v23 = v49;
    v24 = *((_DWORD *)a3 + 13);
    p_pv = &pv;
    v38 = *((_DWORD *)a3 + 17);
    pv = 0LL;
    v45 = 0LL;
    v46 = 1;
    IsFormatSupported = DeriveConnectorFormatFromStreamFormat(v39, v24, Src, &v41, &v50, &v49, v38, &v45);
    if ( v46 )
    {
      v25 = *p_pv;
      *p_pv = v45;
      if ( v25 )
        CoTaskMemFree(v25);
    }
    if ( IsFormatSupported >= 0 )
    {
      v26 = v48;
      v27 = v47;
      v28 = *((_DWORD *)a3 + 13);
      v41 = v23;
      SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                      (__int64)v39,
                                      v28,
                                      (const struct tWAVEFORMATEX *)pv,
                                      &v41,
                                      a5 != 0,
                                      a6,
                                      a7,
                                      v48,
                                      v47);
      IsFormatSupported = SharedModeEnginePeriodicity;
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v30 = pv;
        nSamplesPerSec = Src->nSamplesPerSec;
        v32 = *((_DWORD *)pv + 1);
        if ( nSamplesPerSec != v32 )
        {
          *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v32, nSamplesPerSec);
          *a7 = TranslateFrameCountBetweenSamplingRates(*a7, *(_DWORD *)(v33 + 4), Src->nSamplesPerSec);
          *v26 = TranslateFrameCountBetweenSamplingRates(*v26, *(_DWORD *)(v34 + 4), Src->nSamplesPerSec);
          *v27 = TranslateFrameCountBetweenSamplingRates(*v27, *(_DWORD *)(v35 + 4), Src->nSamplesPerSec);
        }
        IsFormatSupported = 0;
        goto LABEL_24;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10A3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)SharedModeEnginePeriodicity);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10A1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)IsFormatSupported);
    }
    v30 = pv;
LABEL_24:
    pv = 0LL;
    if ( v30 )
      CoTaskMemFree(v30);
    goto LABEL_26;
  }
  v21 = 4233LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v20);
LABEL_26:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
LABEL_27:
  v36 = v43;
  v43 = 0LL;
  if ( v36 )
    CoTaskMemFree(v36);
LABEL_29:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v51);
  EtwEventActivityIdControl(4LL, &v53);
  return (unsigned int)IsFormatSupported;
}
