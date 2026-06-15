/*
 * XREFs of sub_1800B856C @ 0x1800B856C
 * Callers:
 *     sub_1800B9DCC @ 0x1800B9DCC (sub_1800B9DCC.c)
 *     sub_1800BA054 @ 0x1800BA054 (sub_1800BA054.c)
 * Callees:
 *     sub_1800B91F4 @ 0x1800B91F4 (sub_1800B91F4.c)
 */

__int64 __fastcall sub_1800B856C(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = sub_1800B91F4(a1, a2, a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
