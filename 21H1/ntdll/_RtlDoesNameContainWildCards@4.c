/*
 * XREFs of _RtlDoesNameContainWildCards@4 @ 0x4B3612F0
 * Callers:
 *     _RtlpIsNameInExpressionPrivate@20 @ 0x4B361483 (_RtlpIsNameInExpressionPrivate@20.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesNameContainWildCards(PUNICODE_STRING Expression)
{
  unsigned int Length; // ecx
  wchar_t *Buffer; // edx
  wchar_t *i; // ecx
  unsigned int v4; // eax

  Length = Expression->Length;
  if ( (_WORD)Length )
  {
    Buffer = Expression->Buffer;
    for ( i = &Buffer[(Length >> 1) - 1]; i >= Buffer; --i )
    {
      v4 = *i;
      if ( v4 == 92 )
        break;
      if ( v4 < 0x40 && (byte_4B2A3660[v4] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
