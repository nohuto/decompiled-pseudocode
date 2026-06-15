/*
 * XREFs of ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180048C4C
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180049280 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D5D08 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DE190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180020CF0 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800229A0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180022C60 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022F00 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023380 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800234A0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800488C0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180048ED8 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180048F48 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5,
        struct IAudioMediaType **a6)
{
  unsigned __int64 v7; // r12
  struct IAudioMediaType *v10; // rbx
  struct IAudioMediaType *v11; // rdi
  BOOL v12; // esi
  __int64 v13; // rax
  BOOL v14; // esi
  __int64 v15; // rax
  int InitializedSystemEffectInterface; // eax
  unsigned int v17; // esi
  int v18; // eax
  struct IAudioMediaType *v19; // rcx
  struct IAudioMediaType *v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdx
  int v30; // [rsp+28h] [rbp-69h]
  __int64 v31; // [rsp+68h] [rbp-29h] BYREF
  int v32; // [rsp+70h] [rbp-21h] BYREF
  __int64 v33; // [rsp+78h] [rbp-19h] BYREF
  struct IAudioMediaType *v34; // [rsp+80h] [rbp-11h] BYREF
  struct _GUID v35; // [rsp+88h] [rbp-9h] BYREF
  __int64 v36; // [rsp+98h] [rbp+7h] BYREF
  int v37; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+A8h] [rbp+17h] BYREF
  struct IAudioMediaType *v39; // [rsp+B0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+4Fh]

  v7 = a3;
  v10 = 0LL;
  v34 = 0LL;
  v11 = 0LL;
  v39 = 0LL;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    v33 = 0LL;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, v7) )
    {
      v12 = CEndpointCharacteristics::AreEnhancementsEnabled(this) || (_DWORD)v7 == 3;
      v35 = *a2;
      v13 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 209, v7);
      if ( SystemEffectDescriptor::IsModeSupportedForStreaming(v13, (__int128 *)&v35, v12) )
      {
        v35 = *a2;
        v14 = CEndpointCharacteristics::IsConnectorModeSupported(
                this,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v7,
                &v35) != 0;
        v35 = *a2;
        v15 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 209, v7);
        InitializedSystemEffectInterface = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                                             (__int64)this,
                                             v15,
                                             2,
                                             v14,
                                             (__int128 *)&v35,
                                             0,
                                             0,
                                             v7,
                                             0LL,
                                             &v33,
                                             0LL);
        v17 = InitializedSystemEffectInterface;
        if ( InitializedSystemEffectInterface < 0 )
        {
          v22 = 7816LL;
LABEL_60:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)InitializedSystemEffectInterface,
            v30);
          goto LABEL_61;
        }
      }
    }
    if ( !v33 )
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v34, a4);
      goto LABEL_14;
    }
    v18 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this);
    v31 = 0LL;
    if ( !v18 )
    {
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v35, (__int64)a4);
      v31 = 0LL;
      if ( (*(int (__fastcall **)(__int64, struct IAudioMediaType *, _QWORD, __int64 *))(*(_QWORD *)v33 + 56LL))(
             v33,
             a4,
             *(_QWORD *)&v35.Data1,
             &v31) < 0 )
      {
        v23 = 7825LL;
      }
      else
      {
        v32 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 24LL))(v31, &v32) < 0 )
        {
          v23 = 7828LL;
        }
        else
        {
          if ( !v32 )
          {
            wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v34, v31);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_13:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
LABEL_14:
            v10 = v34;
            InitializedSystemEffectInterface = ValidateAPOInputFormat(v34);
            v17 = InitializedSystemEffectInterface;
            if ( InitializedSystemEffectInterface >= 0 )
            {
              if ( v33 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
              goto LABEL_17;
            }
            v22 = 7880LL;
            goto LABEL_60;
          }
          v23 = 7829LL;
        }
      }
      v17 = -2004287480;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x88890008LL,
        v30);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_57:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
LABEL_61:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
      goto LABEL_20;
    }
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v38, (__int64)a4);
    v31 = 0LL;
    v24 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, __int64, __int64 *))(*(_QWORD *)v33 + 64LL))(
            v33,
            a4,
            v38,
            &v31);
    if ( v24 == -2005073917 )
    {
      v32 = 0;
      *(_QWORD *)&v35.Data1 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, struct _GUID *))v33)(
             v33,
             &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014,
             &v35) >= 0
        && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&v35.Data1 + 24LL))(*(_QWORD *)&v35.Data1, &v32) >= 0
        && (v32 & 1) != 0 )
      {
        v36 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, struct IAudioMediaType *, __int64 *))(*(_QWORD *)v33 + 56LL))(
               v33,
               0LL,
               a4,
               &v36) < 0 )
        {
          v25 = 7855LL;
LABEL_46:
          v17 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL,
            v30);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_56:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
          goto LABEL_57;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v38, v36);
        v26 = v31;
        v27 = 0LL;
        v31 = 0LL;
        if ( v26 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          v27 = v31;
        }
        v28 = v33;
        v31 = 0LL;
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v28 + 64LL))(v28, v36, v38, &v31) < 0 )
        {
          v25 = 7860LL;
          goto LABEL_46;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v39, v36);
        v24 = 0;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
        v11 = v39;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
    }
    if ( v24 >= 0 )
    {
      v37 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 24LL))(v31, &v37) >= 0 )
      {
        if ( !v37 )
        {
          wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v34, v31);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
          goto LABEL_13;
        }
        v29 = 7870LL;
      }
      else
      {
        v29 = 7869LL;
      }
    }
    else
    {
      v29 = 7865LL;
    }
    v17 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL,
      v30);
    goto LABEL_56;
  }
  wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v34, a4);
  v10 = v34;
LABEL_17:
  v19 = v10;
  v10 = 0LL;
  v34 = 0LL;
  *a5 = v19;
  if ( a6 )
  {
    v20 = v11;
    v11 = 0LL;
    *a6 = v20;
  }
  v17 = 0;
LABEL_20:
  if ( v11 )
    ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
  if ( v10 )
    ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
  return v17;
}
