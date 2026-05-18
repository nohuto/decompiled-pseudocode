/*
 * XREFs of sub_1800DD1AC @ 0x1800DD1AC
 * Callers:
 *     sub_1800DC92C @ 0x1800DC92C (sub_1800DC92C.c)
 *     sub_1800DC974 @ 0x1800DC974 (sub_1800DC974.c)
 *     sub_1800DC97C @ 0x1800DC97C (sub_1800DC97C.c)
 * Callees:
 *     sub_18010591C @ 0x18010591C (sub_18010591C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800DD1AC(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
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
        sub_18010591C(v4);
        v4 += 128LL;
      }
      while ( v4 != v3 );
    }
    v5 = (a1[2] - v1) & 0xFFFFFFFFFFFFFF80uLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v1 - 8);
      v7 = v5 + 39;
      if ( (unsigned __int64)(v1 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x1800DD245LL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
