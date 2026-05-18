/*
 * XREFs of sub_1800AB1D8 @ 0x1800AB1D8
 * Callers:
 *     sub_1800A8FAC @ 0x1800A8FAC (sub_1800A8FAC.c)
 *     sub_18010D3D0 @ 0x18010D3D0 (sub_18010D3D0.c)
 * Callees:
 *     sub_180093600 @ 0x180093600 (sub_180093600.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800AB1D8(__int64 **a1)
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
        sub_180093600(v4);
        v4 += 8;
      }
      while ( v4 != v3 );
    }
    v5 = ((char *)a1[2] - (char *)v1) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(v1 - 1);
      v7 = v5 + 39;
      if ( (unsigned __int64)v1 - v6 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x1800AB271LL);
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
