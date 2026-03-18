/*
 * XREFs of _CALL_LPK@4 @ 0xBC83A
 * Callers:
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     ?xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z @ 0x1A0DCF (-xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z.c)
 *     ?xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z @ 0x1A0FFC (-xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z.c)
 *     ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9 (-xxxDrawItemUnderline@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z.c)
 *     ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277 (-xxxDrawMenuItemText@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     _xxxPSMTextOut@24 @ 0x1AF136 (_xxxPSMTextOut@24.c)
 *     ?DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z @ 0x1B7CFE (-DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z @ 0x1B7D8B (-DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z.c)
 *     _xxxPSMGetTextExtent@16 @ 0x1B98EB (_xxxPSMGetTextExtent@16.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall CALL_LPK(int this)
{
  return (*(_BYTE *)(*(_DWORD *)(this + 232) + 412) & 0xF) != 0 && (*(_BYTE *)(this + 264) & 1) == 0 && this != _gptiRit;
}
