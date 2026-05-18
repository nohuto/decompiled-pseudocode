/*
 * XREFs of sub_180012838 @ 0x180012838
 * Callers:
 *     sub_1801258FA @ 0x1801258FA (sub_1801258FA.c)
 *     sub_1801309E8 @ 0x1801309E8 (sub_1801309E8.c)
 *     sub_180130A29 @ 0x180130A29 (sub_180130A29.c)
 *     sub_180130A6F @ 0x180130A6F (sub_180130A6F.c)
 *     sub_180130AE8 @ 0x180130AE8 (sub_180130AE8.c)
 *     sub_180130B26 @ 0x180130B26 (sub_180130B26.c)
 * Callees:
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 */

__int64 __fastcall sub_180012838(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = unknown_libname_102(v4, 0);
      v4 += 16LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
