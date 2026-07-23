/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x1403A8368
 * Callers:
 *     LdrpGetParentLangId @ 0x140227A8C (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x1405EBFB0 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x14078EEE0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x140911820 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A607C0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1403A7AB0 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1403D25F0 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140001150, 0x1B4uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_140001EF0)[2 * word_14001F710[(v3 - (_BYTE *)&off_140001150) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
