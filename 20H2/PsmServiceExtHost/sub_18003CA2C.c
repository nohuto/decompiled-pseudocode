/*
 * XREFs of sub_18003CA2C @ 0x18003CA2C
 * Callers:
 *     sub_18003C93C @ 0x18003C93C (sub_18003C93C.c)
 *     sub_18003C9B0 @ 0x18003C9B0 (sub_18003C9B0.c)
 *     sub_180077A00 @ 0x180077A00 (sub_180077A00.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_18003CA2C(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
