/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48___ @ 0x180116668
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18011AB24 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E6B0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001FEC0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180047550 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180048090 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180117EE4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 *     _lambda_f36e01949351335f5e9acafaa1161a48_::operator() @ 0x180119A5C (_lambda_f36e01949351335f5e9acafaa1161a48_--operator().c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48___(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        size_t Size,
        unsigned int *a4,
        _OWORD *a5,
        __int128 *a6)
{
  size_t v6; // r15
  int v9; // r12d
  char *v10; // rdi
  __int128 v11; // xmm7
  __int128 v12; // xmm8
  __int128 v13; // xmm9
  __int128 v14; // xmm10
  __int64 v15; // xmm6_8
  int ProposedConnectorFormatForProcessingMode; // eax
  void *v17; // rbx
  __int64 v18; // rsi
  void *v19; // rcx
  int v20; // eax
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  int i; // ebx
  __int64 v24; // rsi
  unsigned int *v25; // rax
  char v26; // r10
  bool *v27; // rdx
  size_t v28; // r9
  unsigned int *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  bool v32; // al
  __int64 v33; // rdx
  char *v34; // rcx
  unsigned int v35; // r11d
  unsigned int *v36; // rax
  char v37; // r10
  char *v38; // rdx
  size_t v39; // r9
  unsigned int *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r14d
  char *v44; // rax
  int *v45; // r14
  unsigned int v46; // eax
  unsigned int *v47; // rcx
  char v48; // r11
  _BYTE *v49; // r8
  size_t v50; // r10
  unsigned int *v51; // r9
  __int64 v52; // rdx
  int v53; // edx
  int v54; // r8d
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C8h]
  int v58; // [rsp+48h] [rbp-C0h]
  unsigned int v59; // [rsp+4Ch] [rbp-BCh]
  unsigned int *v60; // [rsp+50h] [rbp-B8h]
  _QWORD pvar[3]; // [rsp+58h] [rbp-B0h] BYREF
  const struct tWAVEFORMATEX *v62[3]; // [rsp+70h] [rbp-98h] BYREF
  char *v63; // [rsp+88h] [rbp-80h]
  unsigned __int64 v64; // [rsp+90h] [rbp-78h]
  __int64 v65; // [rsp+A0h] [rbp-68h]
  __int64 v66; // [rsp+A8h] [rbp-60h]
  __int64 v67[2]; // [rsp+B8h] [rbp-50h] BYREF
  __m256i v68; // [rsp+C8h] [rbp-40h]
  __int128 v69; // [rsp+E8h] [rbp-20h]
  __int64 v70; // [rsp+F8h] [rbp-10h]
  _DWORD v71[14]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v72[2]; // [rsp+140h] [rbp+38h] BYREF
  int v73; // [rsp+160h] [rbp+58h]
  int v74; // [rsp+164h] [rbp+5Ch]
  _DWORD v75[2]; // [rsp+168h] [rbp+60h]
  __int64 v76; // [rsp+170h] [rbp+68h]
  __int128 v77; // [rsp+178h] [rbp+70h]
  __int128 v78; // [rsp+188h] [rbp+80h]
  int v79; // [rsp+198h] [rbp+90h]
  __int64 v80; // [rsp+1A0h] [rbp+98h]
  __int128 v81; // [rsp+1A8h] [rbp+A0h]
  int v82; // [rsp+1B8h] [rbp+B0h]
  __int64 v83; // [rsp+1C0h] [rbp+B8h]
  __int128 v84; // [rsp+1C8h] [rbp+C0h]
  int v85; // [rsp+1D8h] [rbp+D0h]
  __int64 v86; // [rsp+1E0h] [rbp+D8h]
  __int128 v87; // [rsp+1E8h] [rbp+E0h]

  v60 = a4;
  v6 = (unsigned int)Size;
  v57 = (__int64)a6;
  v65 = 0LL;
  v66 = 0LL;
  v9 = 0;
  *(_OWORD *)&pvar[1] = 0LL;
  v62[0] = 0LL;
  v71[0] = 8000;
  v71[1] = 11025;
  v71[2] = 16000;
  v71[3] = 22050;
  v71[4] = 24000;
  v71[5] = 32000;
  v71[6] = 44100;
  v71[7] = 48000;
  v71[8] = 88200;
  v71[9] = 96000;
  v71[10] = 176400;
  v71[11] = 192000;
  v71[12] = 352800;
  v71[13] = 384000;
  v72[0] = _mm_load_si128((const __m128i *)&_xmm);
  v72[1] = _mm_load_si128((const __m128i *)&_xmm);
  v73 = 32;
  v74 = 32;
  v75[0] = 0;
  v76 = 0LL;
  v77 = unk_1801567A0;
  v78 = unk_1801567B0;
  v79 = 0;
  v80 = 0LL;
  v81 = unk_180156780;
  v82 = 0;
  v83 = 0LL;
  v84 = unk_180156790;
  v85 = 0;
  v86 = 0LL;
  v87 = unk_180156770;
  v10 = 0LL;
  v63 = 0LL;
  v11 = *a6;
  v12 = a6[1];
  v13 = a6[2];
  v14 = a6[3];
  v15 = *((_QWORD *)a6 + 8);
  CEndpointCharacteristics::HasHardwareAudioEngine(this);
  pv = 0LL;
  *(_OWORD *)v67 = v11;
  *(_OWORD *)v68.m256i_i8 = v12;
  *(_OWORD *)&v68.m256i_u64[2] = v13;
  v69 = v14;
  v70 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___(
    this,
    (__int64)v67,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)v67 = v11;
  *(_OWORD *)v68.m256i_i8 = v12;
  *(_OWORD *)&v68.m256i_u64[2] = v13;
  v69 = v14;
  v70 = v15;
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___(
    this,
    (__int64)v67,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)&v62[1] = *a5;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               a2,
                                               (struct _GUID *)&v62[1],
                                               (struct tWAVEFORMATEX **)&pv);
  v17 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0
    && *((_WORD *)pv + 7)
    && *((_DWORD *)pv + 2)
    && *((_WORD *)pv + 6)
    && *((_WORD *)pv + 1) )
  {
    v18 = v57;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = lambda_f36e01949351335f5e9acafaa1161a48_::operator()(v57, pv, 0LL);
      if ( v9 < 0 )
      {
        v19 = v17;
LABEL_9:
        CoTaskMemFree(v19);
        goto LABEL_80;
      }
    }
  }
  else
  {
    v18 = v57;
  }
  CoTaskMemFree(v17);
  v62[1] = 0LL;
  v20 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, _QWORD *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &PKEY_AudioEngine_DeviceFormat,
          &pvar[1]);
  v21 = 0LL;
  if ( v20 >= 0 && LOWORD(pvar[1]) == 65 && IsValidWfxBlob((struct tagPROPVARIANT *)&pvar[1]) )
  {
    v9 = ValidateWaveFormatEx(v62[0]);
    if ( v9 >= 0 )
    {
      v9 = lambda_f36e01949351335f5e9acafaa1161a48_::operator()(v18, v62[0], 0LL);
      if ( v9 < 0 )
      {
        v19 = 0LL;
        goto LABEL_9;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar[1]);
  CoTaskMemFree(0LL);
  v22 = (unsigned int)(3 * v6);
  v62[1] = (const struct tWAVEFORMATEX *)v22;
  v10 = (char *)operator new[](v22, (const struct std::nothrow_t *)&std::nothrow);
  v63 = v10;
  if ( v10 )
  {
    for ( i = 0; (unsigned int)i < 9; ++i )
    {
      v64 = 16LL * i;
      v24 = (int)v75[v64 / 4];
      if ( (_DWORD)v24 )
      {
        memset_0(v10, 1, v22);
        v25 = v60;
        v26 = 0;
        if ( !(_DWORD)v6 )
          goto LABEL_35;
        v27 = (bool *)v10;
        v28 = v6;
        do
        {
          v29 = (unsigned int *)((char *)v25 + *v25);
          if ( *v27 )
          {
            v30 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v25 + 2);
            if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v25 + 2) )
              v30 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v25 + 3);
            if ( v30 )
              goto LABEL_32;
            v31 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v25 + 4);
            if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v25 + 4) )
              v31 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v25 + 5);
            if ( v31 )
            {
LABEL_32:
              *v27 = 0;
            }
            else
            {
              v32 = i <= v25[16];
              *v27 = v32;
              if ( v32 )
                v26 = 1;
            }
          }
          ++v27;
          v25 = v29;
          --v28;
        }
        while ( v28 );
        if ( v26 )
        {
LABEL_35:
          LODWORD(v33) = 0;
          if ( (int)v24 > 0 )
          {
            v34 = &v10[v6];
            while ( 2 )
            {
              v58 = v33;
              pv = v71;
              do
              {
                memcpy_0(v34, v10, v6);
                v35 = *(_DWORD *)pv;
                v36 = v60;
                v37 = 0;
                if ( !(_DWORD)v6 )
                  goto LABEL_53;
                v38 = &v10[v6];
                v39 = v6;
                do
                {
                  v40 = (unsigned int *)((char *)v36 + *v36);
                  if ( *v38 )
                  {
                    v41 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v36 + 2);
                    if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v36 + 2) )
                      v41 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v36 + 3);
                    if ( v41 )
                      goto LABEL_50;
                    v42 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v36 + 4);
                    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v36 + 4) )
                      v42 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v36 + 5);
                    if ( v42 || v35 < v36[19] || v35 > v36[20] )
                    {
LABEL_50:
                      *v38 = 0;
                    }
                    else
                    {
                      *v38 = 1;
                      v37 = 1;
                    }
                  }
                  ++v38;
                  v36 = v40;
                  --v39;
                }
                while ( v39 );
                v43 = v58;
                LODWORD(v33) = 0;
                if ( v37 )
                {
LABEL_53:
                  v59 = 0;
                  v44 = &v10[(unsigned int)(2 * v6)];
                  pvar[0] = v44;
                  v45 = (int *)v72 + 1;
                  while ( 1 )
                  {
                    memcpy_0(v44, &v10[v6], v6);
                    v46 = *(v45 - 1);
                    v47 = v60;
                    LODWORD(v33) = 0;
                    v48 = 0;
                    if ( !(_DWORD)v6 )
                      goto LABEL_83;
                    v49 = (_BYTE *)pvar[0];
                    v50 = v6;
                    do
                    {
                      v51 = (unsigned int *)((char *)v47 + *v47);
                      if ( *v49 != (_BYTE)v33 )
                      {
                        v52 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v47 + 2);
                        if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v47 + 2) )
                          v52 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v47 + 3);
                        if ( v52 )
                          goto LABEL_66;
                        v33 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v47 + 4);
                        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v47 + 4) )
                          v33 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v47 + 5);
                        if ( v33 || v46 < v47[17] || v46 > v47[18] )
                        {
LABEL_66:
                          LODWORD(v33) = 0;
                          *v49 = 0;
                        }
                        else
                        {
                          *v49 = 1;
                          v48 = 1;
                        }
                      }
                      ++v49;
                      v47 = v51;
                      --v50;
                    }
                    while ( v50 );
                    if ( v48 )
                    {
LABEL_83:
                      v53 = *(_DWORD *)(*(__int64 *)((char *)&v76 + v64) + 4 * v21);
                      v54 = *v45;
                      if ( !v53 && i <= 2 )
                        v53 = 4 - (i != 1);
                      v68.m256i_i16[1] = v46;
                      v68.m256i_i32[1] = v53;
                      *(GUID *)&v68.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
                      LOWORD(v67[0]) = -2;
                      HIWORD(v67[1]) = v54;
                      v68.m256i_i16[0] = 22;
                      WORD1(v67[0]) = i;
                      HIDWORD(v67[0]) = *(_DWORD *)pv;
                      WORD2(v67[1]) = i * ((unsigned __int16)v54 >> 3);
                      LODWORD(v67[1]) = HIDWORD(v67[0]) * WORD2(v67[1]);
                      v9 = lambda_f36e01949351335f5e9acafaa1161a48_::operator()(v57, v67, 0LL);
                      LODWORD(v33) = 0;
                      if ( v9 < 0 )
                        goto LABEL_80;
                    }
                    ++v59;
                    v45 += 2;
                    v44 = (char *)pvar[0];
                    if ( v59 >= 5 )
                    {
                      v43 = v58;
                      break;
                    }
                  }
                }
                v58 = v43 + 1;
                pv = (char *)pv + 4;
                v34 = &v10[v6];
              }
              while ( (unsigned int)(v43 + 1) < 0xE );
              ++v21;
              v34 = &v10[v6];
              if ( v21 < v24 )
                continue;
              break;
            }
            v22 = (unsigned __int64)v62[1];
          }
          v21 = 0LL;
        }
      }
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_80:
  PropVariantClear((PROPVARIANT *)&pvar[1]);
  operator delete(v10, (const struct std::nothrow_t *)1);
  return (unsigned int)v9;
}
