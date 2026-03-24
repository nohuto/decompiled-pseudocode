/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x1403ACCF4
 * Callers:
 *     LdrpGetParentLangId @ 0x1402A994C (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x14068C140 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x140793140 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1409116C0 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5F7C0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1403A7960 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1403D2480 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140002590, 0x1B4uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_140003330)[2 * word_14001F660[(v3 - (_BYTE *)&off_140002590) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
