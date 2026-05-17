/*
 * XREFs of RtlLocaleNameToLcid @ 0x18003BA90
 * Callers:
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x180046FA0 (RtlLoadString.c)
 *     LdrpGetParentLangId @ 0x18007E1F4 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18003BB38 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18007C7B4 (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x1800876B0 (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x1800FD320 (RtlpGetCustomCultureData.c)
 *     RtlpMatchUILanguage @ 0x1800FD69C (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800FD764 (RtlpMatchUserLanguage.c)
 */

__int64 __fastcall RtlLocaleNameToLcid(PCWSTR SourceString, int *a2, int a3)
{
  char v3; // bp
  __int64 v6; // rdi
  int NameIndex; // eax

  v3 = a3;
  if ( !SourceString )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225713LL;
  v6 = pTblPtrs;
  if ( pTblPtrs )
    goto LABEL_5;
  if ( (unsigned __int8)RtlpLoadNlsData() )
  {
    v6 = pTblPtrs;
LABEL_5:
    NameIndex = RtlpNlsGetNameIndex(SourceString);
    if ( NameIndex >= 0 )
    {
      if ( (v3 & 2) != 0
        || (_mm_lfence(),
            v6 = pTblPtrs,
            (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                      * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                      + *(_QWORD *)(pTblPtrs + 8)
                      + 24LL) & 1) != 0) )
      {
        *a2 = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
        return 0LL;
      }
      return 3221225711LL;
    }
    if ( !(unsigned __int8)RtlpIsCustomLocale(SourceString) )
      return 3221225711LL;
    if ( (v3 & 1) != 0 && (unsigned __int8)RtlpMatchUILanguage(SourceString) )
    {
      *a2 = 5120;
      return 0LL;
    }
    if ( (unsigned __int8)RtlpMatchUserLanguage(SourceString) )
    {
      *a2 = 3072;
      return 0LL;
    }
    if ( (v3 & 2) != 0 || (int)RtlpGetCustomCultureData(SourceString, 0LL, 0LL, 0LL) >= 0 )
    {
      *a2 = 4096;
      return 0LL;
    }
  }
  return 3221225473LL;
}
