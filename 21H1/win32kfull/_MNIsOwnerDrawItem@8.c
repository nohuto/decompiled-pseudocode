/*
 * XREFs of _MNIsOwnerDrawItem@8 @ 0x1A99A0
 * Callers:
 *     ?MBC_RightJustifyMenu@@YGXABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0xB6AC2 (-MBC_RightJustifyMenu@@YGXABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 */

BOOL __fastcall MNIsOwnerDrawItem(_DWORD *a1, _DWORD **a2)
{
  BOOL result; // eax

  if ( (**a2 & 0x100) != 0 )
    return 1;
  result = MNIsUAHMenu(a1);
  if ( result )
    return 1;
  return result;
}
