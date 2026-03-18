/*
 * XREFs of sub_1C0055234 @ 0x1C0055234
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 */

__int64 __fastcall sub_1C0055234(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 *a5)
{
  __int16 v9; // ax
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  sub_1C000F050(a1);
  if ( !a5 )
    return 3221225485LL;
  v9 = *a5;
  LOWORD(v10) = 1664;
  *(_DWORD *)((char *)&v10 + 2) = 1536;
  HIWORD(v10) = v9;
  return sub_1C00177A8(a1, a2, &v10, a4, a5);
}
