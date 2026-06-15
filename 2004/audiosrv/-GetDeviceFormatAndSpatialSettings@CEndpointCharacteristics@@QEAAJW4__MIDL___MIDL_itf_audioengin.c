/*
 * XREFs of ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180029120
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048908 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180049200 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180052F60 (-GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18005D64C (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011F7D0 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801265B0 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 * Callees:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180020010 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180023B20 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x18002A990 (-GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAud.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        int a3,
        LPVOID *a4,
        struct SpatialAudioSettings **a5,
        unsigned int *a6,
        struct SpatialAudioEncoderDescriptor **a7)
{
  struct SpatialAudioEncoderDescriptor *v11; // rdi
  struct SpatialAudioSettings **v12; // r12
  unsigned int *v13; // r13
  void (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // r9
  __int64 v15; // rcx
  unsigned int v16; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // ebx
  char *v18; // r9
  int v19; // ecx
  int v20; // edx
  _QWORD *v21; // r8
  __int64 v22; // rax
  int v23; // r8d
  _QWORD *v24; // rdx
  __int64 v25; // rax
  GUID v26; // xmm0
  int DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b; // eax
  unsigned int v28; // ebx
  struct SpatialAudioEncoderDescriptor *v30; // rbx
  struct SpatialAudioSettings *v31; // rsi
  unsigned __int64 v32; // r15
  struct SpatialAudioEncoderDescriptor *v33; // r14
  int SpatialAudioSettings; // eax
  unsigned int v35; // ebx
  struct SpatialAudioEncoderDescriptor *v36; // rax
  int v37; // [rsp+20h] [rbp-88h]
  int v38; // [rsp+20h] [rbp-88h]
  int v39; // [rsp+20h] [rbp-88h]
  _QWORD v40[2]; // [rsp+30h] [rbp-78h] BYREF
  __m256i v41; // [rsp+40h] [rbp-68h]
  __m256i v42; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v44; // [rsp+C8h] [rbp+20h] BYREF

  if ( !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2196,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL,
      v37);
    return 2147500035LL;
  }
  v11 = 0LL;
  *a4 = 0LL;
  v12 = a5;
  if ( a5 )
    *a5 = 0LL;
  v13 = a6;
  if ( a6 )
  {
    *a6 = 0;
    if ( !v12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21A1,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x80004003LL,
        v37);
      return 2147500035LL;
    }
  }
  if ( a7 )
  {
    *a7 = 0LL;
    if ( !v12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21A7,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x80004003LL,
        v37);
      return 2147500035LL;
    }
    if ( !v13 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21A8,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x80004003LL,
        v37);
      return 2147500035LL;
    }
  }
  v44 = 0;
  v14 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)this + 2);
  v15 = 0LL;
  v40[0] = 0LL;
  if ( v14 )
  {
    (**v14)(v14, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, v40);
    v15 = v40[0];
  }
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 88LL))(v15, &v44);
    v15 = v40[0];
  }
  v16 = v44;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  LOBYTE(v44) = v16 != 0;
  if ( a3 )
    LOBYTE(a3) = 1;
  v17 = a2;
  if ( a2 == eLoopbackConnector )
  {
    v17 = eHostProcessConnector;
  }
  else if ( a2 )
  {
LABEL_17:
    v18 = (char *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, v17);
    goto LABEL_18;
  }
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(this) )
    goto LABEL_17;
  v18 = (char *)this + 168;
LABEL_18:
  v19 = *((_DWORD *)v18 + 2);
  if ( v19 )
  {
    v20 = 0;
    if ( v19 <= 0 )
      goto LABEL_24;
    while ( 1 )
    {
      v21 = (_QWORD *)(*(_QWORD *)v18 + 16LL * v20);
      v22 = *v21 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
      if ( *v21 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
        v22 = v21[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
      if ( !v22 )
        break;
      if ( ++v20 >= v19 )
        goto LABEL_24;
    }
    if ( v20 == -1 )
    {
LABEL_24:
      v23 = 0;
      if ( v19 <= 0 )
        goto LABEL_54;
      while ( 1 )
      {
        v24 = (_QWORD *)(*(_QWORD *)v18 + 16LL * v23);
        v25 = *v24 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *v24 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v25 = v24[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( !v25 )
          break;
        if ( ++v23 >= v19 )
          goto LABEL_54;
      }
      if ( v23 == -1 )
LABEL_54:
        v26 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v18, 0);
      else
        v26 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v26 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v26 = GUID_00000000_0000_0000_0000_000000000000;
  }
  v41.m256i_i64[0] = (__int64)this;
  v41.m256i_i32[2] = a2;
  *(GUID *)((char *)&v41.m256i_u64[1] + 4) = v26;
  v42 = v41;
  DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                                                                    this,
                                                                    a3,
                                                                    v44,
                                                                    a2,
                                                                    (unsigned __int16 **)&v42,
                                                                    a4);
  v28 = DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b;
  if ( DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21AD,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b,
      v38);
    return v28;
  }
  if ( !v12 )
    return 0LL;
  v30 = 0LL;
  v40[0] = 0LL;
  v31 = (struct SpatialAudioSettings *)CoTaskMemAlloc(0x48uLL);
  v40[1] = v31;
  if ( v31 )
  {
    v32 = 0LL;
    v33 = 0LL;
    if ( !a7 )
    {
LABEL_35:
      v44 = 0;
      SpatialAudioSettings = CEndpointCharacteristics::GetSpatialAudioSettings(this, v31, v30, v32, &v44);
      v35 = SpatialAudioSettings;
      if ( SpatialAudioSettings >= 0 )
      {
        *v12 = v31;
        if ( a7 )
        {
          *a7 = v33;
          v33 = 0LL;
        }
        if ( v13 )
          *v13 = v44;
        if ( v33 )
          CoTaskMemFree(v33);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21C5,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SpatialAudioSettings,
        v39);
      v11 = v33;
      goto LABEL_62;
    }
    v32 = 6672LL;
    v36 = (struct SpatialAudioEncoderDescriptor *)CoTaskMemAlloc(0x1A10uLL);
    v30 = v36;
    v40[0] = v36;
    if ( v36 )
    {
      v33 = v36;
      goto LABEL_35;
    }
    v35 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21BE,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL,
      v38);
  }
  else
  {
    v35 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21B7,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL,
      v38);
  }
LABEL_62:
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v31 )
    CoTaskMemFree(v31);
  return v35;
}
