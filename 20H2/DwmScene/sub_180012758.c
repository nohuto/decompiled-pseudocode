/*
 * XREFs of sub_180012758 @ 0x180012758
 * Callers:
 *     sub_18012002A @ 0x18012002A (sub_18012002A.c)
 *     sub_18012B0D0 @ 0x18012B0D0 (sub_18012B0D0.c)
 *     sub_18012B111 @ 0x18012B111 (sub_18012B111.c)
 *     sub_18012B157 @ 0x18012B157 (sub_18012B157.c)
 *     sub_18012B1D0 @ 0x18012B1D0 (sub_18012B1D0.c)
 *     sub_18012B20E @ 0x18012B20E (sub_18012B20E.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 */

__int64 __fastcall sub_180012758(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = unknown_libname_100(v4, 0);
      v4 += 16LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
