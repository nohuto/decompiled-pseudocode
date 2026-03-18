/*
 * XREFs of sub_1C00552B8 @ 0x1C00552B8
 * Callers:
 *     sub_1C003272C @ 0x1C003272C (sub_1C003272C.c)
 *     sub_1C00378B0 @ 0x1C00378B0 (sub_1C00378B0.c)
 *     sub_1C0050D78 @ 0x1C0050D78 (sub_1C0050D78.c)
 *     sub_1C0051210 @ 0x1C0051210 (sub_1C0051210.c)
 *     sub_1C00513E0 @ 0x1C00513E0 (sub_1C00513E0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 */

__int64 __fastcall sub_1C00552B8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned __int16 a6,
        unsigned __int8 a7)
{
  unsigned __int16 *v10; // rdi
  char v12; // r11
  __int16 v13; // r10
  int v14; // eax
  unsigned int v15; // r10d

  sub_1C000F050(a1);
  v10 = a5;
  if ( !a5 )
    return 3221225485LL;
  sub_1C000FD80(a1, 256, 1733514289, *a5, a7);
  sub_1C000FD80(a1, 256, 1733514290, a2, a6);
  HIWORD(a5) = *v10;
  LOWORD(a5) = 1664;
  BYTE3(a5) = 3;
  BYTE2(a5) = v12;
  WORD2(a5) = v13;
  v14 = sub_1C00177A8(a1, a2, &a5, a4, v10);
  sub_1C000FD80(a1, 256, 1733514291, *v10, v14);
  return v15;
}
