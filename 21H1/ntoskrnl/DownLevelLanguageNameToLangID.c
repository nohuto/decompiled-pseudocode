/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x1403B4330
 * Callers:
 *     LdrpGetParentLangId @ 0x140362324 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x1406FAE00 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x1407950A0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x14090D030 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A59BB4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1403A4520 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1403CE040 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140002F80, 0x1B4uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_140003D20)[2 * word_14001F560[(v3 - (_BYTE *)&off_140002F80) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
