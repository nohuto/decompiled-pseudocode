/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x1402FBF40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140203258 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1402FBFF0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 */

BOOLEAN __cdecl RtlIsNameInUnUpcasedExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  PWCH v4; // rbx
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-18h] BYREF

  v4 = UpcaseTable;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v11.Buffer = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate((__int64)&UnicodeString, &Name->Length);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v7 = RtlpUpcaseUnicodeStringPrivate((__int64)&v11, &Expression->Length);
    if ( v7 < 0 )
      RtlRaiseStatus(v7);
    Name = &UnicodeString;
    Expression = &v11;
    IgnoreCase = 0;
  }
  LOBYTE(UpcaseTable) = 1;
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(
                                (_DWORD)Expression,
                                (_DWORD)Name,
                                IgnoreCase,
                                (_DWORD)UpcaseTable,
                                (__int64)v4);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( v11.Buffer )
    RtlFreeAnsiString(&v11);
  return IsNameInExpressionPrivate;
}
