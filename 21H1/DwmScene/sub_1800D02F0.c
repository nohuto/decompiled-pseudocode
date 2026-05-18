/*
 * XREFs of sub_1800D02F0 @ 0x1800D02F0
 * Callers:
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     sub_1800F394C @ 0x1800F394C (sub_1800F394C.c)
 * Callees:
 *     sub_1800D01A8 @ 0x1800D01A8 (sub_1800D01A8.c)
 */

__int64 *__fastcall sub_1800D02F0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  if ( !*(_BYTE *)(a1 + 184) || *(_BYTE *)(a1 + 185) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_1800D01A8(a1, a2, *(_QWORD *)(a1 + 192), a3, a4);
  }
  return a2;
}
