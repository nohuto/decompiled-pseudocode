/*
 * XREFs of sub_18006B2BC @ 0x18006B2BC
 * Callers:
 *     sub_18001703C @ 0x18001703C (sub_18001703C.c)
 *     sub_18001E08C @ 0x18001E08C (sub_18001E08C.c)
 *     sub_18001E2D4 @ 0x18001E2D4 (sub_18001E2D4.c)
 *     sub_18001E51C @ 0x18001E51C (sub_18001E51C.c)
 *     sub_18001E764 @ 0x18001E764 (sub_18001E764.c)
 *     sub_18001E9AC @ 0x18001E9AC (sub_18001E9AC.c)
 *     sub_18006A89C @ 0x18006A89C (sub_18006A89C.c)
 * Callees:
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180075908 @ 0x180075908 (sub_180075908.c)
 */

__int64 __fastcall sub_18006B2BC(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = sub_180075908(*(_QWORD *)(a1 + 3984));
  sub_1800615B4(v3, a2);
  return a2;
}
