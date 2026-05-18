/*
 * XREFs of sub_1800713A4 @ 0x1800713A4
 * Callers:
 *     sub_18012CB91 @ 0x18012CB91 (sub_18012CB91.c)
 *     sub_180130C67 @ 0x180130C67 (sub_180130C67.c)
 *     sub_180130CA8 @ 0x180130CA8 (sub_180130CA8.c)
 *     sub_180130CEE @ 0x180130CEE (sub_180130CEE.c)
 *     sub_180130D68 @ 0x180130D68 (sub_180130D68.c)
 *     sub_180130DA6 @ 0x180130DA6 (sub_180130DA6.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 */

__int64 __fastcall sub_1800713A4(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = unknown_libname_103(v4);
      v4 += 4;
    }
    while ( v4 != a3 );
  }
  return result;
}
