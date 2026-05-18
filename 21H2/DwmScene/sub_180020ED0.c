/*
 * XREFs of sub_180020ED0 @ 0x180020ED0
 * Callers:
 *     sub_18001D3D4 @ 0x18001D3D4 (sub_18001D3D4.c)
 *     sub_180022C1C @ 0x180022C1C (sub_180022C1C.c)
 * Callees:
 *     sub_18001B82C @ 0x18001B82C (sub_18001B82C.c)
 *     sub_18001DD98 @ 0x18001DD98 (sub_18001DD98.c)
 */

char __fastcall sub_180020ED0(volatile signed __int32 *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  sub_18001B82C(a1, &v4);
  v2 = v4 & 1;
  sub_18001DD98(a1, v4 & 1, 3, 1LL);
  return v2;
}
