/*
 * XREFs of RtlIsNameInExpression @ 0x1402E5170
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402E48A4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x1405BFFF0 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140267FCC (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1402E4C80 (RtlpIsNameInExpressionPrivate.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 */

BOOLEAN __stdcall RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  NTSTATUS v6; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate((__int64)&UnicodeString, &Name->Length);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(
                                &Expression->Length,
                                &Name->Length,
                                IgnoreCase,
                                0,
                                (__int64)UpcaseTable);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
