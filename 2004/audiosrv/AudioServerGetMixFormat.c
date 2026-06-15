/*
 * XREFs of AudioServerGetMixFormat @ 0x180012120
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180002D80 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18000FC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800127D4 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012BA0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800206E0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x1800447B0 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180064F20 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006EDF0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006F354 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@details@wil@@QEAAX_N.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetMixFormat(__int64 a1, const wchar_t *a2, struct VadServerSettings *a3, _QWORD *a4)
{
  void *v6; // rbx
  __int64 v7; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v10; // rbx
  struct VadServerSettings *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  int MixFormat; // edi
  struct _GUID v15; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16; // edx
  void *v17; // rdx
  struct wil::details::IFunctorHost *v18; // r8
  bool v19; // di
  void *v20; // rdx
  void *v21; // rax
  void *v22; // rcx
  void *v23; // rcx
  void *v25; // rcx
  void *v26; // rax
  int v27; // [rsp+88h] [rbp-80h] BYREF
  CEndpointCharacteristics *v28; // [rsp+90h] [rbp-78h] BYREF
  void *Src; // [rsp+98h] [rbp-70h] BYREF
  struct VadServerSettings *v30; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID v31; // [rsp+A8h] [rbp-60h] BYREF
  WINBOOL fPending; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp-50h] BYREF
  struct _FILETIME pftDueTime; // [rsp+C0h] [rbp-48h] BYREF
  void **p_Src; // [rsp+C8h] [rbp-40h]
  struct tWAVEFORMATEX *v36; // [rsp+D0h] [rbp-38h] BYREF
  char v37; // [rsp+D8h] [rbp-30h]
  LPVOID *v38; // [rsp+E0h] [rbp-28h]
  struct tWAVEFORMATEX *v39; // [rsp+E8h] [rbp-20h] BYREF
  char v40; // [rsp+F0h] [rbp-18h]
  _QWORD pv[2]; // [rsp+F8h] [rbp-10h] BYREF
  DWORD v42; // [rsp+108h] [rbp+0h]
  const wchar_t *v43; // [rsp+110h] [rbp+8h]
  void *v44; // [rsp+118h] [rbp+10h]
  char v45; // [rsp+120h] [rbp+18h]
  __int64 v46; // [rsp+124h] [rbp+1Ch]
  _QWORD v47[2]; // [rsp+130h] [rbp+28h] BYREF
  DiagnosticsInfo v48; // [rsp+140h] [rbp+38h] BYREF
  const char *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  __int16 v51; // [rsp+158h] [rbp+50h]
  _QWORD v52[7]; // [rsp+160h] [rbp+58h] BYREF
  struct _GUID v53; // [rsp+198h] [rbp+90h]
  struct _GUID v54; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _GUID v55; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v56[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v57; // [rsp+1D0h] [rbp+C8h]
  int v58; // [rsp+1DCh] [rbp+D4h]
  char v59; // [rsp+1F0h] [rbp+E8h] BYREF
  __int128 v60; // [rsp+200h] [rbp+F8h]
  __int128 v61; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v62[16]; // [rsp+220h] [rbp+118h] BYREF
  DiagnosticsInfo retaddr; // [rsp+280h] [rbp+178h]
  __int64 v64; // [rsp+288h] [rbp+180h] BYREF

  v64 = a1;
  v30 = a3;
  v60 = *(_OWORD *)a3;
  v61 = *(_OWORD *)a3;
  EtwEventActivityIdControl(4LL, &v61);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019F828;
    qword_18019F828 = &wil::details::FeatureLogging::`vftable';
    qword_18019F840 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_18019F828,
      qword_18019F840,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019F828);
  }
  v6 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v44 = v6;
  v42 = CurrentThreadId;
  v43 = L"AudioServerGetMixFormat";
  v45 = 0;
  v46 = 0LL;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v7 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  v10 = 0LL;
  Src = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      (__int64)v30,
      (int)&AudioSrv_GetMixFormat_Task_Start,
      a2,
      *((_DWORD *)v30 + 12),
      *((_DWORD *)v30 + 14),
      *((_DWORD *)v30 + 17),
      *((_DWORD *)v30 + 13));
  v11 = v30;
  *a4 = 0LL;
  v27 = ValidateVadServerSettings(v11);
  MixFormat = v27;
  if ( v27 >= 0 )
  {
    v27 = (*(__int64 (__fastcall **)(PVOID, const wchar_t *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL,
            &v28);
    MixFormat = v27;
    if ( v27 >= 0 )
    {
      v10 = *((_QWORD *)v28 + 2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v28 + 56LL))(v28);
      v27 = DeriveAudioProcessingModeConfiguration(
              *((unsigned int *)v30 + 12),
              *((unsigned int *)v30 + 14),
              *((unsigned int *)v30 + 32),
              v28);
      MixFormat = v27;
      if ( v27 >= 0 )
      {
        p_Src = &Src;
        v15 = v53;
        v54 = v53;
        v16 = *((_DWORD *)v30 + 13);
        v36 = 0LL;
        v37 = 1;
        MixFormat = CEndpointCharacteristics::GetMixFormat(v28, v16, &v54, &v36);
        v27 = MixFormat;
        if ( v37 )
        {
          v12 = (__int64)p_Src;
          v17 = *p_Src;
          *p_Src = v36;
          if ( v17 )
            CoTaskMemFree(v17);
          MixFormat = v27;
        }
        if ( MixFormat >= 0 )
        {
          LOBYTE(v17) = 1;
          v52[0] = &v30;
          v52[1] = &v28;
          v52[2] = &Src;
          v52[3] = &v27;
          v52[4] = &v59;
          v52[5] = &v64;
          v48 = retaddr;
          v49 = "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp";
          v51 = 3835;
          v50 = 0LL;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_GetMixFormatForVSS>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetImpl'::`2'::impl,
            v17);
          v47[0] = &off_180155B48;
          v47[1] = v52;
          wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v56, 0xFD9AE8u, &v48);
          wil::details::RunFunctor((wil::details *)v47, (struct wil::details::IFunctor *)v56, v18);
          v12 = v57;
          if ( v57 )
            *(_DWORD *)(v57 + 16) = v58;
          MixFormat = v27;
          if ( v27 >= 0 )
          {
            v38 = &v31;
            v55 = v15;
            v39 = 0LL;
            v40 = 1;
            v19 = CEndpointCharacteristics::TryGetOverridingMixFormat(
                    v28,
                    *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v30 + 13),
                    &v55,
                    &v39) >= 0
               && v31;
            if ( v40 )
            {
              v20 = *v38;
              *v38 = v39;
              if ( v20 )
                CoTaskMemFree(v20);
            }
            if ( v19 )
            {
              v25 = Src;
              v26 = v31;
              v31 = 0LL;
              Src = v26;
              if ( v25 )
                CoTaskMemFree(v25);
            }
            v21 = operator new[](*((unsigned __int16 *)Src + 8) + 18LL, (const struct std::nothrow_t *)&std::nothrow);
            *a4 = v21;
            if ( v21 )
            {
              memcpy_0(v21, Src, *((unsigned __int16 *)Src + 8) + 18LL);
              MixFormat = v27;
            }
            else
            {
              MixFormat = -2147024882;
              v27 = -2147024882;
            }
          }
        }
      }
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    McGenEventWrite_EtwEventWriteTransfer(v12, (__int64)"|", v13, 1LL, (__int64)v62);
    MixFormat = v27;
  }
  if ( MixFormat < 0 )
  {
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 0xF3Eu, MixFormat);
    MixFormat = v27;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v28 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v28 + 16LL))(v28);
  v22 = v31;
  v31 = 0LL;
  if ( v22 )
    CoTaskMemFree(v22);
  v23 = Src;
  Src = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v61);
  return (unsigned int)MixFormat;
}
