/*
 * XREFs of sub_18013A6F8 @ 0x18013A6F8
 * Callers:
 *     sub_180138224 @ 0x180138224 (sub_180138224.c)
 *     sub_180138847 @ 0x180138847 (sub_180138847.c)
 *     sub_180138AF7 @ 0x180138AF7 (sub_180138AF7.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_18013A6F8(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx

  v3 = a2[11];
  if ( v3 >= 8 )
    sub_1800472E0(a2[8], 2 * v3 + 2);
  a2[11] = 7LL;
  a2[10] = 0LL;
  *((_WORD *)a2 + 32) = 0;
  v4 = a2[7];
  if ( v4 >= 8 )
    sub_1800472E0(a2[4], 2 * v4 + 2);
  a2[6] = 0LL;
  a2[7] = 7LL;
  *((_WORD *)a2 + 16) = 0;
  return sub_1800472E0((__int64)a2, 0x60uLL);
}
