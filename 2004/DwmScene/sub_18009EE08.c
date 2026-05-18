/*
 * XREFs of sub_18009EE08 @ 0x18009EE08
 * Callers:
 *     sub_18009C5F0 @ 0x18009C5F0 (sub_18009C5F0.c)
 *     sub_18009C734 @ 0x18009C734 (sub_18009C734.c)
 *     sub_18009D878 @ 0x18009D878 (sub_18009D878.c)
 *     sub_1800A1B3C @ 0x1800A1B3C (sub_1800A1B3C.c)
 *     sub_1800A1B84 @ 0x1800A1B84 (sub_1800A1B84.c)
 * Callees:
 *     sub_18009EF90 @ 0x18009EF90 (sub_18009EF90.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009EE08(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  result = sub_18009EF90(a1 + 4);
  v3 = a1[3];
  if ( v3 >= 0x10 )
  {
    v4 = *a1;
    v5 = v3 + 1;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v7);
        JUMPOUT(0x18009EE6CLL);
      }
      v4 = v6;
    }
    result = j_j__o_free(v4);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
