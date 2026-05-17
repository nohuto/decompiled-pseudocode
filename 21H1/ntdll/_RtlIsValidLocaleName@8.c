/*
 * XREFs of _RtlIsValidLocaleName@8 @ 0x4B3630F0
 * Callers:
 *     _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700 (_RtlGetUserPreferredUILanguages@20.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 *     _RtlUnicodeStringToLcid@8 @ 0x4B352FCF (_RtlUnicodeStringToLcid@8.c)
 * Callees:
 *     _RtlpNlsGetNameIndex@4 @ 0x4B2D5C90 (_RtlpNlsGetNameIndex@4.c)
 *     _RtlpIsCustomLocale@4 @ 0x4B2D92D8 (_RtlpIsCustomLocale@4.c)
 *     _RtlpLoadNlsData@0 @ 0x4B2EA1FB (_RtlpLoadNlsData@0.c)
 *     _RtlpGetCustomCultureData@16 @ 0x4B3631F6 (_RtlpGetCustomCultureData@16.c)
 */

char __stdcall RtlIsValidLocaleName(unsigned __int16 *SourceString, int a2)
{
  int v2; // esi
  int NameIndex; // eax

  if ( !SourceString || (a2 & 0xFFFFFFFD) != 0 )
    return 0;
  v2 = pTblPtrs;
  if ( !pTblPtrs )
  {
    if ( !RtlpLoadNlsData() )
      return 0;
    v2 = pTblPtrs;
  }
  NameIndex = RtlpNlsGetNameIndex(SourceString);
  if ( NameIndex < 0 )
  {
    if ( !RtlpIsCustomLocale(SourceString) || (a2 & 2) == 0 && (int)RtlpGetCustomCultureData(0, 0) < 0 )
      return 0;
  }
  else if ( (a2 & 2) == 0 )
  {
    _mm_lfence();
    if ( (*(_BYTE *)(*(unsigned __int16 *)(v2 + 28) * *(unsigned __int16 *)(*(_DWORD *)(v2 + 16) + 8 * NameIndex + 2)
                   + *(_DWORD *)(v2 + 8)
                   + 24) & 1) == 0 )
      return 0;
  }
  return 1;
}
