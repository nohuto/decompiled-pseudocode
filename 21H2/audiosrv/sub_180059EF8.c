/*
 * XREFs of sub_180059EF8 @ 0x180059EF8
 * Callers:
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_1801230A8 @ 0x1801230A8 (sub_1801230A8.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180059F70 @ 0x180059F70 (sub_180059F70.c)
 */

__int64 __fastcall sub_180059EF8(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebx
  int v6; // edx
  __int64 v7; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v7 = a1 + 16;
  if ( *(int *)(a2 + 8) > 0 )
  {
    v4 = sub_180059F70(a2, a3, a4, 0, 0LL, v7);
    if ( v4 >= 0 )
      return 0LL;
    v6 = 163;
  }
  else
  {
    v4 = sub_180059F70(a2, 0, 0, a3, a4, v7);
    if ( v4 >= 0 )
      return 0LL;
    v6 = 168;
  }
  sub_18004BD84((int)retaddr, v6, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v4);
  return (unsigned int)v4;
}
