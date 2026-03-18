/*
 * XREFs of ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1403A4520
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x140362394 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1403B4330 (DownLevelLanguageNameToLangID.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNeutralLanguageItem(const struct CultureDataType *a1)
{
  return *((_DWORD *)a1 + 3) == 124 && *((_WORD *)a1 + 4) != 127;
}
