/*
 * XREFs of sub_1C00372B4 @ 0x1C00372B4
 * Callers:
 *     sub_1C003AC9C @ 0x1C003AC9C (sub_1C003AC9C.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

char __fastcall sub_1C00372B4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *i; // r10
  _QWORD *v7; // r10
  __int64 v8; // r9

  sub_1C0011220(a2);
  for ( i = (_QWORD *)*a3; ; i = (_QWORD *)*v7 )
  {
    if ( i == a3 )
      return 0;
    sub_1C000FD80(a1, 4, 1685219121, (__int64)(i - 165), 0LL);
    if ( a2 == *(_QWORD *)(v8 + 840) )
      break;
  }
  return 1;
}
