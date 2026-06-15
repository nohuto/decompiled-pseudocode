/*
 * XREFs of sub_1800F73B0 @ 0x1800F73B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800F717C @ 0x1800F717C (sub_1800F717C.c)
 */

__int64 __fastcall sub_1800F73B0(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v4 = sub_1800F717C(a2, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v9;
    v9 = 0LL;
    v5 = 0;
    *a3 = v6;
  }
  else
  {
    sub_18004BD84((int)retaddr, 58, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dialogsession.cpp", v4);
  }
  sub_18000F708(&v9);
  return v5;
}
