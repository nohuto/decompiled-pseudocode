/*
 * XREFs of sub_180052524 @ 0x180052524
 * Callers:
 *     sub_18000319C @ 0x18000319C (sub_18000319C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052524(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // r9

  if ( a1 < a2 )
    v3 = -1LL;
  else
    v3 = a1 - a2;
  *a3 = v3;
  return a1 < a2 ? 0x80070216 : 0;
}
