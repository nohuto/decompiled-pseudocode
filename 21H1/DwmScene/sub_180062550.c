/*
 * XREFs of sub_180062550 @ 0x180062550
 * Callers:
 *     sub_1800635A8 @ 0x1800635A8 (sub_1800635A8.c)
 *     sub_18008C610 @ 0x18008C610 (sub_18008C610.c)
 *     sub_1800918E0 @ 0x1800918E0 (sub_1800918E0.c)
 *     sub_180099AB0 @ 0x180099AB0 (sub_180099AB0.c)
 *     sub_18009B64C @ 0x18009B64C (sub_18009B64C.c)
 *     sub_1800C6F90 @ 0x1800C6F90 (sub_1800C6F90.c)
 *     sub_1800C8F00 @ 0x1800C8F00 (sub_1800C8F00.c)
 *     sub_1800CB000 @ 0x1800CB000 (sub_1800CB000.c)
 *     sub_1800CC680 @ 0x1800CC680 (sub_1800CC680.c)
 *     sub_1800CD3A8 @ 0x1800CD3A8 (sub_1800CD3A8.c)
 * Callees:
 *     sub_180062054 @ 0x180062054 (sub_180062054.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 */

__int64 __fastcall sub_180062550(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = sub_18006AB3C(*a2);
  sub_180062054((__int64 **)(a1 + 80), (__int64)&v4, v5);
  result = v4;
  *(_BYTE *)(v4 + 32) = 0;
  return result;
}
