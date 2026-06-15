/*
 * XREFs of std::_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180065F70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18001E890 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18001FE10 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18004BCA0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004C254 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x18004C2F4 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call(
        __int64 a1,
        const struct tWAVEFORMATEX **a2)
{
  const struct tWAVEFORMATEX *v2; // r15
  __int64 v4; // r13
  signed int v5; // ebp
  char v6; // bl
  __int64 v7; // rcx
  int **v8; // rax
  unsigned int v9; // edx
  int *v10; // rdi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // r14
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF
  GUID v16; // [rsp+40h] [rbp-48h] BYREF

  v2 = *a2;
  if ( IsDolbyMatFormat(*a2)
    && CEndpointCharacteristics::IsCompressedFormatSupported(
         *(CEndpointCharacteristics **)(a1 + 8),
         (const struct _GUID *)((char *)&v2[1].nSamplesPerSec + 2)) )
  {
    return 1;
  }
  v4 = *(_QWORD *)(a1 + 8);
  v15 = *(_OWORD *)(a1 + 16);
  CEndpointCharacteristics::GetAliasedDeviceConnectorMode(v4, &v16, 0, &v15, 0);
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + 224);
    if ( v5 >= *(_DWORD *)(v7 + 8) )
      return 0;
    v8 = (int **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                   v7,
                   v5);
    v10 = *v8;
    v11 = *(_QWORD *)*v8 - *(_QWORD *)&v16.Data1;
    if ( !v11 )
      v11 = *((_QWORD *)v10 + 1) - *(_QWORD *)v16.Data4;
    if ( !v11 )
    {
      v12 = 0;
      if ( v10[6] > 0 )
        break;
    }
LABEL_7:
    ++v5;
  }
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 < 0 || v12 >= v10[6] )
    {
      ATL::_AtlRaiseException(0xC000008C, v9);
      JUMPOUT(0x18006608BLL);
    }
    if ( (unsigned int)CompareWaveFormat(v2, **(const struct tWAVEFORMATEX ***)(v13 + *((_QWORD *)v10 + 2))) )
      return v6;
    ++v12;
    v13 += 8LL;
    if ( v12 >= v10[6] )
      goto LABEL_7;
  }
}
