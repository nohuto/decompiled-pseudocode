/*
 * XREFs of sub_18000FA80 @ 0x18000FA80
 * Callers:
 *     sub_18003B281 @ 0x18003B281 (sub_18003B281.c)
 *     sub_18003B317 @ 0x18003B317 (sub_18003B317.c)
 *     sub_18003B356 @ 0x18003B356 (sub_18003B356.c)
 *     sub_18003BC10 @ 0x18003BC10 (sub_18003BC10.c)
 *     sub_18003BE27 @ 0x18003BE27 (sub_18003BE27.c)
 *     sub_18003BF4C @ 0x18003BF4C (sub_18003BF4C.c)
 *     sub_18003C4A9 @ 0x18003C4A9 (sub_18003C4A9.c)
 *     sub_18003C840 @ 0x18003C840 (sub_18003C840.c)
 *     sub_18003C8EF @ 0x18003C8EF (sub_18003C8EF.c)
 *     sub_18003C9B3 @ 0x18003C9B3 (sub_18003C9B3.c)
 *     sub_18003CAD5 @ 0x18003CAD5 (sub_18003CAD5.c)
 *     sub_18003CB11 @ 0x18003CB11 (sub_18003CB11.c)
 *     sub_18003CB4D @ 0x18003CB4D (sub_18003CB4D.c)
 *     sub_18003CBE3 @ 0x18003CBE3 (sub_18003CBE3.c)
 * Callees:
 *     sub_18000F960 @ 0x18000F960 (sub_18000F960.c)
 */

__int64 __fastcall sub_18000FA80(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000F960(a1, a2, a3, a4, v5, retaddr, 1);
}
