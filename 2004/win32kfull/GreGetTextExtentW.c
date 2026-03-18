/*
 * XREFs of GreGetTextExtentW @ 0x1C000C3CC
 * Callers:
 *     GetCharDimensions @ 0x1C000C0C8 (GetCharDimensions.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223C70 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0243B2C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024D04C (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024F928 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxPSMTextOut @ 0x1C02540DC (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025F73C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1C025FAE0 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C0261844 (xxxPSMGetTextExtent.c)
 *     NtGdiGetTextExtent @ 0x1C02AF980 (NtGdiGetTextExtent.c)
 *     GreGetCharacterPlacementW @ 0x1C02BC170 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C000C544 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007D260 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00DCFAC (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00E21D4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C012C240 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C012C660 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0132CC4 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C015AAD4 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C015BA94 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall GreGetTextExtentW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct tagSIZE *a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  _DWORD *v9; // r11
  int v10; // esi
  float cy; // xmm1_4
  __m128i v13; // xmm0
  __int64 v14; // [rsp+98h] [rbp-80h] BYREF
  float cx; // [rsp+A0h] [rbp-78h] BYREF
  float v16; // [rsp+A4h] [rbp-74h] BYREF
  DC *v17[2]; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+B8h] [rbp-60h] BYREF
  int v19; // [rsp+C8h] [rbp-50h] BYREF
  __int128 v20; // [rsp+CCh] [rbp-4Ch] BYREF
  __int128 v21; // [rsp+DCh] [rbp-3Ch]
  _BYTE v22[320]; // [rsp+F8h] [rbp-20h] BYREF

  v8 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    if ( v17[0] )
    {
      v14 = 0LL;
      if ( RFONTOBJ::bInit((RFONTOBJ *)&v14, (struct XDCOBJ *)v17, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
      v9 = (_DWORD *)v14;
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 84) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v14, a2, a3);
        v10 = *((_DWORD *)v17[0] + 435);
        if ( v10 == v9[98] || v9[52] == 1 && (v9[179] & 4) == 0 )
        {
          v8 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v14,
                 (struct XDCOBJ *)v17,
                 a2,
                 a3,
                 v10,
                 *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 280LL),
                 *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 284LL),
                 *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 288LL),
                 a5,
                 a4);
          if ( v8
            && v10
            && *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 208LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v17[0])
            && (*(_DWORD *)(v14 + 716) & 4) != 0 )
          {
            cy = (float)a4->cy;
            cx = (float)a4->cx;
            v13 = (__m128i)COERCE_UNSIGNED_INT((float)v10);
            v16 = cy;
            *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 / 10.0;
            v20 = 0LL;
            v21 = 0LL;
            v19 = efCos((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)&v19);
            DWORD2(v20) = v19;
            LODWORD(v20) = efSin((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)&v20);
            HIDWORD(v20) = 0;
            LODWORD(v21) = 0;
            DWORD1(v20) = v20;
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v18, (struct MATRIX *)&v19, 0x21u);
            v8 = 1;
            if ( (*(_DWORD *)(v18[0] + 32LL) & 2) == 0 )
              v8 = EXFORMOBJ::bXform((EXFORMOBJ *)v18, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
            if ( v8 )
            {
              EFLOAT::vAbs((EFLOAT *)&cx);
              EFLOAT::vAbs((EFLOAT *)&v16);
              v8 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v17, 0x204u);
          ESTROBJ::vInit(
            (ESTROBJ *)v22,
            a2,
            a3,
            (struct XDCOBJ *)v17,
            (struct RFONTOBJ *)&v14,
            (struct EXFORMOBJ *)v18,
            0LL,
            0,
            v10,
            *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 280LL),
            *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 284LL),
            *(_DWORD *)(*((_QWORD *)v17[0] + 122) + 288LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v22[232] & 4) != 0 )
            v8 = ESTROBJ::bTextExtent((ESTROBJ *)v22, (struct RFONTOBJ *)&v14, v10, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v22);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
      if ( v17[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v17);
    }
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v8;
}
