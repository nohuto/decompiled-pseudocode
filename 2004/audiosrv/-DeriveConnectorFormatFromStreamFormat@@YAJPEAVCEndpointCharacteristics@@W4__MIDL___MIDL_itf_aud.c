/*
 * XREFs of ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D6998
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DEE20 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DFB00 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E950 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001FAE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800206E0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180049004 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18004940C (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049750 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800D6258 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800D70AC (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 */

// Hidden C++ exception states: #wind=186
__int64 __fastcall DeriveConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *this,
        unsigned int a2,
        struct tWAVEFORMATEX *Src,
        struct _GUID *a4,
        struct _GUID *a5,
        struct _GUID *a6,
        int a7,
        struct tWAVEFORMATEX **a8)
{
  struct tWAVEFORMATEX *v12; // r15
  int v13; // eax
  struct tWAVEFORMATEX *v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // eax
  struct tWAVEFORMATEX *v18; // r12
  struct tWAVEFORMATEX *v19; // rbx
  int v20; // eax
  LPVOID v21; // rdi
  __int64 v22; // rdx
  const struct tWAVEFORMATEX *v23; // rax
  const struct tWAVEFORMATEX *v24; // rax
  int DeviceDefaults; // eax
  struct tWAVEFORMATEX *v26; // r14
  int v27; // eax
  struct tWAVEFORMATEX *v28; // rsi
  __int64 v29; // rdx
  DWORD nSamplesPerSec; // ecx
  struct IAudioMediaType *v31; // rbx
  int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rdx
  const struct tWAVEFORMATEX *v35; // rax
  const struct tWAVEFORMATEX *v36; // rax
  struct _GUID v38; // [rsp+48h] [rbp-59h] BYREF
  struct tWAVEFORMATEX *Srca; // [rsp+58h] [rbp-49h] BYREF
  struct IAudioMediaType *v40; // [rsp+60h] [rbp-41h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-39h] BYREF
  struct tWAVEFORMATEX *v42; // [rsp+70h] [rbp-31h] BYREF
  struct tWAVEFORMATEX *v43; // [rsp+78h] [rbp-29h] BYREF
  struct IAudioMediaType *v44; // [rsp+80h] [rbp-21h] BYREF
  struct tWAVEFORMATEX **v45; // [rsp+88h] [rbp-19h] BYREF
  struct _GUID v46; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+3Fh]
  int v51; // [rsp+120h] [rbp+7Fh]

  v12 = 0LL;
  v43 = 0LL;
  *a8 = 0LL;
  v45 = 0LL;
  v13 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&v45);
  v14 = (struct tWAVEFORMATEX *)v45;
  if ( v13 < 0 )
  {
    v15 = -2004287480;
    v16 = 1545LL;
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x88890008LL);
    goto LABEL_72;
  }
  v38 = *a4;
  if ( (int)CEndpointCharacteristics::GetMixFormat(
              this,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
              &v38,
              &v43) < 0 )
  {
    v15 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x88890008LL);
    v12 = v43;
    goto LABEL_72;
  }
  v38 = *a5;
  v12 = v43;
  if ( (unsigned int)IsStreamFormatSupportedForMixFormat(this, &v38, a2, v43, v14, 0LL) )
  {
    v15 = -2004287480;
    if ( a7 )
    {
      v42 = 0LL;
      v38 = *a6;
      v17 = DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
              this,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
              Src,
              &v38,
              &v42);
      v18 = v42;
      if ( v17 >= 0 )
      {
        pv = 0LL;
        v40 = 0LL;
        v19 = 0LL;
        Srca = 0LL;
        v20 = CAudioMediaType::Create(v42, (unsigned int)v42->cbSize + 18, (struct IAudioMediaType **)&pv, 0.0, 0);
        v21 = pv;
        if ( v20 >= 0 )
        {
          v38 = *a5;
          if ( (int)CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
                      this,
                      &v38,
                      a2,
                      (struct IAudioMediaType *)pv,
                      &v40) >= 0 )
          {
            v38 = *a5;
            if ( (int)CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
                        this,
                        &v38,
                        a2,
                        v40,
                        (struct IAudioMediaType **)&Srca,
                        0LL) < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x636,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                (const char *)0x88890008LL);
              v19 = Srca;
LABEL_26:
              v51 = -2004287480;
LABEL_28:
              if ( v19 )
                (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v19->wFormatTag + 16LL))(v19);
              if ( v40 )
                ((void (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->Release)(v40);
              if ( v21 )
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
              goto LABEL_67;
            }
            v38 = *a5;
            v19 = Srca;
            v23 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&Srca->wFormatTag
                                                                                                  + 40LL))(Srca);
            if ( (unsigned int)IsStreamFormatSupportedForMixFormat(this, &v38, a2, v23, Src, 0LL) )
            {
              v22 = 1593LL;
            }
            else
            {
              v24 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 40LL))(v21);
              if ( (int)CloneWaveFormat(v24, a8) >= 0 )
              {
                if ( *a8 )
                {
                  v51 = 0;
                  goto LABEL_28;
                }
                v22 = 1597LL;
              }
              else
              {
                v22 = 1596LL;
              }
            }
          }
          else
          {
            v22 = 1587LL;
          }
        }
        else
        {
          v22 = 1584LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)0x88890008LL);
        goto LABEL_26;
      }
      if ( v17 == -2004287480 )
      {
        Srca = 0LL;
        v38 = *a6;
        DeviceDefaults = GetDeviceDefaults(
                           this,
                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                           &v38,
                           &Srca,
                           0LL,
                           0LL,
                           0LL);
        v26 = Srca;
        if ( DeviceDefaults < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x647,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          v51 = -2004287480;
LABEL_66:
          CoTaskMemFree(v26);
          Srca = 0LL;
LABEL_67:
          CoTaskMemFree(v18);
          v42 = 0LL;
          v15 = v51;
          goto LABEL_72;
        }
        if ( v14->nSamplesPerSec != Srca->nSamplesPerSec )
        {
          pv = 0LL;
          v27 = CloneWaveFormat(Srca, (struct tWAVEFORMATEX **)&pv);
          v28 = (struct tWAVEFORMATEX *)pv;
          if ( v27 < 0 )
          {
            v29 = 1612LL;
LABEL_43:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v29,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)0x88890008LL);
            v51 = -2004287480;
LABEL_65:
            CoTaskMemFree(v28);
            pv = 0LL;
            goto LABEL_66;
          }
          nSamplesPerSec = v14->nSamplesPerSec;
          *((_DWORD *)pv + 1) = nSamplesPerSec;
          v28->nAvgBytesPerSec = nSamplesPerSec * v28->nBlockAlign;
          v38 = *a6;
          if ( (int)ConnectorSupportsFormat(this, a2, v28, &v38) < 0 )
          {
            v29 = 1618LL;
            goto LABEL_43;
          }
          *(_QWORD *)&v38.Data1 = 0LL;
          v44 = 0LL;
          v31 = 0LL;
          v40 = 0LL;
          v32 = CAudioMediaType::Create(v28, (unsigned int)v28->cbSize + 18, (struct IAudioMediaType **)&v38, 0.0, 0);
          v33 = *(_QWORD *)&v38.Data1;
          if ( v32 >= 0 )
          {
            v46 = *a5;
            if ( (int)CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
                        this,
                        &v46,
                        a2,
                        *(struct IAudioMediaType **)&v38.Data1,
                        &v44) >= 0 )
            {
              v46 = *a5;
              if ( (int)CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(this, &v46, a2, v44, &v40, 0LL) < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x65F,
                  (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                  (const char *)0x88890008LL);
                v31 = v40;
LABEL_57:
                v51 = -2004287480;
LABEL_59:
                if ( v31 )
                  ((void (__fastcall *)(struct IAudioMediaType *))v31->lpVtbl->Release)(v31);
                if ( v44 )
                  ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
                if ( v33 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                goto LABEL_65;
              }
              v46 = *a5;
              v31 = v40;
              v35 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v40->lpVtbl->GetAudioFormat)(v40);
              if ( (unsigned int)IsStreamFormatSupportedForMixFormat(this, &v46, a2, v35, v14, 0LL) )
              {
                v34 = 1635LL;
              }
              else
              {
                v36 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
                if ( (int)CloneWaveFormat(v36, a8) >= 0 )
                {
                  if ( *a8 )
                  {
                    v51 = 0;
                    goto LABEL_59;
                  }
                  v34 = 1639LL;
                }
                else
                {
                  v34 = 1638LL;
                }
              }
            }
            else
            {
              v34 = 1627LL;
            }
          }
          else
          {
            v34 = 1623LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v34,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)0x88890008LL);
          goto LABEL_57;
        }
        CoTaskMemFree(Srca);
        Srca = 0LL;
      }
      CoTaskMemFree(v42);
      v42 = 0LL;
    }
    v16 = 1647LL;
    goto LABEL_71;
  }
  v38 = *a6;
  if ( (int)GetDeviceDefaults(
              this,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
              &v38,
              a8,
              0LL,
              0LL,
              0LL) < 0 )
  {
    v15 = -2004287480;
    v16 = 1567LL;
    goto LABEL_71;
  }
  if ( !*a8 )
  {
    v15 = -2004287480;
    v16 = 1568LL;
    goto LABEL_71;
  }
  v15 = 0;
LABEL_72:
  CoTaskMemFree(v14);
  v45 = 0LL;
  CoTaskMemFree(v12);
  return v15;
}
