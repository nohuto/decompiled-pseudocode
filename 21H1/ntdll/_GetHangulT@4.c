/*
 * XREFs of _GetHangulT@4 @ 0x4B366B46
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     <none>
 */

int __thiscall GetHangulT(void *this)
{
  int v1; // edx

  v1 = ((int)this - 44032) % 28;
  if ( (_WORD)v1 )
    return (unsigned __int16)v1 + 4519;
  else
    return 0;
}
