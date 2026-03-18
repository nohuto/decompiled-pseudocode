/*
 * XREFs of cjIFIMetricsToOTMW @ 0x1C00DA308
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00DAC84 (GreGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00A1F38 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C00A20E4 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00DAAB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C00DAF1C (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C012C6BC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02B12B4 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 */

__int64 __fastcall cjIFIMetricsToOTMW(
        _BYTE *a1,
        unsigned int *a2,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4,
        struct _IFIMETRICS *a5,
        int a6)
{
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // eax
  signed int v15; // eax
  __int64 result; // rax
  unsigned int *v17; // r12
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // r14d
  unsigned __int16 *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // r14d
  unsigned __int16 *v28; // r12
  __int64 v29; // r15
  float v30; // xmm3_4
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int IsZero; // eax
  __m128i v55; // xmm1
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  unsigned int v59; // [rsp+20h] [rbp-60h] BYREF
  float v60[3]; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v61; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v62; // [rsp+46h] [rbp-3Ah]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v61, a5, a3, a4);
  v10 = 0;
  if ( a5->fwdWinAscender + a5->fwdWinDescender == 0 || a5->fwdUnitsPerEm == 0 )
    return v10;
  vIFIMetricsToTextMetricWStrict(a3, a4, (struct tagTEXTMETRICW *)(a2 + 1), a5);
  a1[4] = a5->chFirstChar;
  a1[5] = a5->chLastChar;
  a1[6] = a5->chDefaultChar;
  a1[7] = a5->chBreakChar;
  v12 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 220LL) )
  {
    v30 = *(float *)(v12 + 212);
    v60[0] = *(float *)(v12 + 216);
    if ( v30 == v60[0] )
    {
      v13 = v61;
      a2[21] = *(_DWORD *)(v61 + 140);
    }
    else
    {
      IsZero = EFLOAT::bIsZero((EFLOAT *)v60);
      v13 = v61;
      a2[21] = *(_DWORD *)(v61 + 140);
      if ( !IsZero )
      {
        v59 = 0;
        bFToL(v11, &v59, 0LL);
        a2[22] = v59;
        goto LABEL_19;
      }
    }
    a2[22] = *(_DWORD *)(v13 + 136);
LABEL_19:
    a2[24] = *(__int16 *)(v13 + 56);
    v59 = 0;
    bFToL(v11, &v59, 0LL);
    a2[25] = v59;
    v59 = 0;
    bFToL(v31, &v59, 0LL);
    a2[26] = v59;
    v59 = 0;
    bFToL(v32, &v59, 0LL);
    a2[27] = v59;
    v59 = 0;
    bFToL(v33, &v59, 0LL);
    a2[31] = v59;
    v59 = 0;
    bFToL(v34, &v59, 0LL);
    a2[30] = v59;
    v59 = 0;
    bFToL(v35, &v59, 0LL);
    a2[33] = v59;
    v59 = 0;
    bFToL(v36, &v59, 0LL);
    a2[32] = v59;
    v59 = 0;
    bFToL(v37, &v59, 0LL);
    a2[34] = v59;
    v59 = 0;
    bFToL(v38, &v59, 0LL);
    a2[35] = v59;
    v59 = 0;
    bFToL(v39, &v59, 0LL);
    a2[36] = v59;
    v59 = 0;
    bFToL(v40, &v59, 0LL);
    a2[38] = v59;
    v59 = 0;
    bFToL(v41, &v59, 0LL);
    a2[39] = v59;
    v59 = 0;
    bFToL(v42, &v59, 0LL);
    a2[40] = v59;
    v59 = 0;
    bFToL(v43, &v59, 0LL);
    a2[41] = v59;
    v59 = 0;
    bFToL(v44, &v59, 0LL);
    a2[42] = v59;
    v59 = 0;
    bFToL(v45, &v59, 0LL);
    a2[43] = v59;
    v59 = 0;
    bFToL(v46, &v59, 0LL);
    a2[44] = v59;
    v59 = 0;
    bFToL(v47, &v59, 0LL);
    a2[45] = v59;
    v59 = 0;
    bFToL(v48, &v59, 0LL);
    a2[46] = v59;
    v59 = 0;
    bFToL(v49, &v59, 0LL);
    a2[47] = v59;
    v59 = 0;
    bFToL(v50, &v59, 0LL);
    a2[48] = v59;
    v59 = 0;
    bFToL(v51, &v59, 0LL);
    a2[49] = v59;
    v59 = 0;
    bFToL(v52, &v59, 0LL);
    a2[29] = v59;
    v59 = 0;
    bFToL(v53, &v59, 0LL);
    a2[28] = v59;
    goto LABEL_4;
  }
  v13 = v61;
  a2[21] = *(_DWORD *)(v61 + 140);
  a2[22] = *(_DWORD *)(v13 + 136);
  a2[24] = *(__int16 *)(v13 + 56);
  a2[25] = *(__int16 *)(v13 + 70);
  a2[26] = *(__int16 *)(v13 + 72);
  a2[27] = *(__int16 *)(v13 + 74);
  a2[30] = *(_DWORD *)(v13 + 144);
  a2[31] = *(_DWORD *)(v13 + 148);
  a2[32] = *(_DWORD *)(v13 + 152);
  a2[33] = *(_DWORD *)(v13 + 156);
  a2[34] = *(__int16 *)(v13 + 64);
  a2[35] = *(__int16 *)(v13 + 66);
  a2[36] = *(__int16 *)(v13 + 68);
  a2[38] = *(__int16 *)(v13 + 84);
  a2[39] = *(__int16 *)(v13 + 86);
  a2[40] = *(__int16 *)(v13 + 88);
  a2[41] = *(__int16 *)(v13 + 90);
  a2[42] = *(__int16 *)(v13 + 92);
  a2[43] = *(__int16 *)(v13 + 94);
  a2[44] = *(__int16 *)(v13 + 96);
  a2[45] = *(__int16 *)(v13 + 98);
  a2[46] = *(__int16 *)(v13 + 104);
  a2[47] = *(__int16 *)(v13 + 106);
  a2[48] = *(__int16 *)(v13 + 100);
  a2[49] = *(__int16 *)(v13 + 102);
  a2[29] = *(__int16 *)(v13 + 82);
  a2[28] = *(__int16 *)(v13 + 80);
LABEL_4:
  v14 = *(_DWORD *)(v13 + 32);
  a2[23] = v14;
  if ( !v14 )
  {
    v15 = *(_DWORD *)(v13 + 140);
    if ( v15 <= 0 || *(_DWORD *)(v13 + 136) )
    {
      v55 = _mm_cvtsi32_si128(v15);
      v56 = *(_DWORD *)(v13 + 136);
      v60[0] = 0.0;
      v59 = 0;
      vArctan(
        (unsigned int)_mm_cvtsi128_si32((__m128i)_mm_cvtepi32_ps(v55)),
        (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)-v56)),
        &v59,
        v60);
      v60[0] = 0.0;
      bFToL(v57, v60, 0LL);
      v58 = LODWORD(v60[0]);
      a2[23] = LODWORD(v60[0]);
      if ( v58 > 1800 )
        a2[23] = v58 - 3600;
    }
  }
  cjOTMAWSize(a5, a2);
  *(_QWORD *)((char *)a2 + 65) = *(_QWORD *)(v13 + 172);
  *(_WORD *)((char *)a2 + 73) = *(_WORD *)(v13 + 180);
  a2[19] = v62;
  a2[20] = *(unsigned __int16 *)(v13 + 54);
  a2[37] = *(__int16 *)(v13 + 58);
  result = 232LL;
  if ( a6 )
  {
    v17 = a2 + 58;
    v18 = *a2 - 232LL;
    *((_QWORD *)a2 + 25) = 232LL;
    v19 = v18 >> 1;
    StringCchCopyW((unsigned __int16 *)a2 + 116, (unsigned int)v19, (const unsigned __int16 *)(v13 + *(int *)(v13 + 8)));
    v20 = -1LL;
    v21 = -1LL;
    do
      ++v21;
    while ( *((_WORD *)v17 + v21) );
    v22 = (unsigned int)(v21 + 1);
    v23 = v19 - v22;
    v24 = (unsigned __int16 *)v17 + v22;
    *((_QWORD *)a2 + 26) = (char *)v24 - (char *)a2;
    StringCchCopyW(v24, v23, (const unsigned __int16 *)(v13 + *(int *)(v13 + 16)));
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = (unsigned int)(v25 + 1);
    v27 = v23 - v26;
    v28 = &v24[v26];
    *((_QWORD *)a2 + 27) = (char *)v28 - (char *)a2;
    StringCchCopyW(v28, v27, (const unsigned __int16 *)(v13 + *(int *)(v13 + 12)));
    do
      ++v20;
    while ( v28[v20] );
    v29 = (unsigned int)(v20 + 1);
    *((_QWORD *)a2 + 28) = (char *)&v28[v29] - (char *)a2;
    StringCchCopyW(&v28[v29], v27 - (unsigned int)v29, (const unsigned __int16 *)(v13 + *(int *)(v13 + 20)));
    return *a2;
  }
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 28) = 0LL;
  return result;
}
