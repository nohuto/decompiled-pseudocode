/*
 * XREFs of _RtlIsNameInUnUpcasedExpression@16 @ 0x4B3613D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlIsNameInUnUpcasedExpression@16 @ 0x4B3613D0 (_RtlIsNameInUnUpcasedExpression@16.c)
 *     _RtlpIsNameInExpressionPrivate@20 @ 0x4B361483 (_RtlpIsNameInExpressionPrivate@20.c)
 *     _RtlpUpcaseUnicodeStringPrivate@12 @ 0x4B3618DC (_RtlpUpcaseUnicodeStringPrivate@12.c)
 */

BOOLEAN __cdecl RtlIsNameInUnUpcasedExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v4; // ecx
  NTSTATUS v5; // eax
  int v6; // ecx

  if ( IgnoreCase && !UpcaseTable )
  {
    v5 = RtlpUpcaseUnicodeStringPrivate(v4);
    if ( v5 < 0 || (v5 = RtlpUpcaseUnicodeStringPrivate(v6), v5 < 0) )
      RtlRaiseStatus(v5);
    IgnoreCase = 0;
  }
  return RtlpIsNameInExpressionPrivate(IgnoreCase, 1, UpcaseTable);
}
