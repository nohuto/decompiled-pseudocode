/*
 * XREFs of sub_18011A290 @ 0x18011A290
 * Callers:
 *     sub_180119C60 @ 0x180119C60 (sub_180119C60.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 */

__int64 __fastcall sub_18011A290(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  if ( a2 != a1 )
  {
    v5 = a2 - 32;
    do
    {
      a3 -= 32LL;
      if ( a3 != v5 )
      {
        unknown_libname_101((__int64 *)a3);
        *(_OWORD *)a3 = *(_OWORD *)v5;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 24) = 7LL;
        *(_WORD *)v5 = 0;
      }
      v5 -= 32LL;
    }
    while ( v5 + 32 != a1 );
  }
  return a3;
}
