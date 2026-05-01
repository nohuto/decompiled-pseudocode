/*
 * XREFs of sub_180005030 @ 0x180005030
 * Callers:
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 * Callees:
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 */

_BOOL8 __fastcall sub_180005030(__int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+40h] [rbp+18h] BYREF

  sub_1800468FC(a1, &v2, &v3);
  return (v2 & 0x180) == 0 && (v3 & 0x180) == 0;
}
