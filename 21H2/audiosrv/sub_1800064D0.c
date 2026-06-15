/*
 * XREFs of sub_1800064D0 @ 0x1800064D0
 * Callers:
 *     sub_180005E08 @ 0x180005E08 (sub_180005E08.c)
 *     unknown_libname_16 @ 0x180075AF9 (unknown_libname_16.c)
 *     sub_180075BA6 @ 0x180075BA6 (sub_180075BA6.c)
 *     sub_180075D90 @ 0x180075D90 (sub_180075D90.c)
 *     sub_1800D4FEC @ 0x1800D4FEC (sub_1800D4FEC.c)
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_1 @ 0x1800D53F0 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z_1.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 */

__int64 __fastcall sub_1800064D0(_QWORD *a1)
{
  *a1 = off_180146480;
  sub_180006A30(a1[14] - 24LL);
  sub_180006A30(a1[13] - 24LL);
  sub_180006A30(a1[12] - 24LL);
  return sub_180006A30(a1[11] - 24LL);
}
