/*
 * XREFs of sub_1800D70A0 @ 0x1800D70A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800D70A0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 )
    return sub_180126598(a2, a3, a4);
  sub_18004BD84((int)retaddr, 2715, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147467261);
  return 2147500035LL;
}
