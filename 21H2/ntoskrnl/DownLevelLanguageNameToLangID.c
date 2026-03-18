/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x1403C68CC
 * Callers:
 *     LdrpGetParentLangId @ 0x140389D88 (LdrpGetParentLangId.c)
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x140830F20 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1409B7260 (RtlLoadString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B146C4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x140372774 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v4; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_1400036D0, 0x1B4uLL, 8uLL, CompareLangName)) != 0LL
    && ((v4 = &(&off_140004470)[2 * word_1400257C0[(v3 - (_BYTE *)&off_1400036D0) >> 3]], (v2 & 2) != 0)
     || !IsNeutralLanguageItem((const struct CultureDataType *)v4)) )
  {
    return *((unsigned __int16 *)v4 + 4);
  }
  else
  {
    return 0LL;
  }
}
