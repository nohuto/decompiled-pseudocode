/*
 * XREFs of sub_1800D606C @ 0x1800D606C
 * Callers:
 *     sub_18007C500 @ 0x18007C500 (sub_18007C500.c)
 * Callees:
 *     sub_1800D5FB8 @ 0x1800D5FB8 (sub_1800D5FB8.c)
 */

char __fastcall sub_1800D606C(__int64 a1, _QWORD *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *(_BYTE *)(a1 + 184) )
    return sub_1800D5FB8(a1, *(_QWORD *)(a1 + 192), (__int64)Buf2, a2);
  return v2;
}
