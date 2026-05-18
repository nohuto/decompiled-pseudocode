/*
 * XREFs of sub_18006BB2C @ 0x18006BB2C
 * Callers:
 *     sub_180069DE0 @ 0x180069DE0 (sub_180069DE0.c)
 *     sub_1800A7698 @ 0x1800A7698 (sub_1800A7698.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_18011ADC0 @ 0x18011ADC0 (sub_18011ADC0.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006BB2C(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rbp
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v1 != v3 )
    {
      do
      {
        unknown_libname_101(v4);
        v4 += 4;
      }
      while ( v4 != v3 );
    }
    v5 = ((char *)a1[2] - (char *)v1) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(v1 - 1);
      v7 = v5 + 39;
      if ( (unsigned __int64)v1 - v6 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x18006BBC5LL);
      }
      v1 = (__int64 *)*(v1 - 1);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
