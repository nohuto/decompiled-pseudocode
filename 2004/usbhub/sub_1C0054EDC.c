/*
 * XREFs of sub_1C0054EDC @ 0x1C0054EDC
 * Callers:
 *     sub_1C0014C0C @ 0x1C0014C0C (sub_1C0014C0C.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 */

__int64 __fastcall sub_1C0054EDC(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  int v5; // eax
  int v6; // r10d
  __int64 v8[5]; // [rsp+40h] [rbp-28h] BYREF
  __int16 v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  sub_1C000F050(a1);
  v4 = sub_1C0011220(a2);
  v8[0] = 66304LL;
  v5 = sub_1C00177A8(a1, a2, v8, 0LL, &v9);
  sub_1C000FD80(a1, 256, 1162770283, v5, 0LL);
  if ( v6 >= 0 )
    v4[355] |= 0x8000u;
  return (unsigned int)v6;
}
