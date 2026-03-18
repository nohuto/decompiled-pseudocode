/*
 * XREFs of ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E
 * Callers:
 *     _GreFontIsLinked@4 @ 0x84558 (_GreFontIsLinked@4.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z @ 0x88306 (-vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z.c)
 *     _cjIFIMetricsToOTMW@24 @ 0x89FBE (_cjIFIMetricsToOTMW@24.c)
 *     ?vIFIMetricsToETM@@YGXPAU_EXTTEXTMETRIC@@AAVRFONTOBJ@@AAVDCOBJ@@PAU_IFIMETRICS@@@Z @ 0x206A4E (-vIFIMetricsToETM@@YGXPAU_EXTTEXTMETRIC@@AAVRFONTOBJ@@AAVDCOBJ@@PAU_IFIMETRICS@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z @ 0x206DB5 (-ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ?fwdExternalLeading@IFIOBJ@@QBEFXZ @ 0x896E6 (-fwdExternalLeading@IFIOBJ@@QBEFXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE (-ulLogPixelsX@PDEVOBJ@@QAEKXZ.c)
 */

IFIOBJR *__thiscall IFIOBJR::IFIOBJR(
        IFIOBJR *this,
        const struct _IFIMETRICS *a2,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4)
{
  struct RFONTOBJ *v5; // esi
  int *v6; // ecx
  int v7; // eax
  const struct _IFIMETRICS *v8; // edx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v13; // eax
  bool v14; // cc
  int v15; // eax
  char *v16; // edi
  int v17; // esi
  int v18; // [esp+Ch] [ebp-8h]
  int v19; // [esp+10h] [ebp-4h]

  v5 = a3;
  *(_DWORD *)this = a2;
  v6 = (int *)((char *)a2 + a2->dpFontSim);
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12) & 0x6000;
  switch ( v7 )
  {
    case 0:
      *((_BYTE *)this + 15) = a2->panose.bWeight;
      *((_WORD *)this + 8) = a2->usWinWeight;
      *((_WORD *)this + 9) = a2->fsSelection;
      *((_WORD *)this + 10) = a2->fwdAveCharWidth;
      *((_WORD *)this + 11) = a2->fwdMaxCharInc;
      *((POINTL *)this + 3) = a2->ptlCaret;
      break;
    case 8192:
      v16 = (char *)this + 12;
      if ( (a2->fsSelection & 1) == 0 )
      {
        v17 = *v6;
LABEL_15:
        qmemcpy(v16, (char *)v6 + v17, 0x14u);
        v5 = a3;
        break;
      }
LABEL_16:
      v17 = v6[2];
      goto LABEL_15;
    case 16384:
      v16 = (char *)this + 12;
      if ( (a2->fsSelection & 0x20) == 0 )
      {
        v17 = v6[1];
        goto LABEL_15;
      }
      goto LABEL_16;
    case 24576:
      v17 = v6[2];
      v16 = (char *)this + 12;
      goto LABEL_15;
  }
  v19 = *((__int16 *)this + 10);
  *((_DWORD *)this + 9) = v19;
  v18 = *((__int16 *)this + 11);
  *((_DWORD *)this + 8) = v18;
  v9 = IFIOBJ::fwdExternalLeading(this);
  *((_DWORD *)this + 11) = v9;
  v10 = (__int16)(v8->fwdWinAscender + v8->fwdWinDescender - v8->fwdUnitsPerEm);
  *((_DWORD *)this + 10) = v10;
  if ( (v8->flInfo & 0x3000010) == 0 )
  {
    v13 = *(_DWORD *)v5;
    v14 = *(_DWORD *)(*(_DWORD *)v5 + 648) <= 1;
    a3 = *(struct RFONTOBJ **)(*(_DWORD *)v5 + 648);
    v8 = a2;
    if ( !v14 )
    {
      *((_DWORD *)this + 9) = (_DWORD)a3 * v19;
      *((_DWORD *)this + 8) = (_DWORD)a3 * v18;
      v13 = *(_DWORD *)v5;
    }
    v15 = *(_DWORD *)(v13 + 652);
    if ( v15 > 1 )
    {
      *((_DWORD *)this + 11) = v15 * v9;
      *((_DWORD *)this + 10) = v15 * v10;
    }
  }
  if ( (v8->flInfo & 1) != 0 )
  {
    a3 = *(struct RFONTOBJ **)(*(_DWORD *)a4 + 36);
    *((_DWORD *)this + 12) = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a3);
    v11 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a3);
  }
  else
  {
    *((_DWORD *)this + 12) = v8->ptlAspect.y * *(_DWORD *)(*(_DWORD *)v5 + 652);
    v11 = v8->ptlAspect.x * *(_DWORD *)(*(_DWORD *)v5 + 648);
  }
  *((_DWORD *)this + 13) = v11;
  return this;
}
