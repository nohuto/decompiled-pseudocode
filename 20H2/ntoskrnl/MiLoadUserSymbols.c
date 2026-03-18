/*
 * XREFs of MiLoadUserSymbols @ 0x1407CCB5C
 * Callers:
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1402A039C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     DbgUnicodeStringToAnsiString @ 0x140371964 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadUserImageSymbols @ 0x1403CC1C8 (DbgLoadUserImageSymbols.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 */

void __fastcall MiLoadUserSymbols(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r15d
  int v10; // r12d
  int v11; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF

  UnicodeString = 0LL;
  v6 = MiReferenceControlAreaFile(a1);
  v7 = v6;
  if ( *(_WORD *)(v6 + 88) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    v9 = *(_DWORD *)(v8 + 68);
    v10 = *(_DWORD *)(v8 + 60);
    v11 = DbgUnicodeStringToAnsiString((PANSI_STRING)&UnicodeString, (PCUNICODE_STRING)(v6 + 88));
    MiDereferenceControlAreaFile(a1, v7);
    if ( v11 == 1 )
    {
      DbgLoadUserImageSymbols((__int64)&UnicodeString, a2, a3, v9, v10);
      RtlFreeAnsiString(&UnicodeString);
    }
  }
  else
  {
    MiDereferenceControlAreaFile(a1, v6);
  }
}
