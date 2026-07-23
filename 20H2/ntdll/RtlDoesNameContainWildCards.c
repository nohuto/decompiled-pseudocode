/*
 * XREFs of RtlDoesNameContainWildCards @ 0x1800FB6C0
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB89C (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesNameContainWildCards(PUNICODE_STRING Expression)
{
  wchar_t *Buffer; // r8
  wchar_t *i; // rdx

  if ( Expression->Length )
  {
    Buffer = Expression->Buffer;
    for ( i = &Buffer[((unsigned __int64)Expression->Length >> 1) - 1]; i >= Buffer && *i != 92; --i )
    {
      if ( *i < 0x40u && (byte_18013E180[*i] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
