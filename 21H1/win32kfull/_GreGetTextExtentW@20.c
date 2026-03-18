/*
 * XREFs of _GreGetTextExtentW@20 @ 0xE26D8
 * Callers:
 *     _GetCharDimensions@12 @ 0xB5416 (_GetCharDimensions@12.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _FinalUserInit@0 @ 0xD6A7A (_FinalUserInit@0.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     ?PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z @ 0x18512F (-PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z @ 0x1A0DCF (-xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9 (-xxxDrawItemUnderline@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     _xxxPSMTextOut@24 @ 0x1AF136 (_xxxPSMTextOut@24.c)
 *     ?DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z @ 0x1B7D8B (-DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YGHPAUHDC__@@PBGPAHPAUDRAWTEXTDATA@@I3H@Z @ 0x1B8097 (-NeedsEndEllipsis@@YGHPAUHDC__@@PBGPAHPAUDRAWTEXTDATA@@I3H@Z.c)
 *     _xxxPSMGetTextExtent@16 @ 0x1B98EB (_xxxPSMGetTextExtent@16.c)
 *     _NtGdiGetTextExtent@20 @ 0x2132A6 (_NtGdiGetTextExtent@20.c)
 *     _GreGetCharacterPlacementW@24 @ 0x2221E7 (_GreGetCharacterPlacementW@24.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ?bToPOINTL@EPOINTFL@@QAEHAAU_POINTL@@@Z @ 0x22DC0 (-bToPOINTL@EPOINTFL@@QAEHAAU_POINTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QBEXPAGI@Z @ 0x881A8 (-vFixUpGlyphIndices@RFONTOBJ@@QBEXPAGI@Z.c)
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z @ 0xE2810 (-bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     ??1ESTROBJ@@QAE@XZ @ 0xF7084 (--1ESTROBJ@@QAE@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QAEHAAVRFONTOBJ@@JPAUtagSIZE@@@Z @ 0xF85EB (-bTextExtent@ESTROBJ@@QAEHAAVRFONTOBJ@@JPAUtagSIZE@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bUseMetaPtoD@DC@@QBEHXZ @ 0x1F4EE2 (-bUseMetaPtoD@DC@@QBEHXZ.c)
 */

int __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  int v5; // edi
  int v6; // esi
  int v7; // esi
  int v9; // esi
  LONG cy; // esi
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // [esp+10h] [ebp-190h] BYREF
  unsigned __int16 *v14; // [esp+14h] [ebp-18Ch] BYREF
  int v15; // [esp+18h] [ebp-188h]
  DC *v16[3]; // [esp+1Ch] [ebp-184h] BYREF
  unsigned int v17; // [esp+28h] [ebp-178h]
  int v18; // [esp+2Ch] [ebp-174h]
  int *v19[3]; // [esp+30h] [ebp-170h] BYREF
  _DWORD v20[2]; // [esp+3Ch] [ebp-164h] BYREF
  _DWORD v21[2]; // [esp+44h] [ebp-15Ch] BYREF
  _BYTE v22[60]; // [esp+4Ch] [ebp-154h] BYREF
  _BYTE v23[276]; // [esp+88h] [ebp-118h] BYREF

  v14 = a2;
  v17 = a3;
  v5 = 0;
  if ( a3 )
  {
    memset(v16, 0, sizeof(v16));
    XDCOBJ::vLock((XDCOBJ *)v16, a1);
    if ( v16[0] )
    {
      v13 = 0;
      if ( RFONTOBJ::bInit((RFONTOBJ *)&v13, (struct XDCOBJ *)v16, 0, 2 * ((a5 & 2) != 0) + 2) )
        GreAcquireSemaphore(*(_DWORD *)(v13 + 548));
      v6 = v13;
      if ( v13 )
      {
        if ( (*(_BYTE *)(v13 + 56) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v13, v14, v17);
        v18 = *((_DWORD *)v16[0] + 390);
        if ( v18 == *(_DWORD *)(v6 + 396) || *(_DWORD *)(v6 + 184) == 1 && (*(_BYTE *)(v6 + 712) & 4) == 0 )
        {
          v7 = v18;
          v5 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v13,
                 (struct XDCOBJ *)v16,
                 v14,
                 v17,
                 v18,
                 *(_DWORD *)(*((_DWORD *)v16[0] + 255) + 288),
                 *(_DWORD *)(*((_DWORD *)v16[0] + 255) + 292),
                 *(_DWORD *)(*((_DWORD *)v16[0] + 255) + 296),
                 a5,
                 a4);
          if ( v5
            && v7
            && *(_DWORD *)(*((_DWORD *)v16[0] + 255) + 228) == 1
            && !DC::bUseMetaPtoD(v16[0])
            && (*(_BYTE *)(v13 + 712) & 4) != 0 )
          {
            cy = a4->cy;
            ltoef_c(a4->cx, v20);
            ltoef_c(cy, v21);
            ltoef_c(v18, &v14);
            EFLOATEXT::operator/=(&v14, 10);
            memset(v22, 0, sizeof(v22));
            v11 = efCos(v14, v15);
            *(_QWORD *)v22 = v11;
            if ( (int)v11 < 0 )
            {
              EFLOAT::vNegate((EFLOAT *)v22);
              v11 = *(_QWORD *)v22;
            }
            *(_QWORD *)&v22[24] = v11;
            v12 = efSin(v14, v15);
            *(_QWORD *)&v22[8] = v12;
            if ( (int)v12 < 0 )
            {
              EFLOAT::vNegate((EFLOAT *)&v22[8]);
              v12 = *(_QWORD *)&v22[8];
            }
            *(_QWORD *)&v22[16] = v12;
            memset(&v22[32], 0, 16);
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v19, (struct MATRIX *)v22, 0x21u);
            v5 = 1;
            if ( (v19[0][14] & 2) == 0 )
              v5 = EXFORMOBJ::bXform((EXFORMOBJ *)v19, (struct VECTORFL *)v20, (struct VECTORFL *)v20, 1u);
            if ( v5 )
            {
              if ( v20[0] < 0 )
                EFLOAT::vNegate((EFLOAT *)v20);
              if ( v21[0] < 0 )
                EFLOAT::vNegate((EFLOAT *)v21);
              v5 = EPOINTFL::bToPOINTL((EPOINTFL *)v20, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v16, 516);
          v9 = v18;
          ESTROBJ::vInit(
            (ESTROBJ *)v23,
            v14,
            v17,
            (struct XDCOBJ *)v16,
            (struct RFONTOBJ *)&v13,
            v19,
            0,
            0,
            v18,
            *(_QWORD *)(*((_DWORD *)v16[0] + 255) + 288),
            *(_DWORD *)(*((_DWORD *)v16[0] + 255) + 296),
            0,
            0,
            0,
            0,
            0,
            0);
          if ( (v23[192] & 4) != 0 )
            v5 = ESTROBJ::bTextExtent((ESTROBJ *)v23, (struct RFONTOBJ *)&v13, v9, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v23);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
      if ( v16[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v16);
    }
  }
  else
  {
    a4->cx = 0;
    a4->cy = 0;
    return 1;
  }
  return v5;
}
