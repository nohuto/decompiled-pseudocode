/*
 * XREFs of sub_1800F295C @ 0x1800F295C
 * Callers:
 *     sub_180092224 @ 0x180092224 (sub_180092224.c)
 *     sub_180092B60 @ 0x180092B60 (sub_180092B60.c)
 *     sub_1800952D0 @ 0x1800952D0 (sub_1800952D0.c)
 *     sub_180095B4C @ 0x180095B4C (sub_180095B4C.c)
 *     sub_1800EA230 @ 0x1800EA230 (sub_1800EA230.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 *     sub_1800F5BE8 @ 0x1800F5BE8 (sub_1800F5BE8.c)
 *     sub_180112BD0 @ 0x180112BD0 (sub_180112BD0.c)
 * Callees:
 *     sub_1800A5BA8 @ 0x1800A5BA8 (sub_1800A5BA8.c)
 */

__int64 __fastcall sub_1800F295C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1800A5BA8(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)result + 128) == 0xFFFF )
    return 511LL;
  return result;
}
