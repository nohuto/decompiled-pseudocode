/*
 * XREFs of ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180020060
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180002B80 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     AudioServerIsFormatSupported @ 0x18000CBC0 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x180011BE0 (AudioServerGetMixFormat.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18001D3C0 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180021F80 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180031320 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800C6880 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D5D08 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800D70C0 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x1800D9440 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DE190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180047550 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180047FAC (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800BC5EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18011E2C4 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18011E300 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v7; // r14d
  struct _RTL_CRITICAL_SECTION *v8; // r13
  _QWORD *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int128 v13; // xmm0
  int v14; // eax
  int v15; // eax
  BYTE *pData; // rbx
  int v17; // eax
  unsigned int v18; // r8d
  const char *v19; // r9
  int v20; // edx
  int v21; // edi
  unsigned __int16 v22; // r15
  __int64 v23; // r11
  __int16 v24; // r10
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // cx
  unsigned __int16 v32; // ax
  int v33; // ecx
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdi
  struct tWAVEFORMATEX *v37; // rax
  struct tWAVEFORMATEX *v38; // rsi
  int refreshed; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // [rsp+20h] [rbp-79h]
  char *v45; // [rsp+28h] [rbp-71h]
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-49h] BYREF
  PROPVARIANT v48[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v49; // [rsp+78h] [rbp-21h]
  __int128 v50; // [rsp+80h] [rbp-19h]
  struct _RTL_CRITICAL_SECTION *v51; // [rsp+90h] [rbp-9h]
  __int128 v52; // [rsp+98h] [rbp-1h] BYREF
  int v53; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v7 = 0;
  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8688);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8688));
  v51 = v8;
  if ( a2 == eOffloadConnector )
  {
    v13 = PKEY_AudioEngine_HWMixFormat;
    v15 = 8;
  }
  else
  {
    v10 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v10 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v10 )
    {
      v50 = (__int128)*a3;
      v11 = 0;
      v9 = qword_18019D7B0;
      while ( 1 )
      {
        v12 = qword_18019D7B0[2 * v11] - v50;
        if ( !v12 )
          v12 = qword_18019D7B0[2 * v11 + 1] - *((_QWORD *)&v50 + 1);
        if ( !v12 )
          break;
        if ( ++v11 >= 9 )
        {
          v7 = -2147023728;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A99,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x80070490LL,
            v44);
          goto LABEL_53;
        }
      }
      v13 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      v14 = 2;
      if ( a2 == eKeywordDetectorConnector )
        v14 = 602;
      v15 = v11 + v14;
    }
    else
    {
      v13 = PKEY_AudioEngine_MixFormat;
      v15 = 0;
    }
  }
  v52 = v13;
  v53 = v15;
  pData = 0LL;
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *, _QWORD *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &v52,
          v48,
          v9);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AA0,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v17,
      v44);
  }
  else if ( LOWORD(v48[0]) )
  {
    if ( LOWORD(v48[0]) == 65 )
    {
      if ( LODWORD(v48[1]) >= 0x12 && LODWORD(v48[1]) == *(unsigned __int16 *)(v49 + 16) + 18LL )
        pData = (BYTE *)v49;
      else
        wil::details::in1diag3::Log_Win32(retaddr, (void *)0x1AAD, v18, v19, v44);
    }
    else
    {
      LODWORD(v45) = LOWORD(v48[0]);
      wil::details::in1diag3::Log_Win32Msg(
        retaddr,
        (void *)0x1ABA,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0xD,
        (unsigned int)"unexpected vartype %d (0x%x)",
        v45);
    }
  }
  memset(&pvar, 0, sizeof(pvar));
  if ( pData )
    goto LABEL_19;
  refreshed = CEndpointCharacteristics::RefreshDeviceFormat(this, a2);
  v41 = refreshed;
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AC4,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)refreshed,
      v44);
LABEL_76:
    v7 = v41;
    goto LABEL_52;
  }
  v42 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &v52,
          &pvar);
  v41 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AC7,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v42,
      v44);
    goto LABEL_76;
  }
  if ( pvar.vt != 65 )
  {
    LODWORD(v45) = pvar.vt;
    v41 = -2147024883;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1AC8,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000DLL,
      (int)"unexpected vartype %d (0x%x)",
      v45,
      pvar.vt);
    goto LABEL_76;
  }
  if ( !(unsigned int)IsValidWfxBlob(&pvar) )
  {
    v41 = -2147024883;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AC9,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000DLL,
      v44);
    goto LABEL_76;
  }
  pData = pvar.bstrblobVal.pData;
  if ( !pvar.bstrblobVal.pData )
  {
    v43 = -2147467261;
LABEL_75:
    LODWORD(v45) = v43;
    v41 = -2004287480;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1AD1,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL,
      (int)"ValidateUncompressedWaveFormatEx returned 0x%08x",
      v45);
    goto LABEL_76;
  }
LABEL_19:
  if ( !*((_WORD *)pData + 1) )
    goto LABEL_74;
  v20 = *((_DWORD *)pData + 1);
  if ( !v20 )
    goto LABEL_74;
  v21 = *((_DWORD *)pData + 2);
  if ( !v21 )
    goto LABEL_74;
  v22 = *((_WORD *)pData + 6);
  if ( !v22 )
    goto LABEL_74;
  v23 = *((unsigned __int16 *)pData + 8);
  if ( (unsigned __int16)v23 > 0x400u )
    goto LABEL_74;
  v24 = *(_WORD *)pData;
  v25 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
  v26 = *((unsigned __int16 *)pData + 1);
  if ( ((*(_WORD *)pData - 1) & 0xFFFD) == 0 )
  {
    if ( !(_WORD)v23
      && (*((_WORD *)pData + 7) & 7) == 0
      && (unsigned __int16)v26 <= 2u
      && v21 == (v20 * (unsigned int)*((unsigned __int16 *)pData + 7) * v26) >> 3 )
    {
      goto LABEL_41;
    }
    goto LABEL_74;
  }
  if ( v24 == -2 )
  {
    if ( (unsigned __int16)v23 < 0x16u )
      goto LABEL_74;
    v27 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v27 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v27 )
      goto LABEL_33;
    v28 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v28 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v28 )
    {
LABEL_33:
      v29 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
        v29 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
      if ( v29 )
      {
        v30 = *((_WORD *)pData + 7);
        v31 = v30;
        if ( v30 == 32 || v30 == 64 )
        {
LABEL_37:
          v32 = *((_WORD *)pData + 9);
          if ( v32 )
          {
            if ( v31 >= v32 )
            {
              v33 = v26 * v31;
              if ( v21 == (unsigned int)(v20 * v33) >> 3 && v22 == v33 / 8 )
              {
LABEL_41:
                v25 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                goto LABEL_42;
              }
            }
          }
        }
      }
      else
      {
        v31 = *((_WORD *)pData + 7);
        v22 = *((_WORD *)pData + 6);
        if ( ((v31 - 8) & 0xFFE7) == 0 )
          goto LABEL_37;
      }
LABEL_74:
      v43 = -2147024809;
      goto LABEL_75;
    }
  }
LABEL_42:
  if ( ((v24 - 1) & 0xFFFD) != 0 )
  {
    if ( v24 != -2 )
      goto LABEL_84;
    v34 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( !v34 )
      v34 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( v34 )
    {
      v35 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( !v35 )
        v35 = v25 - *((_QWORD *)pData + 4);
      if ( v35 )
      {
LABEL_84:
        v43 = 1;
        goto LABEL_75;
      }
    }
  }
  v36 = *((unsigned __int16 *)pData + 8);
  v37 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v23 + 18);
  v38 = v37;
  if ( !v37 )
  {
    *a4 = 0LL;
    v41 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AD3,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL,
      v44);
    goto LABEL_76;
  }
  memcpy_0(v37, pData, v36 + 18);
  *a4 = v38;
LABEL_52:
  PropVariantClear((PROPVARIANT *)&pvar);
  PropVariantClear(v48);
LABEL_53:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v7;
}
