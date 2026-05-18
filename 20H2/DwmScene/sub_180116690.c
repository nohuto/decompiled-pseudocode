/*
 * XREFs of sub_180116690 @ 0x180116690
 * Callers:
 *     sub_18001EF80 @ 0x18001EF80 (sub_18001EF80.c)
 * Callees:
 *     sub_1801166B8 @ 0x1801166B8 (sub_1801166B8.c)
 */

__int64 __fastcall sub_180116690(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_1801166B8(a1, a2, v3);
  return a1;
}
