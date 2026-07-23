/*
 * XREFs of _RtlGetParentLocaleName@16 @ 0x4B2D41A0
 * Callers:
 *     _LdrpGetParentLangId@8 @ 0x4B2A8888 (_LdrpGetParentLangId@8.c)
 *     __RtlpMuiRegAddNeutralLanguage@12 @ 0x4B2ACADE (__RtlpMuiRegAddNeutralLanguage@12.c)
 *     RtlGetNeutralFallback @ 0x4B2D4663 (RtlGetNeutralFallback.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x4B2D5B2E (RtlStringLengthWorkerW.c)
 *     _RtlpInitUnicodeStringUsingBuffer@16 @ 0x4B2D5B73 (_RtlpInitUnicodeStringUsingBuffer@16.c)
 *     _RtlpNlsGetNameIndex@4 @ 0x4B2D5C90 (_RtlpNlsGetNameIndex@4.c)
 *     _RtlpIsCustomLocale@4 @ 0x4B2D92D8 (_RtlpIsCustomLocale@4.c)
 *     _RtlpLoadNlsData@0 @ 0x4B2EA1FB (_RtlpLoadNlsData@0.c)
 *     _RtlpGetCustomCultureData@16 @ 0x4B3631F6 (_RtlpGetCustomCultureData@16.c)
 */

NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  int v4; // edi
  int NameIndex; // eax
  int v6; // edi
  int v7; // ecx
  NTSTATUS result; // eax
  int v9; // [esp+10h] [ebp-8h] BYREF
  ULONG v10; // [esp+14h] [ebp-4h]

  if ( !LocaleName )
    return -1073741585;
  if ( !ParentLocaleName || !ParentLocaleName->Buffer )
    return -1073741584;
  if ( (Flags & 0xFFFFFFF9) != 0 )
    return -1073741583;
  v10 = Flags & 4;
  if ( (Flags & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale(LocaleName)
    || (result = RtlpGetCustomCultureData(AllocateDestinationString, ParentLocaleName), result < 0) )
  {
    v4 = pTblPtrs;
    if ( !pTblPtrs )
    {
      if ( !(unsigned __int8)RtlpLoadNlsData() )
        return -1073741823;
      v4 = pTblPtrs;
    }
    NameIndex = RtlpNlsGetNameIndex(LocaleName);
    if ( NameIndex >= 0 )
    {
      if ( (Flags & 2) == 0 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(v4 + 28)
                       * *(unsigned __int16 *)(*(_DWORD *)(v4 + 16) + 8 * NameIndex + 2)
                       + *(_DWORD *)(v4 + 8)
                       + 24) & 1) == 0 )
          return -1073741585;
      }
      _mm_lfence();
      v6 = *(_DWORD *)(v4 + 20)
         + 2
         * (*(_DWORD *)(*(unsigned __int16 *)(v4 + 28) * *(unsigned __int16 *)(*(_DWORD *)(v4 + 16) + 8 * NameIndex + 2)
                      + *(_DWORD *)(v4 + 8)
                      + 184)
          + 1);
      if ( v6 )
      {
        if ( (int)RtlStringLengthWorkerW(&v9) >= 0 )
        {
          LOBYTE(v7) = AllocateDestinationString;
          return RtlpInitUnicodeStringUsingBuffer(v7, v6, v9, ParentLocaleName);
        }
        return -1073741823;
      }
    }
    if ( !v10 || !(unsigned __int8)RtlpIsCustomLocale(LocaleName) )
      return -1073741585;
    return RtlpGetCustomCultureData(AllocateDestinationString, ParentLocaleName);
  }
  return result;
}
