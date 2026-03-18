/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C005D88C
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C0061754 (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C00672D4 (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C005D6E0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C005E8E8 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 *     GetAppCompatFlags @ 0x1C01090E0 (GetAppCompatFlags.c)
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
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  LONG v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  LONG v21; // ecx
  char v22; // al
  __int64 v23; // rax
  BYTE v24; // r8
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int AppCompatFlags; // eax
  __int64 v32; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v33; // [rsp+34h] [rbp-2Ch]
  char v34; // [rsp+36h] [rbp-2Ah]
  LONG v35; // [rsp+44h] [rbp-1Ch]
  LONG v36; // [rsp+48h] [rbp-18h]
  LONG v37; // [rsp+4Ch] [rbp-14h]
  LONG v38; // [rsp+50h] [rbp-10h]
  LONG v39; // [rsp+54h] [rbp-Ch]
  LONG v40; // [rsp+58h] [rbp-8h]
  LONG v41; // [rsp+A8h] [rbp+48h] BYREF
  int v42; // [rsp+B0h] [rbp+50h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v32, a4, a1, a2);
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
    v41 = 0;
    bFToL(v10, &v41, 0LL);
    a3->tmHeight = v41;
    v41 = 0;
    bFToL(v26, &v41, 0LL);
    a3->tmAscent = v41;
    RFONTOBJ::lOverhang(a1);
    v41 = 0;
    bFToL(v27, &v41, 0LL);
    a3->tmOverhang = v41;
  }
  v11 = v32;
  if ( (*(_DWORD *)(v32 + 48) & 0x3000010) != 0 )
  {
    v12 = *(_QWORD *)a1;
    v41 = 0;
    v13 = *(unsigned int *)(v12 + 380);
    if ( (_DWORD)v13 == 0x80000000 )
    {
      v42 = *(_DWORD *)(v12 + 216);
      bFToL(v13, &v41, 0LL);
      v15 = a3->tmHeight - v41;
    }
    else
    {
      bFToL(v13, &v41, 0LL);
      v15 = v41;
    }
    a3->tmInternalLeading = v15;
    v16 = *(_QWORD *)a1;
    v41 = 0;
    if ( *(_DWORD *)(v16 + 376) == 0x80000000 )
    {
      v14 = *(unsigned __int16 *)(v11 + 68);
      LOWORD(v14) = *(_WORD *)(v11 + 64) + v14 - *(_WORD *)(v11 + 66) - *(_WORD *)(v11 + 62) - *(_WORD *)(v11 + 60);
      v42 = *(_DWORD *)(v16 + 216);
      if ( (__int16)v14 <= 0 )
        LOWORD(v14) = 0;
    }
    bFToL(v14, &v41, 0LL);
    a3->tmExternalLeading = v41;
    v17 = *(_QWORD *)a1;
    v41 = 0;
    v18 = *(unsigned int *)(v17 + 384);
    if ( (_DWORD)v18 == 0x80000000 )
      v42 = *(_DWORD *)(v17 + 212);
    bFToL(v18, &v41, 0LL);
    a3->tmMaxCharWidth = v41;
    v19 = *(_QWORD *)a1;
    v41 = 0;
    v20 = *(unsigned int *)(v19 + 388);
    if ( (_DWORD)v20 == 0x80000000 )
      v42 = *(_DWORD *)(v19 + 212);
    bFToL(v20, &v41, 0LL);
    a3->tmAveCharWidth = v41;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v35;
    a3->tmAveCharWidth = v36;
    a3->tmInternalLeading = v37;
    a3->tmExternalLeading = v38;
  }
  else
  {
    v41 = 0;
    bFToL(2050LL, &v41, 0LL);
    a3->tmMaxCharWidth = v41;
    v41 = 0;
    bFToL(v28, &v41, 0LL);
    a3->tmAveCharWidth = v41;
    v41 = 0;
    bFToL(v29, &v41, 0LL);
    a3->tmInternalLeading = v41;
    v41 = 0;
    bFToL(v30, &v41, 0LL);
    a3->tmExternalLeading = v41;
  }
  v21 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v33;
  v22 = v34 & 1;
  a3->tmDescent = v21;
  a3->tmItalic = -(v22 != 0);
  a3->tmUnderlined = *(_BYTE *)(v11 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v11 + 52) & 0x10;
  LOBYTE(v21) = *(_DWORD *)(*(_QWORD *)a2 + 1736LL) & 0x80;
  a3->tmUnderlined = -((*(_DWORD *)(*(_QWORD *)a2 + 1736LL) & 0x20) != 0);
  a3->tmStruckOut = -((_BYTE)v21 != 0);
  a3->tmFirstChar = *(_WORD *)(v11 + 112);
  a3->tmLastChar = *(_WORD *)(v11 + 114);
  a3->tmDefaultChar = *(_WORD *)(v11 + 116);
  a3->tmBreakChar = *(_WORD *)(v11 + 118);
  a3->tmCharSet = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 6LL);
  if ( (*(_DWORD *)(v11 + 48) & 1) != 0 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v23 + 40) & 1) != 0
      || (*(_DWORD *)(v23 + 2184) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 1
      || gbDBCSCodePage && (AppCompatFlags = GetAppCompatFlags(0LL), AppCompatFlags < 0) )
    {
      v9 = 0;
    }
    v24 = v9 | *(_BYTE *)(v11 + 45) & 0xF0 | (*(_DWORD *)(v11 + 48) >> 1) & 2 | ((*(_DWORD *)(v11 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v11 + 48) & 0x401000) == 0);
  }
  else
  {
    v25 = *(_DWORD *)(*(_QWORD *)a1 + 92LL);
    if ( (a4->flInfo & 8) != 0 && (!gbDBCSCodePage || (int)GetAppCompatFlags(0LL) >= 0) )
      v8 = 10;
    v24 = v8 | *(_BYTE *)(v11 + 45) & 0xF0 | (v25 != 0 ? 8 : 0) | (*(_DWORD *)(v11 + 48) >> 1) & 2 | ((*(_DWORD *)(v11 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v11 + 48) & 0x401000) == 0);
  }
  a3->tmPitchAndFamily = v24;
  a3->tmDigitizedAspectX = v39;
  a3->tmDigitizedAspectY = v40;
}
