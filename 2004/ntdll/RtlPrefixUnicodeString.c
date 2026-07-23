/*
 * XREFs of RtlPrefixUnicodeString @ 0x180015F60
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180075400 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpDetermineDosPathNameType4 @ 0x1800778C4 (RtlpDetermineDosPathNameType4.c)
 *     RtlNtPathNameToDosPathName @ 0x1800CC320 (RtlNtPathNameToDosPathName.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CD5F0 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 */

BOOLEAN __cdecl RtlPrefixUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  wchar_t *Buffer; // r10
  wchar_t *v5; // r11
  char *v6; // rbx
  __int64 v7; // rcx
  unsigned __int16 *v9; // r10
  __int16 v10; // ax
  __int16 v11; // r9
  char *v12; // rcx

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= (unsigned __int16)Length )
  {
    v5 = (wchar_t *)((char *)Buffer + Length);
    if ( Buffer >= (wchar_t *)((char *)Buffer + Length) )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v7 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v6);
        if ( *Buffer != (_WORD)v7 )
        {
          NLS_UPCASE(v7);
          v10 = NLS_UPCASE(*v9);
          if ( v10 != v11 )
            break;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    else
    {
      v12 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v12) )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
