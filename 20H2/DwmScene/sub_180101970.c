/*
 * XREFs of sub_180101970 @ 0x180101970
 * Callers:
 *     sub_18010187C @ 0x18010187C (sub_18010187C.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180101970(float *a1, float *a2, float *a3, _OWORD *a4)
{
  float *v4; // r10
  _OWORD *result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm0

  v4 = a2;
  while ( 1 )
  {
    result = a4 + 1;
    if ( *a1 <= *v4 )
      break;
    v6 = *(_OWORD *)v4;
    v4 += 4;
    *a4 = v6;
    if ( v4 == a3 )
    {
      while ( a1 != a2 )
      {
        *result++ = *(_OWORD *)a1;
        a1 += 4;
      }
      return result;
    }
LABEL_6:
    ++a4;
  }
  v7 = *(_OWORD *)a1;
  a1 += 4;
  *a4 = v7;
  if ( a1 != a2 )
    goto LABEL_6;
  while ( v4 != a3 )
  {
    *result++ = *(_OWORD *)v4;
    v4 += 4;
  }
  return result;
}
