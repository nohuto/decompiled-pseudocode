/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18004BCA0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180046670 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004B740 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     std::_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18004BB70 (std--_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005DD60 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     std::_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180065F70 (std--_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATE_ea_180065F70.c)
 *     _lambda_edd11abfd7fb8004be40d25e4712f682_::operator() @ 0x180066A74 (_lambda_edd11abfd7fb8004be40d25e4712f682_--operator().c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ED34C (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     _lambda_f36e01949351335f5e9acafaa1161a48_::operator() @ 0x18011A62C (_lambda_f36e01949351335f5e9acafaa1161a48_--operator().c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18011B300 (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180074B43 (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  int wFormatTag; // r9d
  __int16 v4; // r8
  WORD cbSize; // ax
  __int128 v6; // xmm1
  __int16 v7; // r11
  __int64 v8; // xmm0_8
  int v9; // r10d
  int v10; // r9d
  WORD v11; // ax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  int v14; // r9d
  __int16 v15; // dx
  int v16; // ecx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  WORD nChannels; // di
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  WORD v26; // di
  __int128 v27; // xmm0
  __int128 Buf2; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v29[24]; // [rsp+30h] [rbp-50h]
  __int128 Buf1; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v31[24]; // [rsp+58h] [rbp-28h]

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    wFormatTag = a1->wFormatTag;
    v4 = -2;
    cbSize = a1->cbSize;
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      if ( cbSize != 22 )
      {
        v20 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v20 )
          v20 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v20 )
        {
          v21 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v21 )
            v21 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v21 )
            return v2;
        }
      }
      v6 = *(_OWORD *)&a1->cbSize;
      Buf1 = *(_OWORD *)&a1->wFormatTag;
      v7 = Buf1;
      v8 = *(_QWORD *)&a1[1].wBitsPerSample;
      *(_OWORD *)v31 = v6;
      v9 = DWORD1(v6);
      *(_QWORD *)&v31[16] = v8;
    }
    else
    {
      if ( cbSize && (((_WORD)wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u || ((a1->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v23 = *(_OWORD *)&a1->wFormatTag;
      *(_WORD *)&v31[2] = a1->wBitsPerSample;
      v7 = -2;
      v9 = (nChannels == 1) + 3;
      Buf1 = v23;
      *(_DWORD *)&v31[4] = v9;
      *(GUID *)&v31[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      LOWORD(Buf1) = -2;
      *(_DWORD *)&v31[8] = wFormatTag;
    }
    v10 = a2->wFormatTag;
    v11 = a2->cbSize;
    *(_WORD *)v31 = 22;
    if ( (_WORD)v10 != 0xFFFE )
    {
      if ( v11 && (((_WORD)v10 - 1) & 0xFFFD) != 0 )
        return v2;
      v26 = a2->nChannels;
      if ( (unsigned __int16)(v26 - 1) > 1u || ((a2->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v27 = *(_OWORD *)&a2->wFormatTag;
      *(_WORD *)&v29[2] = a2->wBitsPerSample;
      *(GUID *)&v29[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v29[8] = v10;
      v14 = (v26 == 1) + 3;
      Buf2 = v27;
      *(_DWORD *)&v29[4] = v14;
      LOWORD(Buf2) = -2;
      goto LABEL_9;
    }
    if ( v11 == 22 )
      goto LABEL_8;
    v24 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v24 )
      v24 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v24 )
      goto LABEL_8;
    v25 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v25 )
      v25 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v25 )
    {
LABEL_8:
      v12 = *(_OWORD *)&a2->cbSize;
      Buf2 = *(_OWORD *)&a2->wFormatTag;
      v4 = Buf2;
      v13 = *(_QWORD *)&a2[1].wBitsPerSample;
      *(_OWORD *)v29 = v12;
      v14 = DWORD1(v12);
      *(_QWORD *)&v29[16] = v13;
LABEL_9:
      *(_WORD *)v29 = 22;
      if ( WORD1(Buf1) )
      {
        v15 = WORD1(Buf2);
      }
      else
      {
        v15 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v16 = DWORD1(Buf2);
      }
      else
      {
        v16 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
      {
        v17 = HIWORD(Buf2);
      }
      else
      {
        v17 = 0;
        HIDWORD(Buf2) = 0;
      }
      if ( !v9 )
      {
        v14 = 0;
        *(_DWORD *)&v29[4] = 0;
      }
      if ( !v7 )
      {
        v4 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v15 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v16 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v17 )
        HIDWORD(Buf1) = 0;
      if ( !v14 )
        *(_DWORD *)&v31[4] = 0;
      if ( !v4 )
        LOWORD(Buf1) = 0;
      v18 = *(_QWORD *)&v31[8] - *(_QWORD *)&v29[8];
      if ( *(_QWORD *)&v31[8] == *(_QWORD *)&v29[8] )
        v18 = *(_QWORD *)&v31[16] - *(_QWORD *)&v29[16];
      if ( !v18 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
