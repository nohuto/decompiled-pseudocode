/*
 * XREFs of sub_1800F4C54 @ 0x1800F4C54
 * Callers:
 *     sub_1800F23D8 @ 0x1800F23D8 (sub_1800F23D8.c)
 *     sub_1800F319C @ 0x1800F319C (sub_1800F319C.c)
 * Callees:
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800F319C @ 0x1800F319C (sub_1800F319C.c)
 */

__int64 __fastcall sub_1800F4C54(__int64 *a1)
{
  __int64 *v2; // rdx
  __int64 result; // rax
  _QWORD *v4; // rcx

  for ( ; a1[2]; result = sub_1800F319C((__int64)a1, v2) )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      sub_1800B8610(-2147467259);
    *a1 = *v2;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v4 = (_QWORD *)a1[3];
  if ( v4 )
  {
    result = sub_1800524BC(v4);
    a1[3] = 0LL;
  }
  return result;
}
