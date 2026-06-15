/*
 * XREFs of sub_18013DDD8 @ 0x18013DDD8
 * Callers:
 *     sub_180068C2C @ 0x180068C2C (sub_180068C2C.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_18013D4B8 @ 0x18013D4B8 (sub_18013D4B8.c)
 */

__int64 *__fastcall sub_18013DDD8(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = (__int64 *)*a1;
  if ( !*a1 )
    sub_1800B8610(-2147467259);
  v4 = v3[2];
  v3[2] = 0LL;
  *a2 = v4;
  v5 = *v3;
  *a1 = *v3;
  if ( v5 )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    a1[1] = 0LL;
  sub_18013D4B8((__int64)a1, v3);
  return a2;
}
