/*
 * XREFs of ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x180386668
 * Callers:
 *     ?KeyDown@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z @ 0x180386510 (-KeyDown@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?_GetNavDirFromKey@CSwitchItemGrid@@AEAAIIW4ModifierKeys@@@Z @ 0x1803875FC (-_GetNavDirFromKey@CSwitchItemGrid@@AEAAIIW4ModifierKeys@@@Z.c)
 *     ?KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x18038D510 (-KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001B8E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x18008E146 (GetThreadUILanguage_0.c)
 */

__int64 __fastcall ElementHelpers::MapToChildNavDir(ElementHelpers *this)
{
  LANGID v2; // ax
  LANGID ThreadUILanguage_0; // ax

  switch ( (_DWORD)this )
  {
    case 1:
      goto LABEL_7;
    case 2:
      goto LABEL_11;
    case 3:
      ThreadUILanguage_0 = GetThreadUILanguage_0();
      LODWORD(this) = 8 - ((unsigned int)IsBiDiLocale(ThreadUILanguage_0) != 0);
      return (unsigned int)this;
    case 4:
      v2 = GetThreadUILanguage_0();
      LODWORD(this) = ((unsigned int)IsBiDiLocale(v2) != 0) + 7;
      return (unsigned int)this;
    case 5:
LABEL_11:
      LODWORD(this) = 7;
      return (unsigned int)this;
    case 6:
LABEL_7:
      LODWORD(this) = 8;
      break;
  }
  return (unsigned int)this;
}
