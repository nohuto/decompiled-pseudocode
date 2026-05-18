/*
 * XREFs of sub_1800A6C7C @ 0x1800A6C7C
 * Callers:
 *     sub_18012B3D6 @ 0x18012B3D6 (sub_18012B3D6.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 */

__int64 __fastcall sub_1800A6C7C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx

  for ( i = a1; i != a2; i += 32LL )
  {
    if ( a3 != i )
    {
      unknown_libname_101((__int64 *)a3);
      *(_OWORD *)a3 = *(_OWORD *)i;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(i + 16);
      *(_QWORD *)(i + 16) = 0LL;
      *(_QWORD *)(i + 24) = 7LL;
      *(_WORD *)i = 0;
    }
    a3 += 32LL;
  }
  return a3;
}
