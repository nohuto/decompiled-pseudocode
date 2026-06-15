/*
 * XREFs of _lambda_edd11abfd7fb8004be40d25e4712f682_::operator() @ 0x180066B74
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_edd11abfd7fb8004be40d25e4712f682__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180066B60 (std--_Func_impl_no_alloc__lambda_edd11abfd7fb8004be40d25e4712f682__bool_WAVEFORMATE_ea_180066B60.c)
 * Callees:
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18001FE10 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B954 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18004BCF0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x18004C344 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18011C300 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 */

char __fastcall lambda_edd11abfd7fb8004be40d25e4712f682_::operator()(__int64 a1, __int64 a2)
{
  CEndpointCharacteristics *v4; // r14
  GUID v5; // xmm6
  __int64 v6; // rax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // r8d
  char v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  int v14; // r12d
  __int64 i; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // r14d
  __int64 v20; // r15
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  int Key; // eax
  __int64 v26; // r11
  GUID v27; // xmm0
  __int64 v28; // [rsp+20h] [rbp-50h]
  CEndpointCharacteristics *v29; // [rsp+28h] [rbp-48h]
  GUID v31; // [rsp+40h] [rbp-30h] BYREF

  if ( IsDolbyMatFormat((const struct tWAVEFORMATEX *)a2)
    && CEndpointCharacteristics::IsCompressedFormatSupported(
         *(CEndpointCharacteristics **)a1,
         (const struct _GUID *)(a2 + 24)) )
  {
    return 1;
  }
  v4 = *(CEndpointCharacteristics **)a1;
  v5 = *(GUID *)(a1 + 8);
  v29 = v4;
  v31 = v5;
  v6 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)v4 + 215, 0LL);
  v8 = 0;
  v9 = *(_DWORD *)(v6 + 16);
  v10 = 1;
  if ( v9 > 0 )
  {
    v22 = *(_QWORD *)v6;
    while ( 1 )
    {
      v7 = 2 * v8;
      v23 = *(_QWORD *)(v22 + 16LL * v8) - *(_QWORD *)&v31.Data1;
      if ( !v23 )
        v23 = *(_QWORD *)(v22 + 16LL * v8 + 8) - *(_QWORD *)v31.Data4;
      if ( !v23 )
        break;
      if ( ++v8 >= v9 )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    v8 = -1;
  }
  v31 = v5;
  if ( v8 != -1 )
  {
    v24 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)v4 + 215, 0LL);
    Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(v24, &v31);
    if ( Key == -1 )
    {
      v27 = GUID_00000000_0000_0000_0000_000000000000;
    }
    else
    {
      if ( Key < 0 || Key >= *(_DWORD *)(v26 + 16) )
      {
        ATL::_AtlRaiseException(0xC000008C, v7);
        __debugbreak();
      }
      v27 = *(GUID *)(*(_QWORD *)(v26 + 8) + 16LL * Key);
    }
    v31 = v27;
  }
  v11 = *(_QWORD *)&v31.Data1;
  v28 = *(_QWORD *)&v31.Data1;
  v12 = *(_QWORD *)&v31.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v13 = *(_QWORD *)v31.Data4;
  if ( *(_QWORD *)&v31.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v12 = *(_QWORD *)v31.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v12 )
  {
    v31 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v13 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v11 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v28 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v14 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v16 = *((_QWORD *)v4 + 28);
    if ( v14 >= *(_DWORD *)(v16 + 8) )
      return 0;
    if ( i < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, v7);
      JUMPOUT(0x1800B3C4ELL);
    }
    v17 = *(_QWORD *)(i + *(_QWORD *)v16);
    v18 = *(_QWORD *)v17 - v11;
    if ( *(_QWORD *)v17 == v11 )
      v18 = *(_QWORD *)(v17 + 8) - v13;
    if ( !v18 )
      break;
LABEL_24:
    ++v14;
  }
  v19 = 0;
  if ( *(int *)(v17 + 24) <= 0 )
  {
LABEL_23:
    v4 = v29;
    goto LABEL_24;
  }
  v20 = 0LL;
  while ( 1 )
  {
    if ( v20 < 0 || v19 >= *(_DWORD *)(v17 + 24) )
    {
      ATL::_AtlRaiseException(0xC000008C, v7);
      __debugbreak();
    }
    if ( (unsigned int)CompareWaveFormat(
                         (const struct tWAVEFORMATEX *)a2,
                         **(const struct tWAVEFORMATEX ***)(v20 + *(_QWORD *)(v17 + 16))) )
      return v10;
    ++v19;
    v20 += 8LL;
    if ( v19 >= *(_DWORD *)(v17 + 24) )
    {
      v11 = v28;
      goto LABEL_23;
    }
  }
}
