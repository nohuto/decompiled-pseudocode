/*
 * XREFs of sub_1800F4D3C @ 0x1800F4D3C
 * Callers:
 *     sub_1800F53AC @ 0x1800F53AC (sub_1800F53AC.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800F319C @ 0x1800F319C (sub_1800F319C.c)
 */

__int64 *__fastcall sub_1800F4D3C(__int64 *a1, __int64 *a2)
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
  sub_1800F319C((__int64)a1, v3);
  return a2;
}
