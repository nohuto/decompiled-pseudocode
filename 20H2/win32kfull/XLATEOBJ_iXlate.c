/*
 * XREFs of XLATEOBJ_iXlate @ 0x1C00DE150
 * Callers:
 *     ?vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z @ 0x1C00EC3A0 (-vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C012F4E0 (-vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C012F710 (-pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C01309D0 (-pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z @ 0x1C0145FA0 (-vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z @ 0x1C0149FD0 (-vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0159470 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C0290FC0 (-vTransparentCopy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02917C0 (-vTransparentCopyS16D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0291B50 (-vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0292080 (-vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02B4770 (NtGdiXLATEOBJ_iXlate.c)
 *     ?pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C1A80 (-pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead16AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C1D00 (-pxrlStrRead16AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead16OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C1E20 (-pxrlStrRead16OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C1F40 (-pxrlStrRead24AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead24OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C2080 (-pxrlStrRead24OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C21C0 (-pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?pxrlStrRead32OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02C2440 (-pxrlStrRead32OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02C3AD0 (-vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02C3D20 (-vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02C3F70 (-vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z.c)
 *     ?vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02C4230 (-vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z.c)
 *     ?vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02C7EC0 (-vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02C8680 (-vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02C87D0 (-vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02CA7E0 (-vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02CA9B0 (-vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6980 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6D20 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6EE0 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C01495B4 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C02BE2C0 (-XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z.c)
 */

ULONG __stdcall XLATEOBJ_iXlate(XLATEOBJ *pxlo, ULONG iColor)
{
  ULONG v2; // r14d
  FLONG flXlate; // eax
  __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rax
  bool v17; // zf
  ULONG result; // eax
  ULONG cEntries; // ecx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  const unsigned __int8 *RGBXlate; // rax
  unsigned int NearestFromPalentryNoExactMatchFirst; // eax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-38h] BYREF
  __int64 v30; // [rsp+60h] [rbp+8h] BYREF
  __int64 v31; // [rsp+70h] [rbp+18h] BYREF
  ULONG *pulXlate; // [rsp+78h] [rbp+20h] BYREF

  v2 = iColor;
  if ( !pxlo )
    return iColor;
  flXlate = pxlo->flXlate;
  if ( (flXlate & 1) != 0 )
    return iColor;
  if ( (flXlate & 2) != 0 )
  {
    cEntries = pxlo->cEntries;
    if ( iColor > cEntries )
      v2 = iColor % cEntries;
    return *(&pxlo[3].cEntries + v2);
  }
  if ( (flXlate & 4) != 0 )
    return iColor == pxlo[3].cEntries;
  if ( (pxlo[3].flXlate & 0x800) != 0 )
    v5 = *(_QWORD *)&pxlo[2].iSrcType;
  else
    v5 = *(_QWORD *)&pxlo[2].iUniq;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(pxlo)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 40);
        if ( v12 != v11 + 40 )
        {
          v13 = v12 - 40;
          if ( v13 )
          {
            if ( (*(_DWORD *)(v13 + 412) & 0x100) != 0 && *(_DWORD *)(v13 + 420) )
            {
              v14 = 1;
              if ( v5 )
              {
                if ( *(_QWORD *)&pxlo[2].iSrcType )
                  goto LABEL_16;
              }
              else if ( gfUMPDDebug )
              {
                DbgPrint(
                  "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:ppal == NULL\n",
                  1678);
              }
              if ( !*(_QWORD *)&pxlo[2].iSrcType && gfUMPDDebug )
                DbgPrint(
                  "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDstDC == NULL\n",
                  1683LL);
              return 0;
            }
          }
        }
      }
    }
  }
  v14 = 0;
LABEL_16:
  if ( (*(_DWORD *)(v5 + 24) & 1) != 0 && *(_DWORD *)(*(_QWORD *)&pxlo[2].iSrcType + 28LL) == 256 )
  {
    v31 = v5;
    RGBXlate = XEPALOBJ::pGetRGBXlate((XEPALOBJ *)&v31);
    if ( RGBXlate )
      return XLATEOBJ_ulIndexToPalSurf(pxlo, RGBXlate, v2);
    return 0;
  }
  if ( v14 && !pxlo[1].pulXlate )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalSrc == NULL\n",
        1705LL);
    return 0;
  }
  pulXlate = pxlo[1].pulXlate;
  v15 = XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, v2);
  if ( (pxlo[3].flXlate & 0x800) != 0 )
  {
    if ( v14 && !*(_QWORD *)&pxlo[2].iSrcType )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDstDC == NULL\n",
          1719LL);
      return 0;
    }
    v29 = *(_QWORD *)&pxlo[2].iSrcType;
    NearestFromPalentryNoExactMatchFirst = XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(
                                             (XEPALOBJ *)&v29,
                                             (struct tagPALETTEENTRY)v15);
    v26 = *(_QWORD *)&pxlo[2].iSrcType;
    v27 = NearestFromPalentryNoExactMatchFirst;
    if ( (struct PALETTE *)v26 == ppalDefault )
    {
      result = NearestFromPalentryNoExactMatchFirst + 236;
      if ( (unsigned int)v27 < 0xA )
        return v27;
    }
    else
    {
      if ( v14 )
      {
        if ( (*(_DWORD *)(v26 + 24) & 0x100) == 0 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDstDC->flPal & PAL_DC == 0\n",
              1744LL);
          return 0;
        }
        if ( NearestFromPalentryNoExactMatchFirst >= *(_DWORD *)(v26 + 28) )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:cIndex >= pxlo->ppalDstDC->cEntries\n",
              1750LL);
          return 0;
        }
      }
      if ( (pxlo[3].flXlate & 0x1000) != 0 )
        v28 = *(_QWORD *)(v26 + 80);
      else
        v28 = *(_QWORD *)(v26 + 72);
      return *(unsigned __int8 *)(v28 + v27 + 4);
    }
  }
  else
  {
    if ( v14 && !*(_QWORD *)&pxlo[2].iUniq )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\ylateobj.cxx:%d:XLATEOBJ_iXlate:pxlo->ppalDst == NULL\n",
          1771LL);
      return 0;
    }
    v16 = *(_QWORD *)&pxlo[2].iUniq;
    v17 = *(_DWORD *)(v16 + 28) == 0;
    v30 = v16;
    if ( v17 )
      return XEPALOBJ::ulDispatchGFPEFunction(&v30, *(unsigned int *)(v16 + 96), v15);
    else
      return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&v30, (struct tagPALETTEENTRY)v15);
  }
  return result;
}
