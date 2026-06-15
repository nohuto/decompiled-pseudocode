/*
 * XREFs of sub_1800F83A0 @ 0x1800F83A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800C6AA4 @ 0x1800C6AA4 (sub_1800C6AA4.c)
 *     sub_1800F8400 @ 0x1800F8400 (sub_1800F8400.c)
 */

__int64 __fastcall sub_1800F83A0(__int64 a1, __int64 a2, float a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  sub_1800C6AA4(a3);
  v5 = sub_1800F8400(a1, 0LL, a2);
  v6 = v5;
  if ( v5 < 0 )
    sub_18004BD84((int)retaddr, 802, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp", v5);
  return v6;
}
