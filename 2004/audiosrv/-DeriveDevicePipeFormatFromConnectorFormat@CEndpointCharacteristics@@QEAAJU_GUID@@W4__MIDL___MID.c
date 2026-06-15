/*
 * XREFs of ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049750
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180049A40 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D6998 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DEE20 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001FAE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18001FE10 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180023580 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048EC0 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180049004 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180049698 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180049708 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18004C418 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18004C4A0 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011D200 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        __int32 a3,
        struct IAudioMediaType *a4,
        struct IAudioMediaType **a5)
{
  const struct tWAVEFORMATEX *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int EndpointEffect; // eax
  unsigned int v12; // edi
  const struct tWAVEFORMATEX *v13; // rax
  bool v14; // bl
  void *v15; // rdx
  int v16; // eax
  struct IAudioMediaType *v17; // rbx
  void *v18; // rcx
  int v19; // eax
  struct IAudioProcessingObject *v20; // rdi
  LPVOID v21; // rcx
  struct IAudioMediaType *v22; // r15
  int v23; // eax
  const struct tWAVEFORMATEX *v24; // rax
  __int64 v25; // rbx
  __int64 *p_pv; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rdx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rdx
  struct IAudioProcessingObject **v38; // [rsp+20h] [rbp-51h]
  int v39; // [rsp+20h] [rbp-51h]
  LPVOID pv; // [rsp+30h] [rbp-41h] BYREF
  struct IAudioProcessingObject *v41; // [rsp+38h] [rbp-39h] BYREF
  int v42; // [rsp+40h] [rbp-31h] BYREF
  struct IAudioMediaType *v43; // [rsp+48h] [rbp-29h] BYREF
  struct IAudioMediaType *v44; // [rsp+50h] [rbp-21h] BYREF
  struct IAudioMediaType *v45; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v46[40]; // [rsp+60h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct _GUID *))a4->lpVtbl->GetAudioFormat)(
                                       a4,
                                       a2);
  v9 = ValidateUncompressedWaveFormatEx(v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v41 = 0LL;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
    {
      EndpointEffect = CEndpointCharacteristics::GetEndpointEffect(this, 0, a3, 0LL, &v41, 0LL);
      v12 = EndpointEffect;
      if ( EndpointEffect >= 0 )
        goto LABEL_4;
      v28 = 7707LL;
    }
    else
    {
      EndpointEffect = CEndpointCharacteristics::GetGfx(
                         this,
                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                         0LL,
                         &v41,
                         (struct IAudioSystemEffects2 **)v38);
      v12 = EndpointEffect;
      if ( EndpointEffect >= 0 )
      {
LABEL_4:
        v43 = 0LL;
        v44 = 0LL;
        if ( v10 != 1 )
        {
          pv = 0LL;
          *(_QWORD *)v46 = &pv;
          *(_QWORD *)&v46[8] = 0LL;
          v46[16] = 1;
          v13 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
          v14 = (int)CloneWaveFormat(v13, (struct tWAVEFORMATEX **)&v46[8]) < 0;
          if ( v46[16] )
          {
            v15 = **(void ***)v46;
            **(_QWORD **)v46 = *(_QWORD *)&v46[8];
            if ( v15 )
              CoTaskMemFree(v15);
          }
          if ( v14 )
          {
            v12 = -2004287480;
            v32 = 2290679816LL;
            v33 = 7747LL;
          }
          else
          {
            ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
            v44 = 0LL;
            v16 = CAudioMediaType::Create(
                    (const struct tWAVEFORMATEX *)pv,
                    (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                    &v44,
                    0.0,
                    0);
            v12 = v16;
            if ( v16 >= 0 )
            {
              v17 = v44;
              wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v43, (__int64)v44);
              v18 = pv;
              pv = 0LL;
              if ( v18 )
                CoTaskMemFree(v18);
LABEL_12:
              v45 = 0LL;
              if ( !v41 )
              {
                wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v45, (__int64)v43);
LABEL_20:
                v22 = v45;
                v23 = ValidateAPOInputFormat(v45);
                v12 = v23;
                if ( v23 < 0 )
                {
                  v36 = (unsigned int)v23;
                  v37 = 7787LL;
                }
                else
                {
                  if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this)
                    || (v24 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v17->lpVtbl->GetAudioFormat)(v17),
                        IsDolbyMatFormat(v24))
                    || (v25 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4),
                        *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v22->lpVtbl->GetAudioFormat)(v22)
                                  + 4) == *(_DWORD *)(v25 + 4)) )
                  {
                    v45 = 0LL;
                    *a5 = v22;
                    v12 = 0;
LABEL_25:
                    p_pv = (__int64 *)&v45;
LABEL_26:
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(p_pv);
LABEL_27:
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
LABEL_28:
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
                    return v12;
                  }
                  v12 = -2004287480;
                  v36 = 2290679816LL;
                  v37 = 7794LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v37,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)v36,
                  v39);
                goto LABEL_25;
              }
              v42 = 0;
              pv = 0LL;
              v19 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this);
              v20 = v41;
              v21 = pv;
              pv = 0LL;
              if ( v19 )
              {
                if ( v21 )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
                if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))v20->lpVtbl->IsOutputFormatSupported)(
                       v20,
                       v17,
                       v43,
                       &pv) >= 0 )
                {
                  if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v42) >= 0 )
                  {
                    if ( !v42 )
                      goto LABEL_19;
                    v35 = 7777LL;
                  }
                  else
                  {
                    v35 = 7776LL;
                  }
                }
                else
                {
                  v35 = 7774LL;
                }
              }
              else
              {
                if ( v21 )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
                if ( ((int (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, struct IAudioMediaType *, LPVOID *))v20->lpVtbl->IsInputFormatSupported)(
                       v20,
                       v17,
                       v43,
                       &pv) < 0 )
                {
                  v35 = 7767LL;
                }
                else if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)pv + 24LL))(pv, &v42) < 0 )
                {
                  v35 = 7768LL;
                }
                else
                {
                  if ( !v42 )
                  {
LABEL_19:
                    wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v45, (__int64)pv);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
                    goto LABEL_20;
                  }
                  v35 = 7769LL;
                }
              }
              v12 = -2004287480;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v35,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                (const char *)0x88890008LL,
                v39);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
              goto LABEL_25;
            }
            v32 = (unsigned int)v16;
            v33 = 7752LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v33,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v32,
            v39);
          v34 = pv;
          pv = 0LL;
          if ( v34 )
            CoTaskMemFree(v34);
          goto LABEL_27;
        }
        memset(&v46[2], 0, 38);
        if ( !v41 )
        {
          v12 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E26,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL,
            v39);
          goto LABEL_27;
        }
        pv = 0LL;
        if ( ((unsigned int (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IAudioMediaType *, LPVOID *))v41->lpVtbl->IsOutputFormatSupported)(
               v41,
               0LL,
               a4,
               &pv) )
        {
          v12 = -2004287480;
          v29 = 2290679816LL;
          v30 = 7722LL;
        }
        else
        {
          *(_DWORD *)v46 = 196606;
          *(_DWORD *)&v46[4] = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                         + 4);
          *(_DWORD *)&v46[12] = 2097160;
          *(_DWORD *)&v46[8] = 8
                             * *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4)
                                         + 4);
          *(_DWORD *)&v46[16] = 2097174;
          *(_DWORD *)&v46[20] = 3;
          *(GUID *)&v46[24] = GUID_00000003_0000_0010_8000_00aa00389b71;
          v43 = 0LL;
          v31 = CAudioMediaType::Create((const struct tWAVEFORMATEX *)v46, 0x28u, &v43, 0.0, 0);
          v12 = v31;
          if ( v31 >= 0 )
          {
            wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v44, (__int64)a4);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pv);
            v17 = v44;
            goto LABEL_12;
          }
          v29 = (unsigned int)v31;
          v30 = 7739LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v30,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v29,
          v39);
        p_pv = (__int64 *)&pv;
        goto LABEL_26;
      }
      v28 = 7703LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)EndpointEffect,
      v39);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E11,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9,
    (int)v38);
  return v10;
}
