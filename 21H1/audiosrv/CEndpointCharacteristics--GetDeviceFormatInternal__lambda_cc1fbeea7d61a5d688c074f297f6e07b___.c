/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180020010
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001C5C0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x180021CB0 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180029120 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800486DC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180048C08 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B904 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004CAE4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcmp_0 @ 0x180074B43 (memcmp_0.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180118808 (CEndpointCharacteristics--GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x180119428 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801194F8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18011C240 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18011EE94 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18011EED0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
        CEndpointCharacteristics *this,
        char a2,
        bool a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        unsigned __int16 **a5,
        LPVOID *a6)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // r12d
  bool v7; // r13
  CEndpointCharacteristics *v8; // r15
  LPVOID *v9; // rdi
  const PROPERTYKEY *v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  const char *v13; // r9
  unsigned __int16 *v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int16 *v16; // rdx
  __int64 v17; // rbx
  struct tWAVEFORMATEX **v18; // rbx
  GUID v19; // xmm0
  unsigned __int64 v20; // r8
  unsigned __int16 *v21; // r9
  __int64 v22; // rcx
  int v23; // r10d
  GUID v24; // kr00_16
  __int64 v25; // rax
  int v26; // r9d
  struct tWAVEFORMATEX *v27; // rax
  __int64 i; // r8
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r15
  int v33; // ecx
  unsigned __int16 v34; // ax
  int v35; // r10d
  __int16 v36; // r11
  int v37; // ecx
  unsigned __int16 v38; // ax
  int v39; // r9d
  __int16 v40; // di
  int v41; // ecx
  __int16 v42; // ax
  __int64 v43; // rax
  __int64 v44; // rbx
  void *v45; // rax
  void *v46; // rdi
  int DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b; // ebx
  int v48; // r11d
  int v49; // r9d
  int v50; // r10d
  int v51; // ebx
  unsigned __int16 v52; // dx
  __int64 v53; // rdx
  __int64 v54; // rax
  int v55; // edx
  unsigned __int16 v56; // ax
  int v57; // edx
  void *v58; // rax
  void *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r11
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  int Key; // eax
  __int64 v66; // r11
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int16 v69; // r8
  unsigned __int16 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int16 v73; // r8
  unsigned __int16 v74; // r9
  unsigned __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rax
  void *v78; // rcx
  int updated; // eax
  __int64 v80; // rdx
  unsigned int v81; // [rsp+20h] [rbp-E0h]
  char *v82; // [rsp+28h] [rbp-D8h]
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  int v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v87; // [rsp+58h] [rbp-A8h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+70h] [rbp-90h]
  __int64 v90; // [rsp+78h] [rbp-88h]
  LPVOID *v91; // [rsp+80h] [rbp-80h]
  CEndpointCharacteristics *v92; // [rsp+88h] [rbp-78h]
  __int128 v93; // [rsp+90h] [rbp-70h] BYREF
  __int128 v94; // [rsp+A0h] [rbp-60h]
  struct tWAVEFORMATEX *v95[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v96; // [rsp+C0h] [rbp-40h]
  __int128 Buf2; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v98[24]; // [rsp+E0h] [rbp-20h]
  __int128 Buf1; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v100[24]; // [rsp+108h] [rbp+8h]
  GUID fmtid; // [rsp+120h] [rbp+20h] BYREF
  DWORD pid; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v6 = a4;
  v87 = a4;
  v7 = a3;
  v8 = this;
  v92 = this;
  v9 = a6;
  v91 = a6;
  v85 = 0;
  *a6 = 0LL;
  pv = 0LL;
  if ( a2 )
  {
    pvar[0] = &pv;
    pvar[1] = 0LL;
    LOBYTE(Src) = 1;
    v93 = *(_OWORD *)a5;
    v94 = *((_OWORD *)a5 + 1);
    DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b = CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                                                               this,
                                                               (struct tWAVEFORMATEX **)&pvar[1]);
    if ( (_BYTE)Src )
    {
      v60 = *(void **)pvar[0];
      *(_QWORD *)pvar[0] = pvar[1];
      if ( v60 )
        CoTaskMemFree(v60);
    }
    if ( DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b < 0 )
    {
      v61 = 6545LL;
LABEL_158:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v61,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b,
        v81);
      goto LABEL_159;
    }
LABEL_65:
    if ( !pv )
    {
      DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b = -2147467261;
      goto LABEL_157;
    }
    v48 = *((unsigned __int16 *)pv + 1);
    if ( (_WORD)v48 )
    {
      v49 = *((_DWORD *)pv + 1);
      if ( v49 )
      {
        v50 = *((_DWORD *)pv + 2);
        if ( v50 )
        {
          v51 = *((unsigned __int16 *)pv + 6);
          if ( (_WORD)v51 )
          {
            v52 = *((_WORD *)pv + 8);
            if ( v52 <= 0x400u )
            {
              if ( ((*(_WORD *)pv - 1) & 0xFFFD) != 0 )
              {
                if ( *(_WORD *)pv != 0xFFFE )
                {
LABEL_85:
                  v58 = 0LL;
                  *v9 = pv;
                  DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b = 0;
                  goto LABEL_86;
                }
                if ( v52 < 0x16u )
                  goto LABEL_89;
                v53 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pv + 3);
                if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3) )
                  v53 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pv + 4);
                if ( v53 )
                {
                  v80 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pv + 3);
                  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3) )
                    v80 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pv + 4);
                  if ( v80 )
                    goto LABEL_85;
                }
                v54 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pv + 3);
                if ( !v54 )
                  v54 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pv + 4);
                v55 = *((unsigned __int16 *)pv + 7);
                if ( v54 )
                {
                  if ( (((_WORD)v55 - 32) & 0xFFDF) == 0 )
                    goto LABEL_81;
                }
                else if ( (((_WORD)v55 - 8) & 0xFFE7) == 0 )
                {
LABEL_81:
                  v56 = *((_WORD *)pv + 9);
                  if ( v56 )
                  {
                    if ( (unsigned __int16)v55 >= v56 )
                    {
                      v57 = v48 * v55;
                      if ( v50 == (unsigned int)(v49 * v57) >> 3 && v51 == v57 / 8 )
                        goto LABEL_85;
                    }
                  }
                }
              }
              else if ( !v52
                     && (*((_WORD *)pv + 7) & 7) == 0
                     && (unsigned __int16)v48 <= 2u
                     && v50 == (v49 * (unsigned int)*((unsigned __int16 *)pv + 7) * v48) >> 3 )
              {
                goto LABEL_85;
              }
            }
          }
        }
      }
    }
LABEL_89:
    DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b = -2147024809;
LABEL_157:
    v61 = 6598LL;
    goto LABEL_158;
  }
  v10 = &PKEY_AudioEngine_DeviceFormat;
  if ( a4 == eKeywordDetectorConnector )
    v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  fmtid = v10->fmtid;
  pid = v10->pid;
  *(_OWORD *)pvar = 0LL;
  Src = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &fmtid,
          pvar);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x199A,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11,
      v81);
    goto LABEL_63;
  }
  if ( !LOWORD(pvar[0]) )
    goto LABEL_63;
  if ( LOWORD(pvar[0]) != 65 )
  {
    LODWORD(v82) = LOWORD(pvar[0]);
    wil::details::in1diag3::Log_Win32Msg(
      retaddr,
      (void *)0x19B7,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0xD,
      (unsigned int)"Unexpected vartype %d (0x%08x)",
      v82);
    goto LABEL_63;
  }
  if ( LODWORD(pvar[1]) < 0x12
    || (v14 = (unsigned __int16 *)Src, LODWORD(pvar[1]) != *((unsigned __int16 *)Src + 8) + 18LL) )
  {
    wil::details::in1diag3::Log_Win32(retaddr, (void *)0x19AB, v12, v13, v81);
LABEL_63:
    if ( !pv )
    {
      v95[0] = (struct tWAVEFORMATEX *)&pv;
      v95[1] = 0LL;
      v96 = 1;
      v93 = *(_OWORD *)a5;
      v94 = *((_OWORD *)a5 + 1);
      DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b = CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                                                                 v8,
                                                                 &v95[1]);
      if ( v96 )
      {
        v78 = *(void **)v95[0];
        *(_QWORD *)v95[0] = v95[1];
        if ( v78 )
          CoTaskMemFree(v78);
      }
      if ( DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b < 0 )
      {
        v75 = (unsigned int)DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b;
        v76 = 6590LL;
        goto LABEL_155;
      }
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v8, v7, v6, (const struct tWAVEFORMATEX *)pv);
      DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b = updated;
      if ( updated < 0 )
      {
        v75 = (unsigned int)updated;
        v76 = 6593LL;
        goto LABEL_155;
      }
    }
    PropVariantClear(pvar);
    goto LABEL_65;
  }
  v15 = *((int *)a5 + 2);
  v16 = *a5;
  v17 = 112LL;
  if ( (_DWORD)v15 == 3 )
    v17 = 116LL;
  v18 = (struct tWAVEFORMATEX **)&v16[v17];
  v19 = *(GUID *)((char *)a5 + 12);
  *(GUID *)v95 = v19;
  v20 = v15;
  v21 = v16 + 860;
  if ( v15 >= *((_QWORD *)v16 + 215) )
  {
    v77 = gsl::fail_fast::fail_fast(
            (gsl::fail_fast *)&v93,
            "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    v85 = 1;
    gsl::details::throw_exception<gsl::fail_fast>(v77);
  }
  v22 = *((_QWORD *)v16 + 216);
  v23 = 0;
  LODWORD(v16) = *(_DWORD *)(v22 + 24 * v20 + 16);
  if ( (int)v16 > 0 )
  {
    v62 = *(_QWORD *)(v22 + 24 * v20);
    while ( 1 )
    {
      v63 = *(_QWORD *)(v62 + 16LL * v23) - (unsigned __int64)v95[0];
      if ( !v63 )
        v63 = *(_QWORD *)(v62 + 16LL * v23 + 8) - (unsigned __int64)v95[1];
      if ( !v63 )
        break;
      if ( ++v23 >= (int)v16 )
        goto LABEL_13;
    }
    if ( v23 != -1 )
    {
      *(GUID *)v95 = v19;
      v64 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](v21, v20);
      Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(v64, v95);
      if ( Key == -1 )
      {
        v19 = GUID_00000000_0000_0000_0000_000000000000;
      }
      else
      {
        if ( Key < 0 || Key >= *(_DWORD *)(v66 + 16) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          __debugbreak();
        }
        v19 = *(GUID *)(*(_QWORD *)(v66 + 8) + 16LL * Key);
      }
    }
  }
LABEL_13:
  *(GUID *)v95 = v19;
  v24 = v19;
  v25 = *(_QWORD *)&v19.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v19.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v25 = *(_QWORD *)v19.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v25 )
  {
    *(GUID *)v95 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v24 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  v26 = 0;
  v85 = 0;
  v27 = *v18;
  v95[0] = *v18;
  for ( i = 0LL; ; i += 8LL )
  {
    v90 = i;
    if ( v26 >= (signed int)v27->nAvgBytesPerSec )
      goto LABEL_62;
    if ( i < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
      __debugbreak();
    }
    v29 = *(_QWORD *)(i + *(_QWORD *)&v27->wFormatTag);
    v30 = *(_QWORD *)v29 - *(_QWORD *)&v24.Data1;
    if ( *(_QWORD *)v29 == *(_QWORD *)&v24.Data1 )
      v30 = *(_QWORD *)(v29 + 8) - *(_QWORD *)v24.Data4;
    if ( !v30 )
    {
      v31 = 0;
      v86 = 0;
      if ( *(int *)(v29 + 24) > 0 )
        break;
    }
LABEL_132:
    v85 = ++v26;
    v27 = v95[0];
  }
  v32 = 0LL;
  while ( 1 )
  {
    if ( v32 < 0 || v31 >= *(_DWORD *)(v29 + 24) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
      __debugbreak();
    }
    v16 = **(unsigned __int16 ***)(v32 + *(_QWORD *)(v29 + 16));
    if ( !v14 )
    {
      if ( !v16 )
        goto LABEL_59;
      goto LABEL_130;
    }
    if ( !v16 )
      goto LABEL_130;
    v33 = *v14;
    v34 = v14[8];
    if ( (_WORD)v33 == 0xFFFE )
    {
      if ( v34 != 22 )
      {
        v67 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v67 )
          v67 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v67 )
        {
          v68 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v68 )
            v68 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v68 )
            goto LABEL_130;
        }
      }
      Buf1 = *(_OWORD *)v14;
      *(_OWORD *)v100 = *((_OWORD *)v14 + 1);
      *(_QWORD *)&v100[16] = *((_QWORD *)v14 + 4);
      *(_WORD *)v100 = 22;
      v35 = *(_DWORD *)&v100[4];
      v36 = Buf1;
    }
    else
    {
      if ( v34 && (((_WORD)v33 - 1) & 0xFFFD) != 0 )
        goto LABEL_130;
      v69 = v14[1];
      if ( (unsigned __int16)(v69 - 1) > 1u )
        goto LABEL_130;
      v70 = v14[7];
      if ( ((v70 - 8) & 0xFFE7) != 0 )
        goto LABEL_130;
      Buf1 = *(_OWORD *)v14;
      v36 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v100 = 22;
      *(_WORD *)&v100[2] = v70;
      *(GUID *)&v100[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v100[8] = v33;
      v35 = (v69 == 1) + 3;
      *(_DWORD *)&v100[4] = v35;
    }
    v37 = *v16;
    v38 = v16[8];
    if ( (_WORD)v37 == 0xFFFE )
      break;
    if ( !v38 || (((_WORD)v37 - 1) & 0xFFFD) == 0 )
    {
      v73 = v16[1];
      if ( (unsigned __int16)(v73 - 1) <= 1u )
      {
        v74 = v16[7];
        v40 = -2;
        if ( ((v74 - 8) & 0xFFE7) == 0 )
        {
          Buf2 = *(_OWORD *)v16;
          LOWORD(Buf2) = -2;
          *(_WORD *)v98 = 22;
          *(_WORD *)&v98[2] = v74;
          *(GUID *)&v98[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v98[8] = v37;
          v39 = (v73 == 1) + 3;
          *(_DWORD *)&v98[4] = v39;
          goto LABEL_35;
        }
      }
    }
LABEL_130:
    v31 = v86 + 1;
    v86 = v31;
    v32 += 8LL;
    if ( v31 >= *(_DWORD *)(v29 + 24) )
    {
      i = v90;
      v26 = v85;
      goto LABEL_132;
    }
  }
  if ( v38 != 22 )
  {
    v71 = *((_QWORD *)v16 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v71 )
      v71 = *((_QWORD *)v16 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v71 )
    {
      v72 = *((_QWORD *)v16 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v72 )
        v72 = *((_QWORD *)v16 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v72 )
        goto LABEL_130;
    }
  }
  Buf2 = *(_OWORD *)v16;
  *(_OWORD *)v98 = *((_OWORD *)v16 + 1);
  *(_QWORD *)&v98[16] = *((_QWORD *)v16 + 4);
  *(_WORD *)v98 = 22;
  v39 = *(_DWORD *)&v98[4];
  v40 = Buf2;
LABEL_35:
  if ( WORD1(Buf1) )
  {
    LODWORD(v16) = WORD1(Buf2);
  }
  else
  {
    LODWORD(v16) = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v41 = DWORD1(Buf2);
  }
  else
  {
    v41 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v42 = HIWORD(Buf2);
  }
  else
  {
    v42 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v35 )
  {
    v39 = 0;
    *(_DWORD *)&v98[4] = 0;
  }
  if ( !v36 )
  {
    v40 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !(_WORD)v16 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v41 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v42 )
    HIDWORD(Buf1) = 0;
  if ( !v39 )
    *(_DWORD *)&v100[4] = 0;
  if ( !v40 )
    LOWORD(Buf1) = 0;
  v43 = *(_QWORD *)&v100[8] - *(_QWORD *)&v98[8];
  if ( *(_QWORD *)&v100[8] == *(_QWORD *)&v98[8] )
    v43 = *(_QWORD *)&v100[16] - *(_QWORD *)&v98[16];
  if ( v43 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_130;
LABEL_59:
  v44 = v14[8];
  v45 = CoTaskMemAlloc(v44 + 18);
  v46 = v45;
  if ( v45 )
  {
    memcpy_0(v45, v14, v44 + 18);
    DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b = 0;
  }
  else
  {
    DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b = -2147024882;
  }
  pv = v46;
  if ( DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b >= 0 )
  {
LABEL_62:
    v7 = a3;
    v6 = v87;
    v8 = v92;
    v9 = v91;
    goto LABEL_63;
  }
  v75 = (unsigned int)DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b;
  v76 = 6566LL;
LABEL_155:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v76,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v75,
    v81);
  PropVariantClear(pvar);
LABEL_159:
  v58 = pv;
LABEL_86:
  pv = 0LL;
  if ( v58 )
    CoTaskMemFree(v58);
  return (unsigned int)DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b;
}
