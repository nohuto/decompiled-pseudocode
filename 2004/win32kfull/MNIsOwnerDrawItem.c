/*
 * XREFs of MNIsOwnerDrawItem @ 0x1C00AECA0
 * Callers:
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C005EFC0 (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0063530 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024F928 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C00AF118 (MNIsUAHMenu.c)
 */

__int64 __fastcall MNIsOwnerDrawItem(__int64 a1, _DWORD **a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ecx

  if ( (**a2 & 0x100) != 0 )
    return 1;
  v4 = MNIsUAHMenu(a1, a2, a3, a4);
  v5 = 0;
  if ( v4 )
    return 1;
  return v5;
}
