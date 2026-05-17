/*
 * XREFs of _RtlDoesNameContainWildCards@4 @ 0x4B3612F0
 * Callers:
 *     _RtlpIsNameInExpressionPrivate@20 @ 0x4B361483 (_RtlpIsNameInExpressionPrivate@20.c)
 * Callees:
 *     <none>
 */

char __stdcall RtlDoesNameContainWildCards(unsigned __int16 *a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // edx
  unsigned __int16 *i; // ecx
  unsigned int v4; // eax

  v1 = *a1;
  if ( (_WORD)v1 )
  {
    v2 = *((_DWORD *)a1 + 1);
    for ( i = (unsigned __int16 *)(v2 - 2 + 2 * (v1 >> 1)); (unsigned int)i >= v2; --i )
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
