/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18001DA40
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800206E0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004B790 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B954 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180074C43 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800DE350 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x1801194E8 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801195B8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18011C300 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall DerivePeriodicityForStream(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct tWAVEFORMATEX *a7,
        struct _GUID *a8,
        struct _GUID *a9,
        struct _GUID *a10,
        bool a11,
        bool a12,
        __int64 a13,
        __int64 a14,
        struct IProcessSubmixProxy *a15,
        __int64 *a16,
        __int64 *a17)
{
  __int64 v18; // rbx
  GUID v19; // xmm0
  __int64 v20; // rax
  int v21; // r10d
  int v22; // r9d
  LPVOID v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rax
  int v26; // r8d
  _DWORD *v27; // rax
  int v28; // r10d
  char *i; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  signed int v32; // eax
  __int64 v33; // r14
  unsigned __int16 **v34; // rdi
  unsigned __int16 *v35; // rcx
  WORD cbSize; // ax
  int v37; // r10d
  __int16 v38; // r11
  unsigned __int16 v39; // ax
  int v40; // r9d
  __int16 v41; // si
  __int16 v42; // ax
  int v43; // ecx
  __int64 v44; // rax
  signed int v45; // ebx
  unsigned int v46; // r14d
  unsigned int v47; // esi
  unsigned int v48; // edi
  _QWORD *v49; // rsi
  __int64 v51; // r11
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  int Key; // eax
  unsigned int v55; // edx
  __int64 v56; // r11
  __int64 v57; // rax
  __int64 v58; // rax
  WORD nChannels; // r8
  WORD wBitsPerSample; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int16 v63; // r8
  unsigned __int16 v64; // r9
  __int64 v65; // r8
  __int64 nSamplesPerSec; // r9
  unsigned int v67; // r12d
  __int64 v68; // rdx
  unsigned int v69; // r8d
  unsigned int v70; // edx
  unsigned int v71; // r8d
  unsigned int v72; // r12d
  unsigned int v73; // edx
  unsigned int v74; // r8d
  unsigned int v75; // edx
  unsigned int v76; // r8d
  unsigned int v77; // eax
  unsigned int v78; // r10d
  int v79; // r11d
  double v80; // xmm4_8
  unsigned int v81; // ecx
  struct _GUID *v82; // r12
  struct CEndpointCharacteristics *v83; // r13
  int MixFormat; // edi
  void *v85; // rdx
  struct _GUID *v86; // r14
  void *v87; // rdx
  void *v88; // rdx
  void *v89; // rdx
  void *v90; // rdx
  __int64 v91; // rdx
  int SharedModeEnginePeriodicity; // eax
  unsigned __int64 v93; // r9
  __int64 v94; // r8
  void *v95; // rcx
  void *v96; // rcx
  void *v97; // rcx
  void *v98; // rcx
  struct tWAVEFORMATEX *v99; // rcx
  void *v100; // rcx
  void *v101; // rcx
  void *v102; // rcx
  void *v103; // rcx
  struct tWAVEFORMATEX *v104; // rcx
  __int64 v105; // rax
  int pdwType; // [rsp+20h] [rbp-E0h]
  int pdwTypea; // [rsp+20h] [rbp-E0h]
  int pvData; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v109; // [rsp+78h] [rbp-88h] BYREF
  DWORD pcbData[2]; // [rsp+80h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v112; // [rsp+90h] [rbp-70h] BYREF
  char v113; // [rsp+A0h] [rbp-60h]
  struct _GUID v114; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID *v115; // [rsp+C0h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v116; // [rsp+C8h] [rbp-38h] BYREF
  char v117; // [rsp+D0h] [rbp-30h]
  struct tWAVEFORMATEX *v118; // [rsp+D8h] [rbp-28h]
  struct IAudioStreamInfo *v119; // [rsp+E0h] [rbp-20h]
  struct _GUID v120; // [rsp+F0h] [rbp-10h] BYREF
  struct _GUID v121; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v122; // [rsp+110h] [rbp+10h]
  LPVOID v123[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 Buf1; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v125[24]; // [rsp+140h] [rbp+40h]
  __int128 Buf2; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v127[24]; // [rsp+168h] [rbp+68h]
  LPVOID v128[2]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v119 = a3;
  v118 = a2;
  *(_QWORD *)&v120.Data1 = a1;
  *(_QWORD *)&v121.Data1 = a8;
  *(_QWORD *)&v112.Data1 = a9;
  *(_QWORD *)&v114.Data1 = a10;
  v109 = a16;
  v122 = a17;
  pvData = 0;
  *a16 = a14;
  if ( a5 )
    return 0LL;
  if ( (a4 & 0x20000) != 0 && a15 )
  {
    v123[0] = 0LL;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *, LPVOID *))(*(_QWORD *)a15 + 80LL))(a15, v123);
    *(_QWORD *)v109 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v123[0] + 104LL))(v123[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v123);
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !a14 )
      *a16 = a13;
    return 0LL;
  }
  v18 = 224LL;
  if ( a6 == eKeywordDetectorConnector )
    v18 = 232LL;
  v19 = *a8;
  *(struct _GUID *)v123 = *a8;
  if ( (unsigned __int64)(int)a6 >= *((_QWORD *)a1 + 215) )
  {
    v105 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)&v115,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    pvData = 1;
    gsl::details::throw_exception<gsl::fail_fast>(v105);
  }
  v20 = *((_QWORD *)a1 + 216);
  v21 = 0;
  v22 = *(_DWORD *)(v20 + 24LL * (int)a6 + 16);
  if ( v22 > 0 )
  {
    v51 = *(_QWORD *)(v20 + 24LL * (int)a6);
    while ( 1 )
    {
      v52 = *(_QWORD *)(v51 + 16LL * v21) - (unsigned __int64)v123[0];
      if ( !v52 )
        v52 = *(_QWORD *)(v51 + 16LL * v21 + 8) - (unsigned __int64)v123[1];
      if ( !v52 )
        break;
      if ( ++v21 >= v22 )
        goto LABEL_8;
    }
    if ( v21 != -1 )
    {
      *(GUID *)v123 = v19;
      v53 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((char *)a1 + 1720, a6);
      Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(v53, v123);
      if ( Key == -1 )
      {
        v19 = GUID_00000000_0000_0000_0000_000000000000;
      }
      else
      {
        if ( Key < 0 || Key >= *(_DWORD *)(v56 + 16) )
        {
          ATL::_AtlRaiseException(0xC000008C, v55);
          __debugbreak();
        }
        v19 = *(GUID *)(*(_QWORD *)(v56 + 8) + 16LL * Key);
      }
    }
  }
LABEL_8:
  *(GUID *)v128 = v19;
  v23 = *(LPVOID *)&v19.Data1;
  *(GUID *)v123 = v19;
  v24 = *(_QWORD *)v19.Data4;
  v25 = *(_QWORD *)&v19.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v19.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v25 = *(_QWORD *)v19.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v25 )
  {
    *(GUID *)v128 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v24 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v23 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v123[0] = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v26 = 0;
  pvData = 0;
  v27 = *(_DWORD **)((char *)a1 + v18);
  pv = v27;
  v28 = 0;
  for ( i = 0LL; ; i += 8 )
  {
    v128[0] = i;
    if ( v26 >= v27[2] )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x88890008LL,
        pdwType);
      return 2290679816LL;
    }
    if ( (__int64)i < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
      __debugbreak();
    }
    v30 = *(_QWORD *)&i[*(_QWORD *)v27];
    v31 = *(_QWORD *)v30 - (_QWORD)v23;
    if ( *(LPVOID *)v30 == v23 )
      v31 = *(_QWORD *)(v30 + 8) - v24;
    if ( !v31 )
    {
      v32 = 0;
      pcbData[0] = 0;
      if ( *(int *)(v30 + 24) > 0 )
        break;
    }
LABEL_111:
    pvData = ++v26;
    v27 = pv;
  }
  v33 = 0LL;
  while ( 1 )
  {
    if ( v33 < 0 || v32 >= *(_DWORD *)(v30 + 24) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
      __debugbreak();
    }
    v34 = *(unsigned __int16 ***)(v33 + *(_QWORD *)(v30 + 16));
    v35 = *v34;
    if ( !a7 )
      break;
    if ( v35 )
    {
      LODWORD(i) = a7->wFormatTag;
      cbSize = a7->cbSize;
      if ( (_WORD)i == 0xFFFE )
      {
        if ( cbSize != 22 )
        {
          v57 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          if ( !v57 )
            v57 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( v57 )
          {
            v58 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2)
                - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v58 )
              v58 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( v58 )
              goto LABEL_109;
          }
        }
        Buf1 = *(_OWORD *)&a7->wFormatTag;
        *(_OWORD *)v125 = *(_OWORD *)&a7->cbSize;
        *(_QWORD *)&v125[16] = *(_QWORD *)&a7[1].wBitsPerSample;
        *(_WORD *)v125 = 22;
        v37 = *(_DWORD *)&v125[4];
        v38 = Buf1;
      }
      else
      {
        if ( cbSize && (((_WORD)i - 1) & 0xFFFD) != 0 )
          goto LABEL_109;
        nChannels = a7->nChannels;
        if ( (unsigned __int16)(nChannels - 1) > 1u )
          goto LABEL_109;
        wBitsPerSample = a7->wBitsPerSample;
        if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
          goto LABEL_109;
        Buf1 = *(_OWORD *)&a7->wFormatTag;
        v38 = -2;
        LOWORD(Buf1) = -2;
        *(_WORD *)v125 = 22;
        *(_WORD *)&v125[2] = wBitsPerSample;
        *(GUID *)&v125[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v125[8] = (_DWORD)i;
        LOBYTE(v28) = nChannels == 1;
        v37 = v28 + 3;
        *(_DWORD *)&v125[4] = v37;
      }
      LODWORD(i) = *v35;
      v39 = v35[8];
      if ( (_WORD)i == 0xFFFE )
      {
        if ( v39 == 22 )
          goto LABEL_29;
        v61 = *((_QWORD *)v35 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v61 )
          v61 = *((_QWORD *)v35 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( !v61 )
          goto LABEL_29;
        v62 = *((_QWORD *)v35 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        if ( !v62 )
          v62 = *((_QWORD *)v35 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( !v62 )
        {
LABEL_29:
          Buf2 = *(_OWORD *)v35;
          *(_OWORD *)v127 = *((_OWORD *)v35 + 1);
          *(_QWORD *)&v127[16] = *((_QWORD *)v35 + 4);
          *(_WORD *)v127 = 22;
          v40 = *(_DWORD *)&v127[4];
          v41 = Buf2;
          v42 = 0;
          goto LABEL_30;
        }
LABEL_96:
        v28 = 0;
        goto LABEL_109;
      }
      if ( v39 && (((_WORD)i - 1) & 0xFFFD) != 0 )
      {
        v28 = 0;
        goto LABEL_109;
      }
      v63 = v35[1];
      if ( (unsigned __int16)(v63 - 1) > 1u )
        goto LABEL_96;
      v64 = v35[7];
      v41 = -2;
      if ( ((v64 - 8) & 0xFFE7) == 0 )
      {
        Buf2 = *(_OWORD *)v35;
        LOWORD(Buf2) = -2;
        *(_WORD *)v127 = 22;
        *(_WORD *)&v127[2] = v64;
        *(GUID *)&v127[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v127[8] = (_DWORD)i;
        v42 = 0;
        v40 = (v63 == 1) + 3;
        *(_DWORD *)&v127[4] = v40;
LABEL_30:
        if ( WORD1(Buf1) )
        {
          LODWORD(i) = WORD1(Buf2);
        }
        else
        {
          LODWORD(i) = 0;
          WORD1(Buf2) = 0;
          DWORD2(Buf2) = 0;
          WORD6(Buf2) = 0;
        }
        if ( DWORD1(Buf1) )
        {
          v43 = DWORD1(Buf2);
        }
        else
        {
          v43 = 0;
          *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
        }
        if ( HIWORD(Buf1) )
          v42 = HIWORD(Buf2);
        else
          HIDWORD(Buf2) = 0;
        if ( v37 )
        {
          v28 = 0;
        }
        else
        {
          v28 = 0;
          v40 = 0;
          *(_DWORD *)&v127[4] = 0;
        }
        if ( !v38 )
        {
          v41 = 0;
          LOWORD(Buf2) = 0;
        }
        if ( !(_WORD)i )
        {
          WORD1(Buf1) = 0;
          DWORD2(Buf1) = 0;
          WORD6(Buf1) = 0;
        }
        if ( !v43 )
          *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
        if ( !v42 )
          HIDWORD(Buf1) = 0;
        if ( !v40 )
          *(_DWORD *)&v125[4] = 0;
        if ( !v41 )
          LOWORD(Buf1) = 0;
        v44 = *(_QWORD *)&v125[8] - *(_QWORD *)&v127[8];
        if ( *(_QWORD *)&v125[8] == *(_QWORD *)&v127[8] )
          v44 = *(_QWORD *)&v125[16] - *(_QWORD *)&v127[16];
        if ( !v44 )
        {
          if ( !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
            goto LABEL_54;
          v28 = 0;
        }
        goto LABEL_109;
      }
      v28 = 0;
    }
LABEL_109:
    v32 = pcbData[0] + 1;
    pcbData[0] = v32;
    v33 += 8LL;
    if ( v32 >= *(_DWORD *)(v30 + 24) )
    {
      v23 = v123[0];
      i = (char *)v128[0];
      v26 = pvData;
      goto LABEL_111;
    }
  }
  if ( v35 )
    goto LABEL_109;
LABEL_54:
  v45 = *((_DWORD *)v34 + 3);
  v46 = *((_DWORD *)v34 + 2);
  v47 = *((_DWORD *)v34 + 4);
  if ( a11 )
    v48 = *((_DWORD *)v34 + 6);
  else
    v48 = *((_DWORD *)v34 + 5);
  if ( !a14 )
  {
    v49 = v109;
    *(_QWORD *)v109 = (unsigned int)(int)((double)v45 * 10000000.0 / (double)(int)a7->nSamplesPerSec + 0.5);
    goto LABEL_58;
  }
  pvData = 0;
  pcbData[0] = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    pcbData);
  nSamplesPerSec = a7->nSamplesPerSec;
  v67 = (int)((double)(int)a14 * (double)(int)nSamplesPerSec / 10000000.0 + 0.5);
  if ( pvData )
  {
    v49 = v109;
    goto LABEL_58;
  }
  if ( v67 >= v47 && v67 <= v48 )
  {
    v68 = v67 % v46;
    if ( !(v67 % v46) || v67 == v45 || v67 == v47 || v67 == v48 )
    {
      v49 = v109;
      goto LABEL_137;
    }
  }
  v69 = v118->nSamplesPerSec;
  if ( v69 == (_DWORD)nSamplesPerSec )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwType);
    return 2290679840LL;
  }
  TranslateFrameCountBetweenSamplingRates(v45, nSamplesPerSec, v69);
  v72 = TranslateFrameCountBetweenSamplingRates(v46, v70, v71);
  TranslateFrameCountBetweenSamplingRates(v47, v73, v74);
  v77 = TranslateFrameCountBetweenSamplingRates(v48, v75, v76);
  nSamplesPerSec = v77;
  v81 = (int)((double)(int)v65 * (double)(int)a14 / 10000000.0 + 0.5);
  if ( v81 < v78 || v81 > v77 )
    goto LABEL_140;
  v68 = v81 % v72;
  if ( !(v81 % v72) )
    goto LABEL_128;
  if ( v81 == v79 )
    goto LABEL_131;
  if ( v81 != v78 && v81 != v77 )
  {
LABEL_140:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4BE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwType);
    return 2290679840LL;
  }
LABEL_128:
  if ( v81 == v79 )
  {
LABEL_131:
    v67 = v45;
    goto LABEL_135;
  }
  if ( v81 == v78 )
  {
    v67 = v47;
  }
  else if ( v81 == v77 )
  {
    v67 = v48;
  }
  else
  {
    v67 = v46 * (v81 / v72);
  }
LABEL_135:
  v49 = v109;
  *(_QWORD *)v109 = (unsigned int)(int)((double)(int)v67 * 10000000.0 / v80 + 0.5);
LABEL_137:
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *, __int64, __int64, __int64))(*(_QWORD *)v119 + 152LL))(
         v119,
         v68,
         v65,
         nSamplesPerSec)
    && v67 < v45 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4CE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwType);
    return 2290679840LL;
  }
LABEL_58:
  if ( !a12 )
  {
LABEL_59:
    *v122 = (unsigned int)(int)((double)v45 * 10000000.0 / (double)(int)a7->nSamplesPerSec + 0.5);
    return 0LL;
  }
  *(_QWORD *)pcbData = 0LL;
  v109 = 0LL;
  v123[0] = 0LL;
  v128[0] = 0LL;
  pv = 0LL;
  *(_QWORD *)&Buf1 = pcbData;
  *((_QWORD *)&Buf1 + 1) = 0LL;
  v125[0] = 1;
  v82 = *(struct _GUID **)&v112.Data1;
  v112 = *(struct _GUID *)*(_QWORD *)&v112.Data1;
  v83 = *(struct CEndpointCharacteristics **)&v120.Data1;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                *(CEndpointCharacteristics **)&v120.Data1,
                a6,
                &v112,
                (struct tWAVEFORMATEX **)&Buf1 + 1);
  if ( v125[0] )
  {
    v85 = *(void **)Buf1;
    *(_QWORD *)Buf1 = *((_QWORD *)&Buf1 + 1);
    if ( v85 )
      CoTaskMemFree(v85);
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)MixFormat,
      pdwType);
    goto LABEL_168;
  }
  v115 = &v109;
  v116 = 0LL;
  v117 = 1;
  Buf2 = (unsigned __int64)&pv;
  v127[0] = 1;
  *(_QWORD *)&v112.Data1 = v128;
  *(_QWORD *)v112.Data4 = 0LL;
  v113 = 1;
  Buf1 = (unsigned __int64)v123;
  v125[0] = 1;
  v86 = *(struct _GUID **)&v121.Data1;
  v121 = *(struct _GUID *)*(_QWORD *)&v121.Data1;
  v114 = *(struct _GUID *)*(_QWORD *)&v114.Data1;
  v120 = *v82;
  MixFormat = DeriveDeviceGraphFormatsForStream(
                v83,
                0,
                (struct _GUID *)(unsigned int)a6,
                AUDCLNT_SHAREMODE_SHARED,
                0,
                &v120,
                &v114,
                &v121,
                *(struct tWAVEFORMATEX **)pcbData,
                (struct tWAVEFORMATEX **)&Buf1 + 1,
                (struct tWAVEFORMATEX **)v112.Data4,
                (struct tWAVEFORMATEX **)&Buf2 + 1,
                &v116);
  if ( v125[0] )
  {
    v87 = *(void **)Buf1;
    *(_QWORD *)Buf1 = *((_QWORD *)&Buf1 + 1);
    if ( v87 )
      CoTaskMemFree(v87);
  }
  if ( v113 )
  {
    v88 = **(void ***)&v112.Data1;
    **(_QWORD **)&v112.Data1 = *(_QWORD *)v112.Data4;
    if ( v88 )
      CoTaskMemFree(v88);
  }
  if ( v127[0] )
  {
    v89 = *(void **)Buf2;
    *(_QWORD *)Buf2 = *((_QWORD *)&Buf2 + 1);
    if ( v89 )
      CoTaskMemFree(v89);
  }
  if ( v117 )
  {
    v90 = *v115;
    *v115 = v116;
    if ( v90 )
      CoTaskMemFree(v90);
  }
  if ( MixFormat < 0 )
  {
    v91 = 1241LL;
    goto LABEL_166;
  }
  pvData = 0;
  v114 = *v86;
  pdwTypea = 0;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  v83,
                                  (unsigned int)a6,
                                  v109,
                                  &v114);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v94 = (unsigned int)(int)((double)pvData * 10000000.0 / (double)*((int *)v109 + 1) + 0.5);
    if ( *v49 - v94 <= 5 * v94 / 100 )
    {
      v100 = pv;
      pv = 0LL;
      if ( v100 )
        CoTaskMemFree(v100);
      v101 = v128[0];
      v128[0] = 0LL;
      if ( v101 )
        CoTaskMemFree(v101);
      v102 = v123[0];
      v123[0] = 0LL;
      if ( v102 )
        CoTaskMemFree(v102);
      v103 = v109;
      v109 = 0LL;
      if ( v103 )
        CoTaskMemFree(v103);
      v104 = *(struct tWAVEFORMATEX **)pcbData;
      *(_QWORD *)pcbData = 0LL;
      if ( v104 )
        CoTaskMemFree(v104);
      goto LABEL_59;
    }
    MixFormat = -2004287448;
    v91 = 1247LL;
LABEL_166:
    v93 = (unsigned int)MixFormat;
  }
  else
  {
    v93 = (unsigned int)SharedModeEnginePeriodicity;
    v91 = 1244LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v91,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v93,
    pdwTypea);
LABEL_168:
  v95 = pv;
  pv = 0LL;
  if ( v95 )
    CoTaskMemFree(v95);
  v96 = v128[0];
  v128[0] = 0LL;
  if ( v96 )
    CoTaskMemFree(v96);
  v97 = v123[0];
  v123[0] = 0LL;
  if ( v97 )
    CoTaskMemFree(v97);
  v98 = v109;
  v109 = 0LL;
  if ( v98 )
    CoTaskMemFree(v98);
  v99 = *(struct tWAVEFORMATEX **)pcbData;
  *(_QWORD *)pcbData = 0LL;
  if ( v99 )
    CoTaskMemFree(v99);
  return (unsigned int)MixFormat;
}
