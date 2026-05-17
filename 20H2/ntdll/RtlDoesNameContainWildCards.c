/*
 * XREFs of RtlDoesNameContainWildCards @ 0x1800FB6C0
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB89C (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlDoesNameContainWildCards(unsigned __int16 *a1)
{
  unsigned __int64 v1; // r8
  _WORD *i; // rdx

  if ( *a1 )
  {
    v1 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(v1 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i >= v1 && *i != 92; --i )
    {
      if ( *i < 0x40u && (byte_18013E180[(unsigned __int16)*i] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
