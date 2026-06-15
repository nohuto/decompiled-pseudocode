/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x1800139B0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB68C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800EE318 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x1800C2F7C (WPP_SF_dg.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E479C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveSaDeviceParametersForStream(
        struct CEndpointCharacteristics *a1,
        enum _AUDCLNT_SHAREMODE a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct tWAVEFORMATEX *a6,
        struct tWAVEFORMATEX *Src,
        __int64 a8,
        struct SaDeviceParams **a9)
{
  SaDeviceParams *v12; // rbx
  int DeviceDefaults; // eax
  unsigned int v14; // edx
  int v15; // ebp
  _OWORD *v16; // rax
  _OWORD *v17; // rsi
  void *v18; // rdi
  __int64 cbSize; // rdi
  void *v20; // rax
  void *v21; // rbp
  __int64 v22; // r14
  void *v23; // rax
  __int64 v25; // [rsp+40h] [rbp-58h] BYREF
  _OWORD *v26; // [rsp+48h] [rbp-50h]
  void *v27; // [rsp+50h] [rbp-48h]
  struct _GUID v28; // [rsp+60h] [rbp-38h] BYREF

  v12 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v28 = *a4;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v28, 0LL, 0LL, &a8, &v25);
  else
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v28, 0LL, 0LL, 0LL, &v25);
  v15 = DeviceDefaults;
  if ( DeviceDefaults < 0 )
    goto LABEL_16;
  v16 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( v16 )
  {
    *v16 = 0LL;
    v16[1] = 0LL;
    v16[2] = 0LL;
    v16[3] = 0LL;
    v16[4] = 0LL;
    v16[5] = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  v12 = (SaDeviceParams *)v17;
  v26 = v17;
  v15 = 0;
  if ( !v17 )
    v15 = -2147024882;
  v18 = 0LL;
  if ( v15 >= 0 )
  {
    cbSize = Src->cbSize;
    v20 = CoTaskMemAlloc(cbSize + 18);
    v21 = v20;
    if ( v20 )
    {
      memcpy_0(v20, Src, cbSize + 18);
      v18 = v21;
      v22 = a6->cbSize;
      v23 = CoTaskMemAlloc(v22 + 18);
      v27 = v23;
      if ( v23 )
      {
        memcpy_0(v23, a6, v22 + 18);
        *((_DWORD *)v17 + 2) = a3;
        *(_QWORD *)&v28.Data1 = 0LL;
        CoTaskMemFree(*((LPVOID *)v17 + 2));
        *((_QWORD *)v17 + 2) = v27;
        v18 = 0LL;
        v27 = 0LL;
        CoTaskMemFree(*((LPVOID *)v17 + 3));
        *((_QWORD *)v17 + 3) = v21;
        *((_QWORD *)v17 + 4) = a8;
        *((_QWORD *)v17 + 5) = v25;
        v17[4] = *a5;
        v17[3] = *a4;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(**((_QWORD **)a1 + 2) + 40LL))(*((_QWORD *)a1 + 2), v17);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            11LL,
            &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
            (unsigned int)a3,
            a8);
        }
        CoCreateGuid((GUID *)v17 + 5);
        goto LABEL_14;
      }
    }
    else
    {
      v18 = 0LL;
    }
    v15 = -2147024882;
  }
LABEL_14:
  CoTaskMemFree(v18);
  CoTaskMemFree(0LL);
  if ( v15 >= 0 )
  {
    v12 = 0LL;
    *a9 = (struct SaDeviceParams *)v17;
  }
LABEL_16:
  if ( v12 )
    SaDeviceParams::`scalar deleting destructor'(v12, v14);
  return (unsigned int)v15;
}
