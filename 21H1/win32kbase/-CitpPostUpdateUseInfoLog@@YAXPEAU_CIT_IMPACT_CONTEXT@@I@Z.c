/*
 * XREFs of ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0025560
 * Callers:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0023C50 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00275DC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01FE8DC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0025C44 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0025EB8 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0026114 (-CitUpdateInputTypeCoverage@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U3@U3@U3@U2@U2@U2@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U3@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@5554445554444444444444555444444444444443544@Z @ 0x1C00262AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U3@U3@U3@U2@.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C006B36C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@U1@U1@U2@U2@U?$_tlgWrapperByVal@$07@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@AEBU_tlgWrapperBinary@@3344AEBU?$_tlgWrapperByVal@$07@@6@Z @ 0x1C01FE5E8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@U1@U1@U2@U2@U-.c)
 */

void __fastcall CitpPostUpdateUseInfoLog(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  int v2; // esi
  unsigned int v4; // r15d
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // r14d
  unsigned int v13; // eax
  unsigned int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // r13d
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // esi
  unsigned __int16 v25; // ax
  __int16 v26; // r11
  unsigned __int16 v27; // ax
  int v28; // r9d
  unsigned __int16 v29; // ax
  int v30; // r8d
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned int v34; // eax
  unsigned __int64 v35; // rdi
  unsigned int v36; // edx
  unsigned int v37; // ecx
  __int64 v38; // r8
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 v45; // r9
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  char v49; // [rsp+198h] [rbp-80h] BYREF
  char v50; // [rsp+199h] [rbp-7Fh] BYREF
  _BYTE v51[2]; // [rsp+19Ah] [rbp-7Eh] BYREF
  int v52; // [rsp+19Ch] [rbp-7Ch] BYREF
  unsigned int v53; // [rsp+1A0h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+1A4h] [rbp-74h] BYREF
  unsigned int v55; // [rsp+1A8h] [rbp-70h] BYREF
  unsigned int v56; // [rsp+1ACh] [rbp-6Ch] BYREF
  unsigned int v57; // [rsp+1B0h] [rbp-68h] BYREF
  __int16 v58; // [rsp+1B4h] [rbp-64h] BYREF
  __int16 v59; // [rsp+1B6h] [rbp-62h] BYREF
  __int16 v60; // [rsp+1B8h] [rbp-60h] BYREF
  __int16 v61; // [rsp+1BAh] [rbp-5Eh] BYREF
  int v62; // [rsp+1BCh] [rbp-5Ch] BYREF
  int v63; // [rsp+1C0h] [rbp-58h] BYREF
  int v64; // [rsp+1C4h] [rbp-54h] BYREF
  int v65; // [rsp+1C8h] [rbp-50h] BYREF
  int v66; // [rsp+1CCh] [rbp-4Ch] BYREF
  unsigned int v67; // [rsp+1D0h] [rbp-48h] BYREF
  unsigned int v68; // [rsp+1D4h] [rbp-44h] BYREF
  unsigned int v69; // [rsp+1D8h] [rbp-40h] BYREF
  unsigned int v70; // [rsp+1DCh] [rbp-3Ch] BYREF
  unsigned int v71; // [rsp+1E0h] [rbp-38h] BYREF
  unsigned int v72; // [rsp+1E4h] [rbp-34h] BYREF
  unsigned int v73; // [rsp+1E8h] [rbp-30h] BYREF
  unsigned int v74; // [rsp+1ECh] [rbp-2Ch] BYREF
  unsigned int v75; // [rsp+1F0h] [rbp-28h] BYREF
  unsigned int v76; // [rsp+1F4h] [rbp-24h] BYREF
  unsigned int v77; // [rsp+1F8h] [rbp-20h] BYREF
  unsigned int v78; // [rsp+1FCh] [rbp-1Ch] BYREF
  int v79; // [rsp+200h] [rbp-18h] BYREF
  int v80; // [rsp+204h] [rbp-14h] BYREF
  int v81; // [rsp+208h] [rbp-10h] BYREF
  int v82; // [rsp+20Ch] [rbp-Ch] BYREF
  int v83; // [rsp+210h] [rbp-8h] BYREF
  int v84; // [rsp+214h] [rbp-4h] BYREF
  int v85; // [rsp+218h] [rbp+0h] BYREF
  int v86; // [rsp+21Ch] [rbp+4h] BYREF
  int v87; // [rsp+220h] [rbp+8h] BYREF
  int v88; // [rsp+224h] [rbp+Ch] BYREF
  int v89; // [rsp+228h] [rbp+10h] BYREF
  int v90; // [rsp+22Ch] [rbp+14h] BYREF
  int v91; // [rsp+230h] [rbp+18h] BYREF
  int v92; // [rsp+234h] [rbp+1Ch] BYREF
  int v93; // [rsp+238h] [rbp+20h] BYREF
  int v94; // [rsp+23Ch] [rbp+24h] BYREF
  int v95; // [rsp+240h] [rbp+28h] BYREF
  int v96; // [rsp+244h] [rbp+2Ch] BYREF
  int v97; // [rsp+248h] [rbp+30h] BYREF
  int v98; // [rsp+24Ch] [rbp+34h] BYREF
  double v99; // [rsp+250h] [rbp+38h] BYREF
  __int64 v100; // [rsp+258h] [rbp+40h] BYREF
  double v101; // [rsp+260h] [rbp+48h] BYREF
  double v102; // [rsp+268h] [rbp+50h] BYREF
  const wchar_t *v103; // [rsp+270h] [rbp+58h] BYREF
  __int16 v104; // [rsp+278h] [rbp+60h]
  _OWORD Data[8]; // [rsp+288h] [rbp+70h] BYREF

  v2 = a2;
  v52 = a2;
  CitUpdateInputTypeCoverage(a1);
  v4 = 0;
  if ( *((_WORD *)a1 + 172) )
  {
    CitpStatIncrement((unsigned __int16 *)a1 + 173, 1u);
    memset(Data, 0, 0x78uLL);
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)Data);
    if ( (unsigned int)dword_1C024B250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C024B250, 0x800000000800LL, v5, v6) )
    {
      v7 = *((_DWORD *)a1 + 133);
      if ( HIDWORD(Data[4]) <= v7 )
        v8 = 0;
      else
        v8 = HIDWORD(Data[4]) - v7;
      v9 = *((_DWORD *)a1 + 132);
      if ( DWORD2(Data[4]) <= v9 )
        v10 = 0;
      else
        v10 = DWORD2(Data[4]) - v9;
      v11 = *((_DWORD *)a1 + 131);
      if ( DWORD1(Data[4]) <= v11 )
        v12 = 0;
      else
        v12 = DWORD1(Data[4]) - v11;
      v13 = *((_DWORD *)a1 + 129);
      if ( HIDWORD(Data[3]) > v13 )
        v14 = HIDWORD(Data[3]) - v13;
      else
        v14 = 0;
      v15 = *((_DWORD *)a1 + 127);
      if ( DWORD1(Data[3]) > v15 )
        v57 = DWORD1(Data[3]) - v15;
      else
        v57 = 0;
      v16 = *((_DWORD *)a1 + 126);
      if ( LODWORD(Data[3]) > v16 )
        v56 = LODWORD(Data[3]) - v16;
      else
        v56 = 0;
      v17 = *((_DWORD *)a1 + 125);
      if ( HIDWORD(Data[2]) <= v17 )
        v55 = 0;
      else
        v55 = HIDWORD(Data[2]) - v17;
      v18 = *((_DWORD *)a1 + 124);
      if ( DWORD2(Data[2]) <= v18 )
        v54 = 0;
      else
        v54 = DWORD2(Data[2]) - v18;
      v19 = *((_DWORD *)a1 + 123);
      if ( DWORD1(Data[2]) <= v19 )
        v53 = 0;
      else
        v53 = DWORD1(Data[2]) - v19;
      v20 = *((_DWORD *)a1 + 119);
      if ( DWORD1(Data[1]) <= v20 )
        v21 = 0;
      else
        v21 = DWORD1(Data[1]) - v20;
      v22 = *((_DWORD *)a1 + 118);
      if ( LODWORD(Data[1]) > v22 )
        v4 = LODWORD(Data[1]) - v22;
      v23 = *((_DWORD *)a1 + 117);
      if ( HIDWORD(Data[0]) <= v23 )
        v24 = 0;
      else
        v24 = HIDWORD(Data[0]) - v23;
      v25 = *((_WORD *)a1 + 232);
      if ( WORD4(Data[0]) <= v25 )
        v26 = 0;
      else
        v26 = WORD4(Data[0]) - v25;
      v27 = *((_WORD *)a1 + 231);
      if ( WORD3(Data[0]) > v27 )
      {
        v28 = WORD3(Data[0]);
        LOWORD(v28) = WORD3(Data[0]) - v27;
      }
      else
      {
        v28 = 0;
      }
      v29 = *((_WORD *)a1 + 230);
      if ( WORD2(Data[0]) > v29 )
      {
        v30 = WORD2(Data[0]);
        LOWORD(v30) = WORD2(Data[0]) - v29;
      }
      else
      {
        v30 = 0;
      }
      v31 = *((_QWORD *)a1 + 67);
      if ( *(_QWORD *)&Data[5] <= v31 )
        v32 = 0LL;
      else
        v32 = *(_QWORD *)&Data[5] - v31;
      if ( v32 >= 0x98968000000000LL )
        LODWORD(v33) = -1;
      else
        v33 = v32 / 0x989680;
      v63 = DWORD2(Data[6]);
      v64 = DWORD1(Data[6]);
      v58 = Data[6];
      v99 = *((double *)&Data[5] + 1);
      v65 = v52;
      v66 = *((_DWORD *)a1 + 54);
      v71 = v57;
      v72 = v56;
      v73 = v55;
      v74 = v54;
      v75 = v53;
      v80 = HIDWORD(Data[4]);
      v81 = DWORD2(Data[4]);
      v82 = DWORD1(Data[4]);
      v83 = Data[4];
      v84 = HIDWORD(Data[3]);
      v85 = DWORD2(Data[3]);
      v86 = DWORD1(Data[3]);
      v87 = Data[3];
      v88 = HIDWORD(Data[2]);
      v89 = DWORD2(Data[2]);
      v90 = DWORD1(Data[2]);
      v91 = Data[2];
      v62 = HIDWORD(Data[1]);
      LOWORD(v53) = WORD4(Data[1]);
      v92 = DWORD1(Data[1]);
      v93 = Data[1];
      v94 = HIDWORD(Data[0]);
      LOWORD(v54) = WORD5(Data[0]);
      LOWORD(v55) = WORD4(Data[0]);
      LOWORD(v56) = WORD3(Data[0]);
      LOWORD(v57) = WORD2(Data[0]);
      v95 = Data[0];
      v67 = v8;
      v68 = v10;
      v69 = v12;
      v70 = v14;
      v76 = v21;
      v77 = v4;
      v78 = v24;
      v59 = v26;
      v60 = v28;
      v61 = v30;
      v79 = v33;
      v100 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v32,
        (unsigned int)&unk_1C02224B8,
        v30,
        v28,
        (__int64)&v100,
        (__int64)&v95,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v94,
        (__int64)&v93,
        (__int64)&v92,
        (__int64)&v53,
        (__int64)&v62,
        (__int64)&v62 + 2,
        (__int64)&v91,
        (__int64)&v90,
        (__int64)&v89,
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
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
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
        (__int64)&v99,
        (__int64)&v58,
        (__int64)&v64,
        (__int64)&v63);
      v2 = v52;
    }
    v34 = *((_DWORD *)a1 + 118);
    v35 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v36 = v35 - *((_DWORD *)a1 + 207);
    LODWORD(Data[7]) = v36;
    if ( LODWORD(Data[1]) <= v34 )
      v37 = 0;
    else
      v37 = LODWORD(Data[1]) - v34;
    v38 = v37 + HIDWORD(Data[6]);
    HIDWORD(Data[6]) += v37;
    if ( v2 == 2 || v36 >= HIDWORD(xmmword_1C0256404) )
    {
      v45 = HIDWORD(xmmword_1C0256404) / 0x3E8;
      if ( (unsigned int)v38 >= (unsigned int)v45 )
      {
        v38 = (unsigned int)(v45 - 1);
        HIDWORD(Data[6]) = v45 - 1;
      }
      if ( (unsigned int)dword_1C024B418 > 5 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024B418, 0x400000000000LL, v38, v45) )
        {
          v100 = *(_QWORD *)&DOUBLE_N1_0;
          v101 = DOUBLE_N1_0;
          v99 = DOUBLE_N1_0;
          v102 = DOUBLE_N1_0;
          v103 = L"Value";
          v104 = 10;
          v49 = 4;
          v50 = 0;
          v52 = v48;
          v96 = v47;
          v51[0] = 0;
          v97 = 1;
          v98 = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v46,
            (unsigned int)&unk_1C0222872,
            v47,
            v48,
            (__int64)&v98,
            (__int64)&v97,
            (__int64)v51,
            (__int64)&v103,
            (__int64)&v96,
            (__int64)&v52,
            (__int64)&v50,
            (__int64)&v49,
            (__int64)&v102,
            (__int64)&v101);
        }
      }
      *(_QWORD *)((char *)&Data[6] + 12) = 0LL;
      *((_DWORD *)a1 + 207) = v35;
    }
    CitpPostUpdateUseInfoSave(a1, Data);
    v39 = Data[1];
    *(_OWORD *)((char *)a1 + 456) = Data[0];
    v40 = Data[2];
    *(_OWORD *)((char *)a1 + 472) = v39;
    v41 = Data[3];
    *(_OWORD *)((char *)a1 + 488) = v40;
    v42 = Data[4];
    *(_OWORD *)((char *)a1 + 504) = v41;
    v43 = Data[5];
    *(_OWORD *)((char *)a1 + 520) = v42;
    v44 = Data[6];
    *(_OWORD *)((char *)a1 + 536) = v43;
    *(_QWORD *)&v43 = *(_QWORD *)&Data[7];
    *(_OWORD *)((char *)a1 + 552) = v44;
    *((_QWORD *)a1 + 71) = v43;
  }
}
