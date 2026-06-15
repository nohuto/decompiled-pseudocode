/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006ECF0
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180001E30 (AudioServerGetDevicePeriod.c)
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x180012120 (AudioServerGetMixFormat.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180019920 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800319A0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800C6588 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DED60 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DFA40 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB68C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180002278 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180021780 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180022520 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180023020 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18002A5A4 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C310 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011AD48 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        unsigned int a1,
        int a2,
        int a3,
        CEndpointCharacteristics *a4,
        int a5,
        int a6,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a7,
        __int64 a8,
        int a9,
        int a10,
        struct _GUID *a11,
        struct _GUID *a12,
        struct _GUID *a13,
        __int64 a14,
        GUID *a15)
{
  __int64 v17; // r12
  struct _GUID *v18; // r13
  _OWORD *v19; // r14
  GUID *v20; // rdi
  GUID v21; // xmm9
  struct _GUID v22; // xmm7
  int v23; // eax
  unsigned int v24; // ebx
  struct _GUID v26; // xmm8
  struct _GUID v27; // xmm6
  int v28; // r14d
  __int64 v29; // rcx
  struct _GUID *v30; // rbx
  unsigned int i; // r15d
  int v32; // eax
  unsigned int v33; // r14d
  bool v34; // zf
  struct _GUID *v35; // rax
  bool v36; // [rsp+30h] [rbp-F8h] BYREF
  _OWORD *v37; // [rsp+38h] [rbp-F0h] BYREF
  GUID *v38; // [rsp+40h] [rbp-E8h]
  struct _GUID v39; // [rsp+50h] [rbp-D8h] BYREF
  struct _GUID v40; // [rsp+60h] [rbp-C8h] BYREF
  struct _GUID *v41; // [rsp+70h] [rbp-B8h]
  struct _GUID *v42; // [rsp+78h] [rbp-B0h]
  struct _GUID *v43; // [rsp+80h] [rbp-A8h]
  struct _GUID v44; // [rsp+90h] [rbp-98h] BYREF
  struct _GUID v45; // [rsp+A0h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v17 = a1;
  v43 = a11;
  v42 = a12;
  v18 = a13;
  v41 = a13;
  v19 = (_OWORD *)a14;
  v37 = (_OWORD *)a14;
  v20 = a15;
  v38 = a15;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  v44 = GUID_00000000_0000_0000_0000_000000000000;
  v39 = GUID_00000000_0000_0000_0000_000000000000;
  v40 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 == 1 )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a4, a7, &v44, &v39, &v40);
    v22 = v39;
    v21 = v39;
LABEL_54:
    v26 = v40;
    v27 = v44;
    goto LABEL_55;
  }
  if ( a5 != 2 )
  {
    if ( a2 )
    {
      if ( !CEndpointCharacteristics::AllowRawStreamCreation(a4, a7) )
        return 2290679847LL;
      v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v22 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v26 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v21 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      goto LABEL_14;
    }
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(a4, a7, &v44, &v39, &v40);
    if ( a5 )
    {
      if ( a5 != 1 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v17 >= 0x15 )
    {
      goto LABEL_17;
    }
    if ( a5 != 1 || (unsigned int)v17 < 0x15 )
    {
      v29 = v17;
      if ( a5 )
        v30 = (struct _GUID *)*(&off_180157660 + v17);
      else
        v30 = (struct _GUID *)*(&off_18014CC90 + v17);
      v28 = 0;
      if ( v30->Data1 )
        v21 = *(GUID *)*(_QWORD *)v30->Data4;
LABEL_18:
      if ( !a5 )
      {
        if ( dword_18016E310[v29]
          && (unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode((struct IPropertyStore **)a4) )
        {
          v30 = (struct _GUID *)&unk_180157728;
          goto LABEL_39;
        }
LABEL_37:
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x390,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v28);
          return (unsigned int)v28;
        }
        goto LABEL_39;
      }
      if ( a5 != 1 )
        goto LABEL_37;
      if ( (_DWORD)v17 == 18 )
      {
        if ( !a3 )
          goto LABEL_37;
        v30 = (struct _GUID *)&unk_180157718;
      }
      else
      {
        if ( (_DWORD)v17 != 3 || !a3 )
          goto LABEL_37;
        v30 = (struct _GUID *)&unk_180157708;
      }
LABEL_39:
      for ( i = 0; i < v30->Data1; ++i )
      {
        v45 = *(struct _GUID *)(*(_QWORD *)v30->Data4 + 16LL * i);
        v32 = UseSupportedConnectorMode(a4, v17, a7, &v45, a10, &v36);
        v33 = v32;
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x39C,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v32);
          return v33;
        }
        if ( v36 )
        {
          v27 = *(struct _GUID *)(*(_QWORD *)v30->Data4 + 16LL * i);
          v44 = v27;
          if ( a9
            || (v45 = v27,
                v34 = !CEndpointCharacteristics::IsAPOModeSupported(a4, &v45, a7),
                v35 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
                !v34) )
          {
            v35 = &v44;
          }
          v22 = *v35;
          v26 = v27;
          goto LABEL_48;
        }
        v45 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(a4, a7, &v45) )
        {
          v45 = *(struct _GUID *)(*(_QWORD *)v30->Data4 + 16LL * i);
          if ( CEndpointCharacteristics::IsAPOModeSupported(a4, &v45, a7) )
          {
            v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            v22 = *(struct _GUID *)(*(_QWORD *)v30->Data4 + 16LL * i);
            v26 = v22;
LABEL_48:
            v20 = v38;
            v19 = v37;
            v18 = v41;
            goto LABEL_55;
          }
        }
      }
      v22 = v39;
      v20 = v38;
      v19 = v37;
      v18 = v41;
      goto LABEL_54;
    }
LABEL_17:
    v28 = -2147024809;
    v29 = v17;
    v30 = v42;
    goto LABEL_18;
  }
  if ( a8 )
  {
    v37 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64, _OWORD **))(*(_QWORD *)a8 + 80LL))(a8, &v37);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x345,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v23);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
      return v24;
    }
    v26 = *(struct _GUID *)(*(__int64 (__fastcall **)(_OWORD *, struct _GUID *))(*(_QWORD *)v37 + 112LL))(v37, &v45);
    v22 = v26;
    v27 = v26;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
  }
  else
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a4,
      eHostProcessConnector,
      &v44,
      &v39,
      &v40);
    v26 = v40;
    v22 = v39;
    v27 = v44;
  }
  v21 = v22;
LABEL_14:
  v20 = v38;
LABEL_55:
  if ( v43 )
    *v43 = v27;
  if ( v42 )
    *v42 = v22;
  if ( v18 )
    *v18 = v26;
  if ( v19 )
    *v19 = v26;
  if ( v20 )
    *v20 = v21;
  return 0LL;
}
