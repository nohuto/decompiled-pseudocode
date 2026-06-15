/*
 * XREFs of sub_1800C2D44 @ 0x1800C2D44
 * Callers:
 *     sub_180005310 @ 0x180005310 (sub_180005310.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_1800322E0 @ 0x1800322E0 (sub_1800322E0.c)
 *     sub_1800C2ED0 @ 0x1800C2ED0 (sub_1800C2ED0.c)
 *     sub_1800C31A0 @ 0x1800C31A0 (sub_1800C31A0.c)
 *     sub_1800C3DF0 @ 0x1800C3DF0 (sub_1800C3DF0.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 *     sub_1800CE248 @ 0x1800CE248 (sub_1800CE248.c)
 *     sub_1800CFE30 @ 0x1800CFE30 (sub_1800CFE30.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800C2D44(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    sub_1800B8610(-2147024809);
  return *a1 + 8 * a2;
}
