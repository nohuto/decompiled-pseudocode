/*
 * XREFs of RtlGetParentLocaleName @ 0x18003C490
 * Callers:
 *     RtlGetNeutralFallback @ 0x18003BF1C (RtlGetNeutralFallback.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18006F51C (_RtlpMuiRegAddNeutralLanguage.c)
 *     LdrpGetParentLangId @ 0x18007E0F4 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x18003B284 (RtlStringCchLengthW.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18003B458 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpNlsGetNameIndex @ 0x18003BB38 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18007C6B4 (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x1800875B0 (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x1800FCE10 (RtlpGetCustomCultureData.c)
 */

NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  ULONG v8; // ebp
  int NameIndex; // eax
  ULONG v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  const WCHAR *v13; // r11
  NTSTATUS result; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !LocaleName )
    return -1073741585;
  if ( !ParentLocaleName || !ParentLocaleName->Buffer )
    return -1073741584;
  if ( (Flags & 0xFFFFFFF9) != 0 )
    return -1073741583;
  v8 = Flags & 4;
  if ( (Flags & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale(LocaleName)
    || (v16 = Flags >> 1,
        LOBYTE(v15) = AllocateDestinationString,
        LOBYTE(v16) = (Flags & 2) != 0,
        result = RtlpGetCustomCultureData(LocaleName, v16, v15, ParentLocaleName),
        result < 0) )
  {
    if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
      return -1073741823;
    NameIndex = RtlpNlsGetNameIndex((__int64)LocaleName);
    v10 = Flags & 2;
    if ( NameIndex < 0 )
      goto LABEL_27;
    if ( !v10 )
    {
      _mm_lfence();
      if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                     * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                     + *(_QWORD *)(pTblPtrs + 8)
                     + 24LL) & 1) == 0 )
        return -1073741585;
    }
    _mm_lfence();
    v11 = *(unsigned __int16 *)(pTblPtrs + 48) * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
    v12 = *(_QWORD *)(pTblPtrs + 32) + 2LL;
    if ( v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(pTblPtrs + 8) + 184) )
    {
      if ( (int)RtlStringCchLengthW(
                  (_WORD *)(v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(pTblPtrs + 8) + 184)),
                  0x55uLL,
                  &v19) < 0 )
        return -1073741823;
      return RtlpInitUnicodeStringUsingBuffer(AllocateDestinationString, v13, v19, ParentLocaleName);
    }
    else
    {
LABEL_27:
      if ( !v8 || !(unsigned __int8)RtlpIsCustomLocale(LocaleName) )
        return -1073741585;
      LOBYTE(v18) = AllocateDestinationString;
      LOBYTE(v17) = v10 != 0;
      return RtlpGetCustomCultureData(LocaleName, v17, v18, ParentLocaleName);
    }
  }
  return result;
}
