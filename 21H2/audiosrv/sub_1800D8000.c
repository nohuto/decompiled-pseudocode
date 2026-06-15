/*
 * XREFs of sub_1800D8000 @ 0x1800D8000
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800D8040 @ 0x1800D8040 (sub_1800D8040.c)
 */

__int64 __fastcall sub_1800D8000(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = sub_1800D8040(a1, a2, a3, 0LL);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 1970, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v3);
  return v4;
}
