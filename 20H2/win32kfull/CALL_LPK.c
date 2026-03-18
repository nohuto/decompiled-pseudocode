/*
 * XREFs of CALL_LPK @ 0x1C014E024
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionTemp @ 0x1C014DC4C (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C024288C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0242B4C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BA44 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BC0C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E320 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxPSMTextOut @ 0x1C0252ACC (xxxPSMTextOut.c)
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025DFF8 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025E128 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C0260224 (xxxPSMGetTextExtent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CALL_LPK(__int64 a1)
{
  unsigned int v1; // edx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 760LL) & 0xF) == 0 )
    return 0;
  v1 = 1;
  if ( (*(_DWORD *)(a1 + 488) & 1) != 0 || a1 == gptiRit )
    return 0;
  return v1;
}
