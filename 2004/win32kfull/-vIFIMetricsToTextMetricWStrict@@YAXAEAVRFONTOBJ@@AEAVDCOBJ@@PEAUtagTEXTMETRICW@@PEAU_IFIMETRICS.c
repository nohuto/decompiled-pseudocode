/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C00A20E4
 * Callers:
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C00D8EB4 (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C00DA308 (cjIFIMetricsToOTMW.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00A1F38 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C00DEE0C (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 *     GetAppCompatFlags @ 0x1C0108250 (GetAppCompatFlags.c)
 */

void __fastcall vIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *a1,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v8; // si
  char v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  LONG v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  LONG v22; // ecx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rax
  BYTE v26; // r8
  int v27; // r14d
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int AppCompatFlags; // eax
  __int64 v34; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v35; // [rsp+34h] [rbp-2Ch]
  char v36; // [rsp+36h] [rbp-2Ah]
  LONG v37; // [rsp+44h] [rbp-1Ch]
  LONG v38; // [rsp+48h] [rbp-18h]
  LONG v39; // [rsp+4Ch] [rbp-14h]
  LONG v40; // [rsp+50h] [rbp-10h]
  LONG v41; // [rsp+54h] [rbp-Ch]
  LONG v42; // [rsp+58h] [rbp-8h]
  LONG v43; // [rsp+A8h] [rbp+48h] BYREF
  int v44; // [rsp+B0h] [rbp+50h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v34, a4, a1, a2);
  v8 = 0;
  v9 = 8;
  v10 = *(unsigned int *)(*(_QWORD *)a1 + 324LL);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = ((int)v10 + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)a1 + 316LL) + 8) >> 4;
    a3->tmOverhang = RFONTOBJ::lOverhang(a1);
  }
  else
  {
    v43 = 0;
    bFToL(v10, &v43, 0LL);
    a3->tmHeight = v43;
    v43 = 0;
    bFToL(v28, &v43, 0LL);
    a3->tmAscent = v43;
    RFONTOBJ::lOverhang(a1);
    v43 = 0;
    bFToL(v29, &v43, 0LL);
    a3->tmOverhang = v43;
  }
  v12 = v34;
  if ( (*(_DWORD *)(v34 + 48) & 0x3000010) != 0 )
  {
    v13 = *(_QWORD *)a1;
    v43 = 0;
    v14 = *(unsigned int *)(v13 + 380);
    if ( (_DWORD)v14 == 0x80000000 )
    {
      v44 = *(_DWORD *)(v13 + 216);
      bFToL(v14, &v43, 0LL);
      v16 = a3->tmHeight - v43;
    }
    else
    {
      bFToL(v14, &v43, 0LL);
      v16 = v43;
    }
    a3->tmInternalLeading = v16;
    v17 = *(_QWORD *)a1;
    v43 = 0;
    if ( *(_DWORD *)(v17 + 376) == 0x80000000 )
    {
      v15 = *(unsigned __int16 *)(v12 + 68);
      LOWORD(v15) = *(_WORD *)(v12 + 64) + v15 - *(_WORD *)(v12 + 66) - *(_WORD *)(v12 + 62) - *(_WORD *)(v12 + 60);
      v44 = *(_DWORD *)(v17 + 216);
      if ( (__int16)v15 <= 0 )
        LOWORD(v15) = 0;
    }
    bFToL(v15, &v43, 0LL);
    a3->tmExternalLeading = v43;
    v18 = *(_QWORD *)a1;
    v43 = 0;
    v19 = *(unsigned int *)(v18 + 384);
    if ( (_DWORD)v19 == 0x80000000 )
      v44 = *(_DWORD *)(v18 + 212);
    bFToL(v19, &v43, 0LL);
    a3->tmMaxCharWidth = v43;
    v20 = *(_QWORD *)a1;
    v43 = 0;
    v21 = *(unsigned int *)(v20 + 388);
    if ( (_DWORD)v21 == 0x80000000 )
      v44 = *(_DWORD *)(v20 + 212);
    bFToL(v21, &v43, 0LL);
    a3->tmAveCharWidth = v43;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v37;
    a3->tmAveCharWidth = v38;
    a3->tmInternalLeading = v39;
    a3->tmExternalLeading = v40;
  }
  else
  {
    v43 = 0;
    bFToL(2050LL, &v43, 0LL);
    a3->tmMaxCharWidth = v43;
    v43 = 0;
    bFToL(v30, &v43, 0LL);
    a3->tmAveCharWidth = v43;
    v43 = 0;
    bFToL(v31, &v43, 0LL);
    a3->tmInternalLeading = v43;
    v43 = 0;
    bFToL(v32, &v43, 0LL);
    a3->tmExternalLeading = v43;
  }
  LOBYTE(v11) = -1;
  v22 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v35;
  v23 = v36 & 1;
  a3->tmDescent = v22;
  a3->tmItalic = -(v23 != 0);
  a3->tmUnderlined = *(_BYTE *)(v12 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v12 + 52) & 0x10;
  LOBYTE(v22) = *(_DWORD *)(*(_QWORD *)a2 + 1736LL) & 0x80;
  a3->tmUnderlined = -((*(_DWORD *)(*(_QWORD *)a2 + 1736LL) & 0x20) != 0);
  a3->tmStruckOut = -((_BYTE)v22 != 0);
  a3->tmFirstChar = *(_WORD *)(v12 + 112);
  a3->tmLastChar = *(_WORD *)(v12 + 114);
  a3->tmDefaultChar = *(_WORD *)(v12 + 116);
  a3->tmBreakChar = *(_WORD *)(v12 + 118);
  a3->tmCharSet = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 6LL);
  if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
  {
    v24 = *(_QWORD *)a2;
    v25 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v25 + 40) & 1) != 0
      || (*(_DWORD *)(v25 + 2184) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(v24 + 976) + 208LL) != 1
      || gbDBCSCodePage && (AppCompatFlags = GetAppCompatFlags(0LL, v24), AppCompatFlags < 0) )
    {
      v9 = 0;
    }
    v26 = v9 | *(_BYTE *)(v12 + 45) & 0xF0 | (*(_DWORD *)(v12 + 48) >> 1) & 2 | ((*(_DWORD *)(v12 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v12 + 48) & 0x401000) == 0);
  }
  else
  {
    v27 = *(_DWORD *)(*(_QWORD *)a1 + 92LL);
    if ( (a4->flInfo & 8) != 0 && (!gbDBCSCodePage || (int)GetAppCompatFlags(0LL, v11) >= 0) )
      v8 = 10;
    v26 = v8 | *(_BYTE *)(v12 + 45) & 0xF0 | (v27 != 0 ? 8 : 0) | (*(_DWORD *)(v12 + 48) >> 1) & 2 | ((*(_DWORD *)(v12 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v12 + 48) & 0x401000) == 0);
  }
  a3->tmPitchAndFamily = v26;
  a3->tmDigitizedAspectX = v41;
  a3->tmDigitizedAspectY = v42;
}
