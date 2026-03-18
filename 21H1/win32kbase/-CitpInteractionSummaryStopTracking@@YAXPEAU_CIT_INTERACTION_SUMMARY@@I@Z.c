/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0026918
 * Callers:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00267C8 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C002682C (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 * Callees:
 *     ?OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z @ 0x1C0026F04 (-OnlyCompositionMetrics@@YAHPEBU_CIT_INTERACTION_SUMMARY@@U_CIT_INPUT_TIMES@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U2@U5@U4@U4@U4@U4@U4@U5@U5@U4@U5@U5@U5@U5@U4@U4@U3@U4@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@66666AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@7777777777777777747666667767777665655@Z @ 0x1C0026F50 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U-$_tlgWrapperByVal@$07@@U.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C00C75E4 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U4@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@U_tlgWrapperBinary@@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U6@U3@U6@U2@U2@U2@U2@U2@U6@U6@U2@U6@U6@U6@U6@U2@U2@U5@U2@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@55AEBU?$_tlgWrapperByRef@$0BA@@@6AEBU?$_tlgWrapperByVal@$07@@444444AEBU?$_tlgWrapperByVal@$01@@AEBU_tlgWrapperBinary@@8888888888888888858444448848888447477@Z @ 0x1C01FDD98 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@U3@U-.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2)
{
  struct _CIT_INTERACTION_SUMMARY *v2; // r11
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY **v5; // rax
  _DWORD *v6; // r13
  _DWORD *v7; // rsi
  struct _CIT_AUDIO_STATS **v8; // rbx
  __int64 v9; // rdi
  PVOID v10; // rax
  struct _CIT_IMPACT_CONTEXT *v11; // rbx
  int v12; // r15d
  int v13; // r14d
  __int64 v14; // r12
  __int64 v15; // r9
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  __int16 v18; // ax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r11
  int v25; // eax
  int v26; // eax
  __int16 v27; // cx
  __int16 v28; // cx
  __int16 v29; // cx
  int v30; // ecx
  __int64 v31; // r10
  const WCHAR *v32; // rdi
  const WCHAR *v33; // rsi
  const WCHAR *v34; // rax
  __int128 v35; // xmm0
  __int64 v36; // xmm1_8
  __int16 v37; // ax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r9
  __int64 v41; // r10
  __int64 v42; // r11
  int v43; // eax
  int v44; // eax
  __int16 v45; // cx
  __int16 v46; // cx
  __int16 v47; // cx
  __int64 v48; // rcx
  __int16 v49; // [rsp+1F2h] [rbp-7Eh] BYREF
  __int16 v50; // [rsp+1F4h] [rbp-7Ch] BYREF
  __int16 v51; // [rsp+1F6h] [rbp-7Ah] BYREF
  __int16 v52; // [rsp+1F8h] [rbp-78h] BYREF
  __int16 v53; // [rsp+1FAh] [rbp-76h] BYREF
  __int16 v54; // [rsp+1FCh] [rbp-74h] BYREF
  __int16 v55; // [rsp+1FEh] [rbp-72h] BYREF
  __int16 v56; // [rsp+200h] [rbp-70h] BYREF
  __int16 v57; // [rsp+202h] [rbp-6Eh] BYREF
  __int16 v58; // [rsp+204h] [rbp-6Ch] BYREF
  __int16 v59; // [rsp+206h] [rbp-6Ah] BYREF
  __int16 v60; // [rsp+208h] [rbp-68h] BYREF
  __int16 v61; // [rsp+20Ah] [rbp-66h] BYREF
  __int16 v62; // [rsp+20Ch] [rbp-64h] BYREF
  __int16 v63; // [rsp+20Eh] [rbp-62h] BYREF
  __int16 v64; // [rsp+210h] [rbp-60h] BYREF
  __int16 v65; // [rsp+212h] [rbp-5Eh] BYREF
  __int16 v66; // [rsp+214h] [rbp-5Ch] BYREF
  __int16 v67; // [rsp+216h] [rbp-5Ah] BYREF
  __int16 v68; // [rsp+218h] [rbp-58h] BYREF
  __int16 v69; // [rsp+21Ah] [rbp-56h] BYREF
  __int16 v70; // [rsp+21Ch] [rbp-54h] BYREF
  __int16 v71; // [rsp+21Eh] [rbp-52h] BYREF
  __int16 v72; // [rsp+220h] [rbp-50h] BYREF
  __int16 v73; // [rsp+222h] [rbp-4Eh] BYREF
  int v74; // [rsp+224h] [rbp-4Ch] BYREF
  int v75; // [rsp+228h] [rbp-48h] BYREF
  int v76; // [rsp+22Ch] [rbp-44h] BYREF
  int v77; // [rsp+230h] [rbp-40h] BYREF
  int v78; // [rsp+234h] [rbp-3Ch] BYREF
  int v79; // [rsp+238h] [rbp-38h] BYREF
  int v80; // [rsp+23Ch] [rbp-34h] BYREF
  int v81; // [rsp+240h] [rbp-30h] BYREF
  __int64 v82; // [rsp+244h] [rbp-2Ch] BYREF
  int v83; // [rsp+24Ch] [rbp-24h] BYREF
  int v84; // [rsp+250h] [rbp-20h] BYREF
  int v85; // [rsp+254h] [rbp-1Ch] BYREF
  int v86; // [rsp+258h] [rbp-18h] BYREF
  int v87; // [rsp+25Ch] [rbp-14h] BYREF
  const WCHAR *v88; // [rsp+260h] [rbp-10h]
  const WCHAR *v89; // [rsp+268h] [rbp-8h]
  __int128 v90; // [rsp+270h] [rbp+0h] BYREF
  __int64 v91; // [rsp+280h] [rbp+10h]
  int v92; // [rsp+288h] [rbp+18h]
  __int16 v93; // [rsp+28Ch] [rbp+1Ch]
  int v94; // [rsp+290h] [rbp+20h]
  int v95; // [rsp+294h] [rbp+24h]
  __int64 v96; // [rsp+298h] [rbp+28h] BYREF
  __int64 v97; // [rsp+2A0h] [rbp+30h] BYREF
  __int64 v98; // [rsp+2A8h] [rbp+38h] BYREF
  __int64 v99; // [rsp+2B0h] [rbp+40h] BYREF
  __int64 v100; // [rsp+2B8h] [rbp+48h] BYREF
  __int64 v101; // [rsp+2C0h] [rbp+50h] BYREF
  _QWORD v102[9]; // [rsp+2C8h] [rbp+58h] BYREF
  char v103; // [rsp+320h] [rbp+B0h] BYREF
  char v104; // [rsp+330h] [rbp+C0h] BYREF
  char v105; // [rsp+338h] [rbp+C8h] BYREF

  v2 = a1;
  v4 = *(_QWORD *)a1;
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 8) != v2
    || (v5 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)v2 + 1), *v5 != v2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _CIT_INTERACTION_SUMMARY *)v4;
  v6 = (_DWORD *)((char *)v2 + 116);
  *(_QWORD *)(v4 + 8) = v5;
  v7 = (_DWORD *)((char *)v2 + 124);
  *((_QWORD *)v2 + 1) = v2;
  v8 = (struct _CIT_AUDIO_STATS **)v102;
  *(_QWORD *)v2 = v2;
  v9 = 2LL;
  v102[0] = (char *)v2 + 116;
  v102[1] = (char *)v2 + 124;
  do
  {
    if ( *((_BYTE *)*v8 + 3) )
      CitpAudioStatSnapDelta(*v8);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( ((xmmword_1C0256414 & 0x10) == 0
     || *((_WORD *)v2 + 57) != 4
     || *((_WORD *)v2 + 54)
     && *((_WORD *)v2 + 55)
     && ((*((_BYTE *)v2 + 100) & 1) != 0 || (v10 = **(PVOID **)(*((_QWORD *)v2 + 3) + 8LL)) == 0LL || v10 != g_pepDwm))
    && ((xmmword_1C0256414 & 0x20) == 0
     || (*((_WORD *)v2 + 57) & 0xFFF3) != 0
     || (*((_WORD *)v2 + 57) & 8) == 0
     || *((_WORD *)v2 + 53) >= 3u
     || *((_WORD *)v2 + 54) && *((_WORD *)v2 + 55)) )
  {
    v11 = xmmword_1C0256430;
    v12 = a2 - *((_DWORD *)v2 + 23);
    v13 = a2 - *((_DWORD *)xmmword_1C0256430 + 218);
    v14 = *((_QWORD *)xmmword_1C0256430 + 105) + 1LL;
    v15 = *((_QWORD *)xmmword_1C0256430 + 108);
    *((_QWORD *)xmmword_1C0256430 + 105) = v14;
    if ( (*((_BYTE *)v2 + 100) & 1) != 0 )
    {
      v31 = *((_QWORD *)v2 + 3);
      v32 = &word_1C0211C10;
      v89 = &word_1C0211C10;
      v33 = &word_1C0211C10;
      v88 = &word_1C0211C10;
      if ( *(_QWORD *)(v31 + 40) )
      {
        v34 = *(const WCHAR **)(v31 + 48);
        if ( *(_DWORD *)(v31 + 72) == 1 )
        {
          v89 = *(const WCHAR **)(v31 + 40);
          if ( v34 )
            v88 = v34;
        }
        else
        {
          v32 = *(const WCHAR **)(v31 + 40);
          if ( v34 )
            v33 = *(const WCHAR **)(v31 + 48);
        }
      }
      v35 = *((_OWORD *)v2 + 2);
      v92 = *((_DWORD *)v2 + 14);
      v36 = *((_QWORD *)v2 + 6);
      v37 = *((_WORD *)v2 + 30);
      v90 = v35;
      v93 = v37;
      v91 = v36;
      if ( !(unsigned int)OnlyCompositionMetrics(v2, &v90, 0LL, v15)
        && (unsigned int)dword_1C024B250 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1C024B250, 0x800000000800LL, v38, v39) )
      {
        v101 = *(_QWORD *)(v42 + 16);
        v43 = *(_DWORD *)(v42 + 124) & 0xFFFFFF;
        v102[2] = 0x2000000LL;
        v95 = v43;
        v44 = *v6 & 0xFFFFFF;
        v96 = v14;
        v45 = *(_WORD *)(v42 + 52);
        v76 = v44;
        v49 = *(_WORD *)(v42 + 106);
        v50 = *(_WORD *)(v42 + 112);
        v51 = *(_WORD *)(v42 + 110);
        v52 = *(_WORD *)(v42 + 108);
        v77 = *(_DWORD *)(v42 + 96);
        v53 = *(_WORD *)(v42 + 54);
        v54 = *(_WORD *)(v42 + 104);
        v78 = *((_DWORD *)v11 + 219);
        v79 = xmmword_1C0256414;
        v80 = DWORD2(xmmword_1C0256414);
        v75 = DWORD1(xmmword_1C0256414);
        v81 = DWORD1(xmmword_1C0256404);
        v55 = *(_WORD *)(v42 + 70);
        v103 = *(_BYTE *)(v42 + 72);
        v56 = *(_WORD *)(v42 + 68);
        v57 = *(_WORD *)(v42 + 66);
        v58 = *(_WORD *)(v42 + 64);
        v59 = *(_WORD *)(v42 + 62);
        v60 = *(_WORD *)(v42 + 44);
        v61 = *(_WORD *)(v42 + 58);
        v62 = *(_WORD *)(v42 + 56);
        LOWORD(v44) = v45 + *(_WORD *)(v42 + 50);
        v63 = v45;
        v46 = *(_WORD *)(v42 + 48);
        v64 = v44;
        LOWORD(v44) = v46 + *(_WORD *)(v42 + 46);
        v65 = v46;
        v47 = *(_WORD *)(v42 + 42);
        v66 = v44;
        LOWORD(v44) = v47 + *(_WORD *)(v42 + 40);
        v67 = v47;
        v48 = *(unsigned __int16 *)(v42 + 38);
        v68 = v44;
        v70 = *(_WORD *)(v42 + 36);
        LOWORD(v44) = *(_WORD *)(v42 + 34);
        v94 = v12;
        v71 = v48 + v44;
        v72 = *(_WORD *)(v42 + 32);
        *(_QWORD *)&v90 = *(_QWORD *)(v42 + 160);
        LOWORD(v44) = *(_WORD *)(v42 + 168);
        v69 = v48;
        WORD4(v90) = v44;
        v73 = *(_WORD *)(v42 + 140);
        LODWORD(v82) = *(_DWORD *)(v42 + 152);
        HIDWORD(v82) = *(_DWORD *)(v42 + 144);
        v83 = *(unsigned __int16 *)(v42 + 102);
        v84 = *(_DWORD *)(v42 + 132);
        v85 = *(_DWORD *)(v42 + 136);
        v98 = v42 + 76;
        v99 = v42 + 76;
        v87 = *(_DWORD *)(v41 + 64);
        v74 = *(_DWORD *)(v41 + 68);
        v86 = v13;
        v97 = v40;
        v104 = 1;
        v105 = 1;
        v100 = (__int64)v33;
        v102[0] = v32;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v48,
          &unk_1C0222E29);
      }
    }
    else
    {
      v16 = *((_OWORD *)v2 + 2);
      v92 = *((_DWORD *)v2 + 14);
      v17 = *((_QWORD *)v2 + 6);
      v18 = *((_WORD *)v2 + 30);
      v90 = v16;
      v93 = v18;
      v91 = v17;
      if ( !(unsigned int)OnlyCompositionMetrics(v2, &v90, 0LL, v15) && (unsigned int)dword_1C024B250 > 5 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024B250, 0x800000000800LL, v19, v20) )
        {
          v99 = *(_QWORD *)(v24 + 16);
          v25 = *v7 & 0xFFFFFF;
          v102[0] = 0x2000000LL;
          v87 = v25;
          v26 = *v6 & 0xFFFFFF;
          v100 = v14;
          v27 = *(_WORD *)(v24 + 52);
          v86 = v26;
          v73 = *(_WORD *)(v24 + 106);
          v72 = *(_WORD *)(v24 + 112);
          v71 = *(_WORD *)(v24 + 110);
          v70 = *(_WORD *)(v24 + 108);
          v85 = *(_DWORD *)(v24 + 96);
          v69 = *(_WORD *)(v24 + 54);
          v68 = *(_WORD *)(v24 + 104);
          v84 = *((_DWORD *)v11 + 219);
          v83 = xmmword_1C0256414;
          v82 = *(_QWORD *)((char *)&xmmword_1C0256414 + 4);
          v81 = DWORD1(xmmword_1C0256404);
          v67 = *(_WORD *)(v24 + 70);
          v103 = *(_BYTE *)(v24 + 72);
          v66 = *(_WORD *)(v24 + 68);
          v65 = *(_WORD *)(v24 + 66);
          v64 = *(_WORD *)(v24 + 64);
          v63 = *(_WORD *)(v24 + 62);
          v62 = *(_WORD *)(v24 + 44);
          v61 = *(_WORD *)(v24 + 58);
          v60 = *(_WORD *)(v24 + 56);
          LOWORD(v26) = v27 + *(_WORD *)(v24 + 50);
          v59 = v27;
          v28 = *(_WORD *)(v24 + 48);
          v58 = v26;
          LOWORD(v26) = v28 + *(_WORD *)(v24 + 46);
          v57 = v28;
          v29 = *(_WORD *)(v24 + 42);
          v56 = v26;
          LOWORD(v26) = v29 + *(_WORD *)(v24 + 40);
          v55 = v29;
          v30 = *(unsigned __int16 *)(v24 + 38);
          v54 = v26;
          v52 = *(_WORD *)(v24 + 36);
          LOWORD(v26) = *(_WORD *)(v24 + 34);
          v74 = v12;
          v51 = v30 + v26;
          v50 = *(_WORD *)(v24 + 32);
          *(_QWORD *)&v90 = *(_QWORD *)(v24 + 160);
          LOWORD(v26) = *(_WORD *)(v24 + 168);
          v53 = v30;
          WORD4(v90) = v26;
          v49 = *(_WORD *)(v24 + 140);
          v75 = *(_DWORD *)(v24 + 152);
          v80 = *(_DWORD *)(v24 + 144);
          v79 = *(unsigned __int16 *)(v24 + 102);
          v78 = *(_DWORD *)(v24 + 132);
          v77 = *(_DWORD *)(v24 + 136);
          v76 = v13;
          v98 = v22;
          v97 = v23;
          v101 = v23;
          v104 = 1;
          v105 = 1;
          v96 = v23;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperBinary,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v30,
            (unsigned int)&unk_1C0222944,
            v21,
            v22,
            (__int64)&v96,
            (__int64)&v105,
            (__int64)&v104,
            (__int64)&v101,
            (__int64)&v97,
            (__int64)&v98,
            (__int64)&v76,
            (__int64)&v77,
            (__int64)&v78,
            (__int64)&v79,
            (__int64)&v80,
            (__int64)&v75,
            (__int64)&v49,
            (__int64)&v90,
            (__int64)&v50,
            (__int64)&v51,
            (__int64)&v52,
            (__int64)&v53,
            (__int64)&v54,
            (__int64)&v55,
            (__int64)&v56,
            (__int64)&v57,
            (__int64)&v58,
            (__int64)&v59,
            (__int64)&v60,
            (__int64)&v61,
            (__int64)&v62,
            (__int64)&v63,
            (__int64)&v64,
            (__int64)&v65,
            (__int64)&v66,
            (__int64)&v103,
            (__int64)&v67,
            (__int64)&v81,
            (__int64)&v82,
            (__int64)&v82 + 4,
            (__int64)&v83,
            (__int64)&v84,
            (__int64)&v68,
            (__int64)&v69,
            (__int64)&v85,
            (__int64)&v70,
            (__int64)&v71,
            (__int64)&v72,
            (__int64)&v73,
            (__int64)&v86,
            (__int64)&v87,
            (__int64)&v99,
            (__int64)&v74,
            (__int64)&v100,
            (__int64)v102);
        }
      }
    }
  }
}
