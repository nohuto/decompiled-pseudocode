/*
 * XREFs of RtlAreNamesEqual @ 0x140322AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140203258 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 */

BOOLEAN __stdcall RtlAreNamesEqual(
        PCUNICODE_STRING ConstantNameA,
        PCUNICODE_STRING ConstantNameB,
        BOOLEAN IgnoreCase,
        PCWCH UpcaseTable)
{
  unsigned int Length; // eax
  char v5; // di
  UNICODE_STRING *v6; // rbx
  unsigned int v7; // r10d
  __int64 v8; // rax
  NTSTATUS v10; // eax
  int v11; // eax
  NTSTATUS v12; // ebx
  BOOLEAN v13; // bl
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v15; // [rsp+30h] [rbp-18h] BYREF

  Length = ConstantNameA->Length;
  v5 = 0;
  v6 = (UNICODE_STRING *)ConstantNameB;
  UnicodeString = 0LL;
  v15 = 0LL;
  if ( (_WORD)Length != ConstantNameB->Length )
    return 0;
  v7 = Length >> 1;
  if ( IgnoreCase )
  {
    if ( UpcaseTable )
    {
      v8 = 0LL;
      if ( !v7 )
        return 1;
      while ( UpcaseTable[ConstantNameA->Buffer[v8]] == UpcaseTable[ConstantNameB->Buffer[v8]] )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          return 1;
      }
      return 0;
    }
    v10 = RtlpUpcaseUnicodeStringPrivate((__int64)&UnicodeString, &ConstantNameA->Length);
    if ( v10 < 0 )
      RtlRaiseStatus(v10);
    v11 = RtlpUpcaseUnicodeStringPrivate((__int64)&v15, &v6->Length);
    ConstantNameA = &UnicodeString;
    v12 = v11;
    if ( v11 < 0 )
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlRaiseStatus(v12);
    }
    LOWORD(Length) = UnicodeString.Length;
    v6 = &v15;
    v5 = 1;
  }
  v13 = memcmp(ConstantNameA->Buffer, v6->Buffer, (unsigned __int16)Length) == 0;
  if ( v5 )
  {
    RtlFreeAnsiString(&UnicodeString);
    RtlFreeAnsiString(&v15);
  }
  return v13;
}
