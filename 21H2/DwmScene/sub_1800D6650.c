/*
 * XREFs of sub_1800D6650 @ 0x1800D6650
 * Callers:
 *     sub_1800D561C @ 0x1800D561C (sub_1800D561C.c)
 *     sub_1800D5640 @ 0x1800D5640 (sub_1800D5640.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D6650(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  result = a1[4];
  while ( result )
  {
    a1[4] = --result;
    if ( !result )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    result = a1[1];
    --v3;
    v4 = *(_QWORD *)(result + 8 * v3);
    if ( v4 )
      result = j_j__o_free(v4);
  }
  v5 = a1[1];
  if ( v5 )
  {
    v6 = 8LL * a1[2];
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x1800D66EELL);
      }
      v5 = v7;
    }
    result = j_j__o_free(v5);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
  return result;
}
