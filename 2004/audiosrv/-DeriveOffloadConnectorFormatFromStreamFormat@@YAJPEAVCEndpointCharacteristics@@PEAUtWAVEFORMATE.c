/*
 * XREFs of ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800D72AC
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800319A0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E950 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18002A5A4 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180049004 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800D8260 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800DCC24 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18011D468 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DeriveOffloadConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *Src,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        unsigned int a6,
        struct tWAVEFORMATEX **a7)
{
  struct tWAVEFORMATEX *v9; // rbx
  struct tWAVEFORMATEX **v10; // r12
  struct tWAVEFORMATEX **v11; // rdi
  int v12; // r15d
  struct tWAVEFORMATEX *v13; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v14; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // r8d
  struct tWAVEFORMATEX *v16; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // edx
  DWORD nSamplesPerSec; // ecx
  struct _GUID *v19; // r15
  unsigned int v20; // r14d
  LPVOID pv[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _GUID v23; // [rsp+40h] [rbp-10h] BYREF
  struct tWAVEFORMATEX *v24; // [rsp+90h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *Srca; // [rsp+A0h] [rbp+50h] BYREF
  struct _GUID *v26; // [rsp+A8h] [rbp+58h]

  v26 = a4;
  pv[1] = 0LL;
  a5 = 0LL;
  Srca = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  pv[0] = 0LL;
  v10 = a7;
  *a7 = 0LL;
  v11 = (struct tWAVEFORMATEX **)*((_QWORD *)a1 + 2);
  a7 = v11;
  (*(void (__fastcall **)(struct tWAVEFORMATEX **))&(*v11)->nAvgBytesPerSec)(v11);
  v12 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)pv);
  v13 = (struct tWAVEFORMATEX *)pv[0];
  if ( v12 < 0 )
    goto LABEL_22;
  if ( *((_WORD *)pv[0] + 1) > 2u
    && dword_18016E310[a6]
    && !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a1 + 56LL))(a1)
    && (unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode((struct IPropertyStore **)a1) == 1 )
  {
    if ( (int)CEndpointCharacteristics::GetOffloadDeviceFormat(a1, &Srca) < 0 )
      goto LABEL_22;
    if ( Srca->nChannels == 2 )
      goto LABEL_10;
  }
  if ( (int)CloneWaveFormat(Src, &v24) < 0 )
    goto LABEL_21;
  v9 = v24;
  v12 = IsFormatSupportedByHwAudioEngine((struct IMMDevice *)v11, v14, v24, 0LL);
  if ( v12 )
  {
LABEL_10:
    if ( (*(int (__fastcall **)(struct tWAVEFORMATEX **, struct _GUID **))&(*v11)[2].nSamplesPerSec)(v11, &a5) < 0 )
      goto LABEL_22;
    v16 = Srca;
    if ( !Srca )
    {
      if ( (int)CEndpointCharacteristics::GetOffloadDeviceFormat(a1, &Srca) < 0 )
        goto LABEL_22;
      v16 = Srca;
    }
    if ( (int)CloneWaveFormat(v16, &v24) >= 0 )
    {
      v9 = v24;
      if ( v13->nChannels != Srca->nChannels )
      {
        nSamplesPerSec = v13->nSamplesPerSec;
        v24->nSamplesPerSec = nSamplesPerSec;
        v9->nAvgBytesPerSec = nSamplesPerSec * v9->nBlockAlign;
        v12 = IsFormatSupportedByHwAudioEngine((struct IMMDevice *)v11, v17, v9, 0LL);
      }
      goto LABEL_17;
    }
LABEL_21:
    v9 = v24;
    goto LABEL_22;
  }
LABEL_17:
  if ( v12 >= 0 )
  {
    v19 = v26;
    v23 = *v26;
    if ( IsOffloadConnectorFormatSupportedForMixFormat(a1, &v23, v15, v9, v9) >= 0 )
    {
      v23 = *v19;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(a1, &v23, 1, v9, v13, 0LL) )
        CloneWaveFormat(v9, v10);
    }
  }
LABEL_22:
  v20 = *v10 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v13);
  CoTaskMemFree(v9);
  CoTaskMemFree(Srca);
  Srca = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(struct tWAVEFORMATEX **))&(*v11)->cbSize)(v11);
  CoTaskMemFree(a5);
  a5 = 0LL;
  CoTaskMemFree(0LL);
  return v20;
}
