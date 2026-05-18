/*
 * XREFs of sub_18006BAD4 @ 0x18006BAD4
 * Callers:
 *     sub_180127279 @ 0x180127279 (sub_180127279.c)
 *     sub_18012B34F @ 0x18012B34F (sub_18012B34F.c)
 *     sub_18012B390 @ 0x18012B390 (sub_18012B390.c)
 *     sub_18012B3D6 @ 0x18012B3D6 (sub_18012B3D6.c)
 *     sub_18012B450 @ 0x18012B450 (sub_18012B450.c)
 *     sub_18012B48E @ 0x18012B48E (sub_18012B48E.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 */

__int64 __fastcall sub_18006BAD4(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = unknown_libname_101(v4);
      v4 += 4;
    }
    while ( v4 != a3 );
  }
  return result;
}
