/*
 * XREFs of ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140372774
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x140372644 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1403C68CC (DownLevelLanguageNameToLangID.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNeutralLanguageItem(const struct CultureDataType *a1)
{
  return *((_DWORD *)a1 + 3) == 124 && *((_WORD *)a1 + 4) != 127;
}
