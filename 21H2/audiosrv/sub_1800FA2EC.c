/*
 * XREFs of sub_1800FA2EC @ 0x1800FA2EC
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800FA258 @ 0x1800FA258 (sub_1800FA258.c)
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 * Callees:
 *     sub_1800FD1B0 @ 0x1800FD1B0 (sub_1800FD1B0.c)
 */

__int64 __fastcall sub_1800FA2EC(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = sub_1800FD1B0(a1, a2, a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
