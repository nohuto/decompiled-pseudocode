/*
 * XREFs of AcpiParseAnsiString @ 0x1C0033890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AcpiParseAnsiString(__int64 a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  unsigned __int16 v3; // r9
  __int64 v6; // rdx
  _BYTE *v7; // rax
  unsigned __int16 v8; // r8
  __int64 v9; // rcx
  __int16 v10; // r8
  signed int v11; // edx
  struct _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( a3 < 0x10 )
    return -1073741811;
  v6 = *(unsigned __int16 *)(a1 + 2);
  v7 = (_BYTE *)(a1 + 4);
  SourceString.MaximumLength = *(_WORD *)(a1 + 2);
  v8 = 0;
  SourceString.Buffer = (char *)(a1 + 4);
  if ( a1 == -4 )
  {
    v11 = -1073741811;
  }
  else
  {
    v9 = (unsigned int)v6;
    v10 = v6;
    if ( v6 )
    {
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v9;
      }
      while ( v9 );
    }
    v11 = v9 == 0 ? 0xC000000D : 0;
    if ( v9 )
      v8 = v10 - v9;
    else
      v8 = 0;
  }
  if ( v11 >= 0 )
    v3 = v8;
  SourceString.Length = v3;
  return RtlAnsiStringToUnicodeString(a2, &SourceString, 1u);
}
