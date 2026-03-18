/*
 * XREFs of MNIsOwnerDrawItem @ 0x1C003583C
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0034BC0 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00356B4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C003806C (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E320 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 */

__int64 __fastcall MNIsOwnerDrawItem(__int64 a1, _DWORD **a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ecx

  if ( (**a2 & 0x100) != 0 )
    return 1;
  v3 = MNIsUAHMenu(a1, a2, a3);
  v4 = 0;
  if ( v3 )
    return 1;
  return v4;
}
