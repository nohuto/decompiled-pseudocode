/*
 * XREFs of ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C009E268
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0066264 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009C958 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01F75A0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0062B2C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C009E94C (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C009EBC0 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009EE1C (-CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U3@U3@U3@U2@U2@U2@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@5554445554444444444444555444444444444443544@Z @ 0x1C009EFB4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U3@U3@U3@U2@.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@U1@U1@U2@U2@U?$_tlgWrapperByVal@$07@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@AEBU_tlgWrapperBinary@@3344AEBU?$_tlgWrapperByVal@$07@@6@Z @ 0x1C01F72AC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@U1@U1@U2@U2@U-.c)
 */

void __fastcall CitpPostUpdateUseInfoLog(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  int v2; // esi
  unsigned int v4; // r15d
  unsigned int v5; // eax
  unsigned int v6; // r10d
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r13d
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // esi
  unsigned __int16 v23; // ax
  __int16 v24; // r11
  unsigned __int16 v25; // ax
  int v26; // r9d
  unsigned __int16 v27; // ax
  int v28; // r8d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned __int64 v33; // rdi
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // r8d
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  char v46; // [rsp+198h] [rbp-80h] BYREF
  char v47; // [rsp+199h] [rbp-7Fh] BYREF
  _BYTE v48[2]; // [rsp+19Ah] [rbp-7Eh] BYREF
  int v49; // [rsp+19Ch] [rbp-7Ch] BYREF
  unsigned int v50; // [rsp+1A0h] [rbp-78h] BYREF
  unsigned int v51; // [rsp+1A4h] [rbp-74h] BYREF
  unsigned int v52; // [rsp+1A8h] [rbp-70h] BYREF
  unsigned int v53; // [rsp+1ACh] [rbp-6Ch] BYREF
  unsigned int v54; // [rsp+1B0h] [rbp-68h] BYREF
  __int16 v55; // [rsp+1B4h] [rbp-64h] BYREF
  __int16 v56; // [rsp+1B6h] [rbp-62h] BYREF
  __int16 v57; // [rsp+1B8h] [rbp-60h] BYREF
  __int16 v58; // [rsp+1BAh] [rbp-5Eh] BYREF
  int v59; // [rsp+1BCh] [rbp-5Ch] BYREF
  int v60; // [rsp+1C0h] [rbp-58h] BYREF
  int v61; // [rsp+1C4h] [rbp-54h] BYREF
  int v62; // [rsp+1C8h] [rbp-50h] BYREF
  int v63; // [rsp+1CCh] [rbp-4Ch] BYREF
  unsigned int v64; // [rsp+1D0h] [rbp-48h] BYREF
  unsigned int v65; // [rsp+1D4h] [rbp-44h] BYREF
  unsigned int v66; // [rsp+1D8h] [rbp-40h] BYREF
  unsigned int v67; // [rsp+1DCh] [rbp-3Ch] BYREF
  unsigned int v68; // [rsp+1E0h] [rbp-38h] BYREF
  unsigned int v69; // [rsp+1E4h] [rbp-34h] BYREF
  unsigned int v70; // [rsp+1E8h] [rbp-30h] BYREF
  unsigned int v71; // [rsp+1ECh] [rbp-2Ch] BYREF
  unsigned int v72; // [rsp+1F0h] [rbp-28h] BYREF
  unsigned int v73; // [rsp+1F4h] [rbp-24h] BYREF
  unsigned int v74; // [rsp+1F8h] [rbp-20h] BYREF
  unsigned int v75; // [rsp+1FCh] [rbp-1Ch] BYREF
  int v76; // [rsp+200h] [rbp-18h] BYREF
  int v77; // [rsp+204h] [rbp-14h] BYREF
  int v78; // [rsp+208h] [rbp-10h] BYREF
  int v79; // [rsp+20Ch] [rbp-Ch] BYREF
  int v80; // [rsp+210h] [rbp-8h] BYREF
  int v81; // [rsp+214h] [rbp-4h] BYREF
  int v82; // [rsp+218h] [rbp+0h] BYREF
  int v83; // [rsp+21Ch] [rbp+4h] BYREF
  int v84; // [rsp+220h] [rbp+8h] BYREF
  int v85; // [rsp+224h] [rbp+Ch] BYREF
  int v86; // [rsp+228h] [rbp+10h] BYREF
  int v87; // [rsp+22Ch] [rbp+14h] BYREF
  int v88; // [rsp+230h] [rbp+18h] BYREF
  int v89; // [rsp+234h] [rbp+1Ch] BYREF
  int v90; // [rsp+238h] [rbp+20h] BYREF
  int v91; // [rsp+23Ch] [rbp+24h] BYREF
  int v92; // [rsp+240h] [rbp+28h] BYREF
  int v93; // [rsp+244h] [rbp+2Ch] BYREF
  int v94; // [rsp+248h] [rbp+30h] BYREF
  int v95; // [rsp+24Ch] [rbp+34h] BYREF
  double v96; // [rsp+250h] [rbp+38h] BYREF
  __int64 v97; // [rsp+258h] [rbp+40h] BYREF
  double v98; // [rsp+260h] [rbp+48h] BYREF
  double v99; // [rsp+268h] [rbp+50h] BYREF
  const wchar_t *v100; // [rsp+270h] [rbp+58h] BYREF
  __int16 v101; // [rsp+278h] [rbp+60h]
  _OWORD Data[8]; // [rsp+288h] [rbp+70h] BYREF

  v2 = a2;
  v49 = a2;
  CitUpdateInputTypeCoverage(a1);
  v4 = 0;
  if ( *((_WORD *)a1 + 172) )
  {
    CitpStatIncrement((unsigned __int16 *)a1 + 173, 1);
    memset(Data, 0, 0x78uLL);
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)Data);
    if ( (unsigned int)dword_1C0243250 > 5 && tlgKeywordOn((__int64)&dword_1C0243250, 0x800000000800LL) )
    {
      v5 = *((_DWORD *)a1 + 133);
      if ( HIDWORD(Data[4]) <= v5 )
        v6 = 0;
      else
        v6 = HIDWORD(Data[4]) - v5;
      v7 = *((_DWORD *)a1 + 132);
      if ( DWORD2(Data[4]) <= v7 )
        v8 = 0;
      else
        v8 = DWORD2(Data[4]) - v7;
      v9 = *((_DWORD *)a1 + 131);
      if ( DWORD1(Data[4]) <= v9 )
        v10 = 0;
      else
        v10 = DWORD1(Data[4]) - v9;
      v11 = *((_DWORD *)a1 + 129);
      if ( HIDWORD(Data[3]) > v11 )
        v12 = HIDWORD(Data[3]) - v11;
      else
        v12 = 0;
      v13 = *((_DWORD *)a1 + 127);
      if ( DWORD1(Data[3]) > v13 )
        v54 = DWORD1(Data[3]) - v13;
      else
        v54 = 0;
      v14 = *((_DWORD *)a1 + 126);
      if ( LODWORD(Data[3]) > v14 )
        v53 = LODWORD(Data[3]) - v14;
      else
        v53 = 0;
      v15 = *((_DWORD *)a1 + 125);
      if ( HIDWORD(Data[2]) <= v15 )
        v52 = 0;
      else
        v52 = HIDWORD(Data[2]) - v15;
      v16 = *((_DWORD *)a1 + 124);
      if ( DWORD2(Data[2]) <= v16 )
        v51 = 0;
      else
        v51 = DWORD2(Data[2]) - v16;
      v17 = *((_DWORD *)a1 + 123);
      if ( DWORD1(Data[2]) <= v17 )
        v50 = 0;
      else
        v50 = DWORD1(Data[2]) - v17;
      v18 = *((_DWORD *)a1 + 119);
      if ( DWORD1(Data[1]) <= v18 )
        v19 = 0;
      else
        v19 = DWORD1(Data[1]) - v18;
      v20 = *((_DWORD *)a1 + 118);
      if ( LODWORD(Data[1]) > v20 )
        v4 = LODWORD(Data[1]) - v20;
      v21 = *((_DWORD *)a1 + 117);
      if ( HIDWORD(Data[0]) <= v21 )
        v22 = 0;
      else
        v22 = HIDWORD(Data[0]) - v21;
      v23 = *((_WORD *)a1 + 232);
      if ( WORD4(Data[0]) <= v23 )
        v24 = 0;
      else
        v24 = WORD4(Data[0]) - v23;
      v25 = *((_WORD *)a1 + 231);
      if ( WORD3(Data[0]) > v25 )
      {
        v26 = WORD3(Data[0]);
        LOWORD(v26) = WORD3(Data[0]) - v25;
      }
      else
      {
        v26 = 0;
      }
      v27 = *((_WORD *)a1 + 230);
      if ( WORD2(Data[0]) > v27 )
      {
        v28 = WORD2(Data[0]);
        LOWORD(v28) = WORD2(Data[0]) - v27;
      }
      else
      {
        v28 = 0;
      }
      v29 = *((_QWORD *)a1 + 67);
      if ( *(_QWORD *)&Data[5] <= v29 )
        v30 = 0LL;
      else
        v30 = *(_QWORD *)&Data[5] - v29;
      if ( v30 >= 0x98968000000000LL )
        LODWORD(v31) = -1;
      else
        v31 = v30 / 0x989680;
      v60 = DWORD2(Data[6]);
      v61 = DWORD1(Data[6]);
      v55 = Data[6];
      v96 = *((double *)&Data[5] + 1);
      v62 = v49;
      v63 = *((_DWORD *)a1 + 54);
      v68 = v54;
      v69 = v53;
      v70 = v52;
      v71 = v51;
      v72 = v50;
      v77 = HIDWORD(Data[4]);
      v78 = DWORD2(Data[4]);
      v79 = DWORD1(Data[4]);
      v80 = Data[4];
      v81 = HIDWORD(Data[3]);
      v82 = DWORD2(Data[3]);
      v83 = DWORD1(Data[3]);
      v84 = Data[3];
      v85 = HIDWORD(Data[2]);
      v86 = DWORD2(Data[2]);
      v87 = DWORD1(Data[2]);
      v88 = Data[2];
      v59 = HIDWORD(Data[1]);
      LOWORD(v50) = WORD4(Data[1]);
      v89 = DWORD1(Data[1]);
      v90 = Data[1];
      v91 = HIDWORD(Data[0]);
      LOWORD(v51) = WORD5(Data[0]);
      LOWORD(v52) = WORD4(Data[0]);
      LOWORD(v53) = WORD3(Data[0]);
      LOWORD(v54) = WORD2(Data[0]);
      v92 = Data[0];
      v64 = v6;
      v65 = v8;
      v66 = v10;
      v67 = v12;
      v73 = v19;
      v74 = v4;
      v75 = v22;
      v56 = v24;
      v57 = v26;
      v58 = v28;
      v76 = v31;
      v97 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v30,
        (unsigned int)&unk_1C021AB2F,
        v28,
        v26,
        (__int64)&v97,
        (__int64)&v92,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v91,
        (__int64)&v90,
        (__int64)&v89,
        (__int64)&v50,
        (__int64)&v59,
        (__int64)&v59 + 2,
        (__int64)&v88,
        (__int64)&v87,
        (__int64)&v86,
        (__int64)&v85,
        (__int64)&v84,
        (__int64)&v83,
        (__int64)&v82,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v62,
        (__int64)&v96,
        (__int64)&v55,
        (__int64)&v61,
        (__int64)&v60);
      v2 = v49;
    }
    v32 = *((_DWORD *)a1 + 118);
    v33 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v34 = v33 - *((_DWORD *)a1 + 207);
    LODWORD(Data[7]) = v34;
    if ( LODWORD(Data[1]) <= v32 )
      v35 = 0;
    else
      v35 = LODWORD(Data[1]) - v32;
    v36 = v35 + HIDWORD(Data[6]);
    HIDWORD(Data[6]) += v35;
    if ( v2 == 2 || v34 >= HIDWORD(xmmword_1C024E474) )
    {
      if ( v36 >= HIDWORD(xmmword_1C024E474) / 0x3E8 )
        HIDWORD(Data[6]) = HIDWORD(xmmword_1C024E474) / 0x3E8 - 1;
      if ( (unsigned int)dword_1C0243418 > 5 && tlgKeywordOn((__int64)&dword_1C0243418, 0x400000000000LL) )
      {
        v97 = *(_QWORD *)&DOUBLE_N1_0;
        v98 = DOUBLE_N1_0;
        v96 = DOUBLE_N1_0;
        v99 = DOUBLE_N1_0;
        v100 = L"Value";
        v101 = 10;
        v46 = 4;
        v47 = 0;
        v49 = v45;
        v93 = v44;
        v48[0] = 0;
        v94 = 1;
        v95 = 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v43,
          (unsigned int)&unk_1C021AA9F,
          v44,
          v45,
          (__int64)&v95,
          (__int64)&v94,
          (__int64)v48,
          (__int64)&v100,
          (__int64)&v93,
          (__int64)&v49,
          (__int64)&v47,
          (__int64)&v46,
          (__int64)&v99,
          (__int64)&v98);
      }
      *(_QWORD *)((char *)&Data[6] + 12) = 0LL;
      *((_DWORD *)a1 + 207) = v33;
    }
    CitpPostUpdateUseInfoSave(a1, Data);
    v37 = Data[1];
    *(_OWORD *)((char *)a1 + 456) = Data[0];
    v38 = Data[2];
    *(_OWORD *)((char *)a1 + 472) = v37;
    v39 = Data[3];
    *(_OWORD *)((char *)a1 + 488) = v38;
    v40 = Data[4];
    *(_OWORD *)((char *)a1 + 504) = v39;
    v41 = Data[5];
    *(_OWORD *)((char *)a1 + 520) = v40;
    v42 = Data[6];
    *(_OWORD *)((char *)a1 + 536) = v41;
    *(_QWORD *)&v41 = *(_QWORD *)&Data[7];
    *(_OWORD *)((char *)a1 + 552) = v42;
    *((_QWORD *)a1 + 71) = v41;
  }
}
