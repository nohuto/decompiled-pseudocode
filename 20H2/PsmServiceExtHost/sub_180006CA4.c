/*
 * XREFs of sub_180006CA4 @ 0x180006CA4
 * Callers:
 *     sub_180006B7C @ 0x180006B7C (sub_180006B7C.c)
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_18007E858 @ 0x18007E858 (sub_18007E858.c)
 * Callees:
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 *     sub_180006E88 @ 0x180006E88 (sub_180006E88.c)
 *     sub_180006EBC @ 0x180006EBC (sub_180006EBC.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_1800384A0 @ 0x1800384A0 (sub_1800384A0.c)
 */

__int64 __fastcall sub_180006CA4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  LOBYTE(a2) = 1;
  result = sub_180022560(a1, a2);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 544) &= 0xFFFFFF3F;
    sub_180006EBC(a1);
    v4 = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 544) &= ~0x20u;
    sub_18001BD70(v4);
    sub_18000A110(*(_QWORD *)(a1 + 80));
    sub_180006E88(*(_QWORD *)(a1 + 88));
    if ( *(_QWORD *)(a1 + 504) )
    {
      sub_1800384A0();
      *(_QWORD *)(a1 + 504) = 0LL;
    }
    sub_180006D18(a1, 0LL);
    return 0LL;
  }
  return result;
}
