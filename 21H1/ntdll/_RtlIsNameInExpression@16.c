/*
 * XREFs of _RtlIsNameInExpression@16 @ 0x4B361340
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlIsNameInExpression@16 @ 0x4B361340 (_RtlIsNameInExpression@16.c)
 *     _RtlpIsNameInExpressionPrivate@20 @ 0x4B361483 (_RtlpIsNameInExpressionPrivate@20.c)
 *     _RtlpUpcaseUnicodeStringPrivate@12 @ 0x4B3618DC (_RtlpUpcaseUnicodeStringPrivate@12.c)
 */

BOOLEAN __cdecl RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v4; // ecx
  NTSTATUS v5; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  _UNICODE_STRING UnicodeString; // [esp+10h] [ebp-24h] BYREF
  BOOLEAN v9; // [esp+1Bh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v9 = 0;
  if ( !IgnoreCase || UpcaseTable )
  {
    UnicodeString.Buffer = 0;
  }
  else
  {
    v5 = RtlpUpcaseUnicodeStringPrivate(v4);
    if ( v5 < 0 )
      RtlRaiseStatus(v5);
    IgnoreCase = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(IgnoreCase, 0, UpcaseTable);
  v9 = IsNameInExpressionPrivate;
  ms_exc.registration.TryLevel = -2;
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
