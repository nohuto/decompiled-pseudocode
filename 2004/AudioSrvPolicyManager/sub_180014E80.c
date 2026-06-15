/*
 * XREFs of sub_180014E80 @ 0x180014E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B18C @ 0x18001B18C (sub_18001B18C.c)
 */

__int64 __fastcall sub_180014E80(__int64 a1, __int64 a2)
{
  if ( a2 )
    return sub_18001B18C(a1, a1 - 16, a2);
  else
    return 2147942487LL;
}
