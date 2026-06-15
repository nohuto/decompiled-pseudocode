/*
 * XREFs of sub_180018844 @ 0x180018844
 * Callers:
 *     sub_180006EA0 @ 0x180006EA0 (sub_180006EA0.c)
 *     sub_180007EA0 @ 0x180007EA0 (sub_180007EA0.c)
 *     sub_18001021C @ 0x18001021C (sub_18001021C.c)
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_180013E44 @ 0x180013E44 (sub_180013E44.c)
 *     sub_18001ACFC @ 0x18001ACFC (sub_18001ACFC.c)
 *     sub_180021D00 @ 0x180021D00 (sub_180021D00.c)
 *     sub_180022DBC @ 0x180022DBC (sub_180022DBC.c)
 *     sub_18002C5AC @ 0x18002C5AC (sub_18002C5AC.c)
 *     sub_18002CD44 @ 0x18002CD44 (sub_18002CD44.c)
 *     sub_18002CECC @ 0x18002CECC (sub_18002CECC.c)
 *     sub_18002D00C @ 0x18002D00C (sub_18002D00C.c)
 *     sub_18002FEBC @ 0x18002FEBC (sub_18002FEBC.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 *     sub_1800326F4 @ 0x1800326F4 (sub_1800326F4.c)
 *     sub_180036BEC @ 0x180036BEC (sub_180036BEC.c)
 * Callees:
 *     sub_180019980 @ 0x180019980 (sub_180019980.c)
 */

__int64 __fastcall sub_180018844(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rsi
  unsigned int v7; // ebx
  LPVOID v10; // rax

  v6 = a4 + 1;
  v7 = 0;
  *a6 = 0LL;
  if ( a4 + 1 >= a4 && is_mul_ok(v6, 2uLL) )
  {
    v10 = CoTaskMemAlloc(2 * v6);
    *a6 = v10;
    if ( v10 )
      sub_180019980(v10, v6, a3, a4);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v7;
}
