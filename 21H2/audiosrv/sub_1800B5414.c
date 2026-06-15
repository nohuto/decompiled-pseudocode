/*
 * XREFs of sub_1800B5414 @ 0x1800B5414
 * Callers:
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 * Callees:
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 *     sub_1800B4DB8 @ 0x1800B4DB8 (sub_1800B4DB8.c)
 */

__int64 __fastcall sub_1800B5414(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  signed int v9; // ebx
  int v11; // [rsp+20h] [rbp-38h]

  v9 = sub_1800B4DB8(a1, a2, a3, a4, v11, a6);
  if ( v9 > 0 )
    v9 = (unsigned __int16)v9 | 0x80070000;
  sub_18004BE0C(a1, a2, a3, 0, 0LL, a6, 1, v9, 0LL, 0);
  return (unsigned int)v9;
}
