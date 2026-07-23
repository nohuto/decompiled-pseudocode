/*
 * XREFs of RtlCompareUnicodeStrings @ 0x180015FF0
 * Callers:
 *     ApiSetpSearchForApiSetHost @ 0x180019B88 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpSearchForApiSet @ 0x18001D6F0 (ApiSetpSearchForApiSet.c)
 *     LdrpSearchPath @ 0x18006035C (LdrpSearchPath.c)
 *     LdrpIsSubstringFound @ 0x1800D4284 (LdrpIsSubstringFound.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180106904 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106F14 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 */

LONG __cdecl RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // ebp
  int v7; // ebx
  PCWCH v8; // r10
  const WCHAR *v9; // rdi
  signed __int64 v10; // r11
  unsigned __int16 v12; // r9
  int v13; // esi
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // eax

  v5 = String1Length;
  v6 = String2Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = String1Length;
  v8 = String1;
  v9 = &String1[v5];
  if ( String1 >= v9 )
    return v7 - v6;
  v10 = (char *)String2 - (char *)String1;
  if ( CaseInSensitive )
  {
    while ( 1 )
    {
      if ( *v8 != *(PCWCH)((char *)v8 + v10) )
      {
        v13 = (unsigned __int16)NLS_UPCASE(*v8);
        v14 = NLS_UPCASE(v12);
        if ( (_WORD)v13 != v14 )
          break;
      }
      if ( ++v8 >= v9 )
        return v7 - v6;
    }
    v15 = v14;
    v16 = v13;
  }
  else
  {
    while ( 1 )
    {
      v16 = *v8;
      v15 = *(PCWCH)((char *)v8 + v10);
      if ( (_WORD)v16 != (_WORD)v15 )
        break;
      if ( ++v8 >= v9 )
        return v7 - v6;
    }
  }
  return v16 - v15;
}
