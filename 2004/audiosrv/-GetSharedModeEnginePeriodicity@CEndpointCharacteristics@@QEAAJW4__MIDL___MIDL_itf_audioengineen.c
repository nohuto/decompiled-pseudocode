/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004B790
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180001E30 (AudioServerGetDevicePeriod.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x1800021D0 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___M_ea_1800021D0.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18001DA40 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18004B6B4 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800D6258 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DEE20 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800DFB00 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB74C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ED40C (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     _lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator() @ 0x18011A6A0 (_lambda_cc1fbeea7d61a5d688c074f297f6e07b_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_3d65a50f10c769ac06d6234efb7a29ec__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180120AB0 (std--_Func_impl_no_alloc__lambda_3d65a50f10c769ac06d6234efb7a29ec__bool_WAVEFORMATE_ea_180120AB0.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B954 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18004BCF0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18011C300 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        GUID *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  __int64 v9; // rsi
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // r9d
  GUID v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  int v22; // r12d
  __int64 i; // r14
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // esi
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  int Key; // eax
  __int64 v34; // r11
  int v35; // eax
  __int64 v36; // [rsp+20h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-50h]
  GUID v39; // [rsp+60h] [rbp-20h] BYREF

  v9 = a1 + 1720;
  v11 = a2;
  v39 = *a4;
  v12 = 232LL;
  if ( a2 != 3 )
    v12 = 224LL;
  v13 = a1 + v12;
  v38 = v13;
  v14 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](a1 + 1720, a2);
  v16 = 0;
  v17 = *(_DWORD *)(v14 + 16);
  if ( v17 > 0 )
  {
    v30 = *(_QWORD *)v14;
    while ( 1 )
    {
      v15 = 2 * v16;
      v31 = *(_QWORD *)(v30 + 16LL * v16) - *(_QWORD *)&v39.Data1;
      if ( !v31 )
        v31 = *(_QWORD *)(v30 + 16LL * v16 + 8) - *(_QWORD *)v39.Data4;
      if ( !v31 )
        break;
      if ( ++v16 >= v17 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v16 = -1;
  }
  v18 = *a4;
  if ( v16 != -1 )
  {
    v39 = *a4;
    v32 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](v9, v11);
    Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(v32, &v39);
    if ( Key == -1 )
    {
      v18 = GUID_00000000_0000_0000_0000_000000000000;
    }
    else
    {
      if ( Key < 0 || Key >= *(_DWORD *)(v34 + 16) )
      {
        ATL::_AtlRaiseException(0xC000008C, v15);
        __debugbreak();
      }
      v18 = *(GUID *)(*(_QWORD *)(v34 + 8) + 16LL * Key);
    }
  }
  v19 = *(_QWORD *)&v18.Data1;
  v36 = *(_QWORD *)&v18.Data1;
  v20 = *(_QWORD *)&v18.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v39 = v18;
  v21 = *(_QWORD *)v18.Data4;
  if ( *(_QWORD *)&v18.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v20 = *(_QWORD *)v18.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v20 )
  {
    v39 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v21 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v19 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v36 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v22 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    if ( v22 >= *(_DWORD *)(*(_QWORD *)v13 + 8LL) )
      return 2290679816LL;
    if ( i < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, v15);
      __debugbreak();
    }
    v24 = *(_QWORD *)(i + **(_QWORD **)v13);
    v25 = *(_QWORD *)v24 - v19;
    if ( *(_QWORD *)v24 == v19 )
      v25 = *(_QWORD *)(v24 + 8) - v21;
    if ( !v25 )
    {
      v26 = 0;
      if ( *(int *)(v24 + 24) > 0 )
        break;
    }
LABEL_43:
    ++v22;
  }
  v27 = 0LL;
  while ( 1 )
  {
    if ( v27 < 0 || v26 >= *(_DWORD *)(v24 + 24) )
    {
      ATL::_AtlRaiseException(0xC000008C, v15);
      __debugbreak();
    }
    v28 = *(_QWORD *)(v27 + *(_QWORD *)(v24 + 16));
    if ( (unsigned int)CompareWaveFormat(a3, *(const struct tWAVEFORMATEX **)v28) )
      break;
    ++v26;
    v27 += 8LL;
    if ( v26 >= *(_DWORD *)(v24 + 24) )
    {
      v19 = v36;
      v13 = v38;
      goto LABEL_43;
    }
  }
  if ( a6 )
    *a6 = *(_DWORD *)(v28 + 12);
  if ( a7 )
    *a7 = *(_DWORD *)(v28 + 8);
  if ( a8 )
    *a8 = *(_DWORD *)(v28 + 16);
  if ( a9 )
  {
    if ( a5 )
      v35 = *(_DWORD *)(v28 + 24);
    else
      v35 = *(_DWORD *)(v28 + 20);
    *a9 = v35;
  }
  return 0LL;
}
