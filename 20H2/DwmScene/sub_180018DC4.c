/*
 * XREFs of sub_180018DC4 @ 0x180018DC4
 * Callers:
 *     sub_180019770 @ 0x180019770 (sub_180019770.c)
 *     sub_180028A84 @ 0x180028A84 (sub_180028A84.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180018DC4(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = a1[6];
  if ( v1 >= 0x10 )
  {
    v3 = a1[3];
    v4 = v1 + 1;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      v6 = v4 + 39;
      v7 = v3 - v5;
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x180018E33LL);
      }
      v3 = v5;
    }
    j_j__o_free(v3);
  }
  a1[5] = 0LL;
  a1[6] = 15LL;
  *((_BYTE *)a1 + 24) = 0;
  *a1 = &std::exception::`vftable';
  return o___std_exception_destroy(a1 + 1);
}
