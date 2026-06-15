/*
 * XREFs of sub_1800F4F90 @ 0x1800F4F90
 * Callers:
 *     sub_1800F2D78 @ 0x1800F2D78 (sub_1800F2D78.c)
 *     sub_1800F3EAC @ 0x1800F3EAC (sub_1800F3EAC.c)
 *     sub_1800F4D90 @ 0x1800F4D90 (sub_1800F4D90.c)
 *     sub_1800F51F4 @ 0x1800F51F4 (sub_1800F51F4.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

_OWORD *__fastcall sub_1800F4F90(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // rcx
  _OWORD *result; // rax
  __int128 v5; // xmm1

  if ( !a2 )
    sub_1800B8610(-2147467259);
  v3 = 9LL;
  result = (_OWORD *)(a2 + 16);
  do
  {
    *result = *a3;
    result[1] = a3[1];
    result[2] = a3[2];
    result[3] = a3[3];
    result[4] = a3[4];
    result[5] = a3[5];
    result[6] = a3[6];
    result += 8;
    v5 = a3[7];
    a3 += 8;
    *(result - 1) = v5;
    --v3;
  }
  while ( v3 );
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  result[3] = a3[3];
  result[4] = a3[4];
  return result;
}
