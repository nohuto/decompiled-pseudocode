/*
 * XREFs of sub_1800CAA10 @ 0x1800CAA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E784 @ 0x18002E784 (sub_18002E784.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800CA8B0 @ 0x1800CA8B0 (sub_1800CA8B0.c)
 */

__int64 __fastcall sub_1800CAA10(__int64 a1, unsigned int a2, float a3, __int64 a4, _DWORD *a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v6 = sub_1800CA8B0(a1, a2, a3, a4, a5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    sub_18002E784(a1);
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 1121, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v6);
    return v7;
  }
}
