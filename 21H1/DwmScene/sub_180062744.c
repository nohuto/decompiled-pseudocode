/*
 * XREFs of sub_180062744 @ 0x180062744
 * Callers:
 *     sub_1800635A8 @ 0x1800635A8 (sub_1800635A8.c)
 *     sub_18008C610 @ 0x18008C610 (sub_18008C610.c)
 *     sub_1800918E0 @ 0x1800918E0 (sub_1800918E0.c)
 *     sub_180099AB0 @ 0x180099AB0 (sub_180099AB0.c)
 *     sub_18009B64C @ 0x18009B64C (sub_18009B64C.c)
 *     sub_1800C6F90 @ 0x1800C6F90 (sub_1800C6F90.c)
 *     sub_1800CB000 @ 0x1800CB000 (sub_1800CB000.c)
 *     sub_1800CD3A8 @ 0x1800CD3A8 (sub_1800CD3A8.c)
 *     sub_1800CDB34 @ 0x1800CDB34 (sub_1800CDB34.c)
 * Callees:
 *     sub_180062054 @ 0x180062054 (sub_180062054.c)
 */

__int64 __fastcall sub_180062744(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4[6]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = a2;
  sub_180062054((__int64 **)(a1 + 80), (__int64)&v3, v4);
  result = v3;
  *(_BYTE *)(v3 + 32) = 1;
  return result;
}
