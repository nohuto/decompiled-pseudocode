/*
 * XREFs of sub_1800210FC @ 0x1800210FC
 * Callers:
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     sub_180021090 @ 0x180021090 (sub_180021090.c)
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800BF15C @ 0x1800BF15C (sub_1800BF15C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800210FC(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( !a2 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= a3 )
  {
    *a1 = a3 * a2;
    return 0LL;
  }
  return 2147942487LL;
}
