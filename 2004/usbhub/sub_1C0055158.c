/*
 * XREFs of sub_1C0055158 @ 0x1C0055158
 * Callers:
 *     sub_1C0037720 @ 0x1C0037720 (sub_1C0037720.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 *     sub_1C00530C8 @ 0x1C00530C8 (sub_1C00530C8.c)
 */

__int64 __fastcall sub_1C0055158(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int16 v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+42h] [rbp-26h]
  __int16 v11; // [rsp+46h] [rbp-22h]
  __int16 v12; // [rsp+80h] [rbp+18h] BYREF

  v9 = 1664;
  v10 = 256;
  v11 = 18;
  v12 = 18;
  v4 = sub_1C0011220(a2) + 350;
  v5 = sub_1C00177A8(a1, a2, &v9, (__int64)v4, &v12);
  v7 = v5;
  if ( v5 < 0 )
    return (unsigned int)v7;
  if ( v12 == 18 && sub_1C00530C8(a1, (__int64)v4, v6, 0LL, 0LL) )
  {
    sub_1C000FD80(a1, 256, 1197818948, v7, 0LL);
    return (unsigned int)v7;
  }
  return 3221225628LL;
}
