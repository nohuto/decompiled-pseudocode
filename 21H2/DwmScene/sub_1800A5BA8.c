/*
 * XREFs of sub_1800A5BA8 @ 0x1800A5BA8
 * Callers:
 *     sub_1800A51A4 @ 0x1800A51A4 (sub_1800A51A4.c)
 *     sub_1800DC57C @ 0x1800DC57C (sub_1800DC57C.c)
 *     sub_1800F295C @ 0x1800F295C (sub_1800F295C.c)
 * Callees:
 *     sub_1800A754C @ 0x1800A754C (sub_1800A754C.c)
 */

__int64 __fastcall sub_1800A5BA8(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = (_QWORD *)(a1 + 2088);
  sub_1800A754C(a1 + 2088, &v4, a2);
  if ( v4 == *v2 )
    return 511LL;
  else
    return *(unsigned __int16 *)(v4 + 64);
}
