/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DE190
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001F460 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180020060 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x1800440A0 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     MIDL_user_allocate @ 0x180045540 (MIDL_user_allocate.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180048844 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180048C4C (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180048F90 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004AFCC (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_574d9b62067e76d7f2061fc7e2fb2c27___ @ 0x18006E1C0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006E330 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CD47C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D5D08 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800DD6C0 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     ?DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18011A7F0 (-DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int *a5)
{
  __int64 v8; // rcx
  struct _TP_TIMER **v9; // rax
  __int64 v10; // r8
  int v11; // eax
  int MixFormat; // edi
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct _GUID v20; // xmm6
  const struct tWAVEFORMATEX *v21; // rax
  void *v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  struct _GUID v25; // xmm6
  struct IAudioMediaType *v26; // rbx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  const struct tWAVEFORMATEX *v32; // rax
  void *v33; // rdx
  __int64 v34; // rdi
  double v35; // xmm6_8
  struct _GUID v36; // xmm8
  void *v37; // rdx
  int v38; // eax
  struct _GUID v39; // xmm7
  int SharedModeEnginePeriodicity; // eax
  __int64 v41; // rdx
  const struct tWAVEFORMATEX *v42; // rax
  void *v43; // rdx
  unsigned __int64 v44; // r9
  void *v45; // rdx
  void *v46; // rcx
  void *v47; // rcx
  unsigned __int16 *v48; // r9
  int v49; // r8d
  DWORD nSamplesPerSec; // edx
  void *v51; // rax
  struct tWAVEFORMATEX *v52; // rcx
  void *v53; // rcx
  void *v54; // rbx
  struct _GUID v56; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v57; // [rsp+98h] [rbp-70h]
  CEndpointCharacteristics *v58; // [rsp+A8h] [rbp-60h] BYREF
  struct IAudioMediaType *v59; // [rsp+B0h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v60[2]; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID pv[2]; // [rsp+C8h] [rbp-40h] BYREF
  void *Src[2]; // [rsp+D8h] [rbp-30h] BYREF
  struct _GUID v63; // [rsp+E8h] [rbp-20h] BYREF
  struct IAudioMediaType *v64[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v65[2]; // [rsp+108h] [rbp+0h] BYREF
  struct _GUID v66; // [rsp+118h] [rbp+10h] BYREF
  __int64 v67; // [rsp+128h] [rbp+20h] BYREF
  LPVOID v68; // [rsp+130h] [rbp+28h] BYREF
  __int128 v69; // [rsp+138h] [rbp+30h] BYREF
  __int64 v70; // [rsp+148h] [rbp+40h]
  struct tWAVEFORMATEX *v71[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v72; // [rsp+168h] [rbp+60h]
  struct _TP_TIMER *v73[7]; // [rsp+178h] [rbp+70h] BYREF
  IID v74; // [rsp+1B0h] [rbp+A8h]
  IID v75; // [rsp+1C0h] [rbp+B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v74 = *(IID *)a3;
  v75 = v74;
  EtwEventActivityIdControl(4LL, &v75);
  v9 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v8,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v73,
    v9[1],
    v10,
    (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod");
  v11 = ValidateVadServerSettings((IID *)a3);
  MixFormat = v11;
  if ( v11 >= 0 )
  {
    v58 = 0LL;
    v13 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                 + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL,
            &v58);
    MixFormat = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10D3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v13);
LABEL_84:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v58);
      goto LABEL_85;
    }
    v68 = 0LL;
    *(_QWORD *)&v56.Data1 = &v68;
    *(_QWORD *)v56.Data4 = 0LL;
    LOBYTE(v57) = 1;
    MixFormat = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**((_QWORD **)v58 + 2) + 40LL))(
                  *((_QWORD *)v58 + 2),
                  v56.Data4);
    if ( (_BYTE)v57 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        *(void ***)&v56.Data1,
        *(void **)v56.Data4);
    if ( MixFormat < 0 )
    {
      v14 = (unsigned int)MixFormat;
      v15 = 4310LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v14);
      goto LABEL_82;
    }
    v16 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v58 + 56LL))(v58);
    v17 = DeriveAudioProcessingModeConfiguration(
            *(_DWORD *)(a3 + 48),
            *(_DWORD *)(a3 + 56),
            *(_DWORD *)(a3 + 128),
            v58,
            v16 == 1,
            0,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
            0LL,
            0,
            0,
            (struct _GUID *)v64,
            &v63,
            &v66,
            0LL,
            0LL);
    MixFormat = v17;
    if ( v17 < 0 )
    {
      v14 = (unsigned int)v17;
      v15 = 4331LL;
      goto LABEL_11;
    }
    v67 = 0LL;
    v18 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
            g_DeviceGraphStore,
            v68,
            &v67);
    MixFormat = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10F1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v18);
LABEL_81:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v67);
LABEL_82:
      if ( v68 )
        CoTaskMemFree(v68);
      goto LABEL_84;
    }
    v65[0] = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v67 + 80LL))(v67, &v69);
    v20 = *(struct _GUID *)v64;
    if ( v19 >= 0 )
    {
      v57 = v65;
      *(_OWORD *)v71 = *(_OWORD *)v64;
      v72 = v65;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_574d9b62067e76d7f2061fc7e2fb2c27___(
        (__int64)&v56,
        v69,
        *((__int64 *)&v69 + 1),
        (__int64)v71);
    }
    Src[0] = 0LL;
    v60[0] = 0LL;
    *(_QWORD *)v56.Data4 = 0LL;
    LOBYTE(v57) = 1;
    if ( v65[0] )
    {
      *(_QWORD *)&v56.Data1 = v60;
      v21 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65[0] + 48LL))(v65[0]);
      MixFormat = CloneWaveFormat(v21, (struct tWAVEFORMATEX **)v56.Data4);
      if ( (_BYTE)v57 )
      {
        v22 = **(void ***)&v56.Data1;
        **(_QWORD **)&v56.Data1 = *(_QWORD *)v56.Data4;
        if ( v22 )
          CoTaskMemFree(v22);
      }
      if ( MixFormat < 0 )
      {
        v23 = 4359LL;
LABEL_72:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        goto LABEL_74;
      }
      v64[0] = 0LL;
      v24 = CAudioMediaType::Create(v60[0], (unsigned int)v60[0]->cbSize + 18, v64, 0.0, 0);
      MixFormat = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x110C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v24);
LABEL_38:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v64);
LABEL_74:
        v52 = v60[0];
        v60[0] = 0LL;
        if ( v52 )
          CoTaskMemFree(v52);
        v53 = Src[0];
        Src[0] = 0LL;
        if ( v53 )
          CoTaskMemFree(v53);
        v54 = (void *)v69;
        if ( (_QWORD)v69 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            (__int64 *)v69,
            *((__int64 **)&v69 + 1));
          std::_Deallocate<16,0>(v54, (const struct std::nothrow_t *)((v70 - (_QWORD)v54) & 0xFFFFFFFFFFFFFFF8uLL));
          v69 = 0LL;
          v70 = 0LL;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v65);
        goto LABEL_81;
      }
      v25 = v63;
      v59 = 0LL;
      v26 = v64[0];
      v27 = CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
              v58,
              &v63,
              *(_DWORD *)(a3 + 52),
              v64[0],
              &v59);
      MixFormat = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1110,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v27);
LABEL_37:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v59);
        goto LABEL_38;
      }
      *(struct _GUID *)pv = v25;
      *(_QWORD *)&v63.Data1 = 0LL;
      v28 = CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
              v58,
              (struct _GUID *)pv,
              *(_DWORD *)(a3 + 52),
              v59,
              (struct IAudioMediaType **)&v63,
              0LL);
      MixFormat = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1113,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v28);
LABEL_36:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
        goto LABEL_37;
      }
      v66 = v25;
      pv[0] = 0LL;
      v29 = CEndpointCharacteristics::DeriveStreamFormatFromMixFormat(
              v58,
              &v66,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
              *(struct IAudioMediaType **)&v63.Data1,
              (struct IAudioMediaType **)pv);
      MixFormat = v29;
      if ( v29 < 0 )
      {
        v30 = (unsigned int)v29;
        v31 = 4374LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v31,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)v30);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)pv);
        goto LABEL_36;
      }
      *(_QWORD *)&v56.Data1 = Src;
      *(_QWORD *)v56.Data4 = 0LL;
      LOBYTE(v57) = 1;
      v32 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 40LL))(pv[0]);
      MixFormat = CloneWaveFormat(v32, (struct tWAVEFORMATEX **)v56.Data4);
      if ( (_BYTE)v57 )
      {
        v33 = **(void ***)&v56.Data1;
        **(_QWORD **)&v56.Data1 = *(_QWORD *)v56.Data4;
        if ( v33 )
          CoTaskMemFree(v33);
      }
      if ( MixFormat < 0 )
      {
        v30 = (unsigned int)MixFormat;
        v31 = 4376LL;
        goto LABEL_35;
      }
      v34 = v65[0];
      v35 = (double)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v26->lpVtbl->GetAudioFormat)(v26) + 4);
      *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34) * v35 / 10000000.0 + 0.5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v63);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v59);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v64);
LABEL_68:
      v48 = (unsigned __int16 *)Src[0];
      v49 = *((_DWORD *)Src[0] + 1);
      nSamplesPerSec = v60[0]->nSamplesPerSec;
      if ( v49 != nSamplesPerSec )
        *a5 = TranslateFrameCountBetweenSamplingRates(*a5, nSamplesPerSec, v49);
      v51 = MIDL_user_allocate(v48[8] + 18LL);
      *a4 = v51;
      if ( v51 )
      {
        memcpy_0(v51, Src[0], *((unsigned __int16 *)Src[0] + 8) + 18LL);
        MixFormat = 0;
        goto LABEL_74;
      }
      MixFormat = -2147024882;
      v23 = 4414LL;
      goto LABEL_72;
    }
    pv[0] = 0LL;
    v36 = v66;
    *(_QWORD *)&v56.Data1 = pv;
    MixFormat = CEndpointCharacteristics::GetMixFormat(
                  v58,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                  &v66,
                  (struct tWAVEFORMATEX **)v56.Data4);
    if ( (_BYTE)v57 )
    {
      v37 = **(void ***)&v56.Data1;
      **(_QWORD **)&v56.Data1 = *(_QWORD *)v56.Data4;
      if ( v37 )
        CoTaskMemFree(v37);
    }
    if ( MixFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1121,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat);
      goto LABEL_64;
    }
    v59 = 0LL;
    v38 = CAudioMediaType::Create(
            (const struct tWAVEFORMATEX *)pv[0],
            (unsigned int)*((unsigned __int16 *)pv[0] + 8) + 18,
            &v59,
            0.0,
            0);
    MixFormat = v38;
    if ( v38 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1124,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v38);
LABEL_63:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v59);
LABEL_64:
      v46 = pv[0];
      pv[0] = 0LL;
      if ( v46 )
        CoTaskMemFree(v46);
      goto LABEL_74;
    }
    v39 = v63;
    v66 = v63;
    v64[0] = 0LL;
    SharedModeEnginePeriodicity = CEndpointCharacteristics::DeriveStreamFormatFromMixFormat(
                                    v58,
                                    &v66,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                                    v59,
                                    v64);
    MixFormat = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity < 0 )
    {
      v41 = 4391LL;
LABEL_61:
      v44 = (unsigned int)SharedModeEnginePeriodicity;
      goto LABEL_62;
    }
    *(_QWORD *)&v56.Data1 = Src;
    *(_QWORD *)v56.Data4 = 0LL;
    LOBYTE(v57) = 1;
    v42 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v64[0]->lpVtbl->GetAudioFormat)(v64[0]);
    MixFormat = CloneWaveFormat(v42, (struct tWAVEFORMATEX **)v56.Data4);
    if ( (_BYTE)v57 )
    {
      v43 = **(void ***)&v56.Data1;
      **(_QWORD **)&v56.Data1 = *(_QWORD *)v56.Data4;
      if ( v43 )
        CoTaskMemFree(v43);
    }
    if ( MixFormat >= 0 )
    {
      v66 = v20;
      v63 = v39;
      v56 = v36;
      v71[0] = (struct tWAVEFORMATEX *)v60;
      v71[1] = 0LL;
      LOBYTE(v72) = 1;
      MixFormat = DeriveConnectorFormatFromStreamFormat(
                    v58,
                    *(_DWORD *)(a3 + 52),
                    (struct tWAVEFORMATEX *)pv[0],
                    &v56,
                    &v63,
                    &v66,
                    *(_DWORD *)(a3 + 68),
                    &v71[1]);
      if ( (_BYTE)v72 )
      {
        v45 = *(void **)v71[0];
        *(_QWORD *)v71[0] = v71[1];
        if ( v45 )
          CoTaskMemFree(v45);
      }
      if ( MixFormat >= 0 )
      {
        v56 = v20;
        SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                        (__int64)v58,
                                        *(_DWORD *)(a3 + 52),
                                        v60[0],
                                        &v56,
                                        0,
                                        a5,
                                        0LL,
                                        0LL,
                                        0LL);
        MixFormat = SharedModeEnginePeriodicity;
        if ( SharedModeEnginePeriodicity >= 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v64);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v59);
          v47 = pv[0];
          pv[0] = 0LL;
          if ( v47 )
            CoTaskMemFree(v47);
          goto LABEL_68;
        }
        v41 = 4399LL;
        goto LABEL_61;
      }
      v44 = (unsigned int)MixFormat;
      v41 = 4397LL;
    }
    else
    {
      v44 = (unsigned int)MixFormat;
      v41 = 4393LL;
    }
LABEL_62:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v44);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v64);
    goto LABEL_63;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10CE,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v11);
LABEL_85:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v73);
  EtwEventActivityIdControl(4LL, &v75);
  return (unsigned int)MixFormat;
}
