/*
 * XREFs of sub_1800125E4 @ 0x1800125E4
 * Callers:
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_180012894 @ 0x180012894 (sub_180012894.c)
 *     sub_180018074 @ 0x180018074 (sub_180018074.c)
 *     sub_180116B3C @ 0x180116B3C (sub_180116B3C.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800125E4(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        unknown_libname_100(v4, 0);
        v4 += 16LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v10 = (a1[2] - v4) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v10 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v4 - 8);
      v12 = v10 + 39;
      if ( (unsigned __int64)(v4 - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x18001269BLL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    result = j_j__o_free(v4);
  }
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  *a1 = a2;
  return result;
}
