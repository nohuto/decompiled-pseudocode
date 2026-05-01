/*
 * XREFs of sub_18003569C @ 0x18003569C
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 * Callees:
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 */

_BOOL8 __fastcall sub_18003569C(__int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+40h] [rbp+18h] BYREF

  sub_1800468FC(a1, &v2, &v3);
  return (v2 & 0x100) == 0 || (v3 & 0x100) != 0;
}
