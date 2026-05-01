/*
 * XREFs of sub_180018408 @ 0x180018408
 * Callers:
 *     sub_180046474 @ 0x180046474 (sub_180046474.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180018408(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v3 += 39LL;
      v5 = v2 - v4;
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v3);
        __debugbreak();
        JUMPOUT(0x18001846CLL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2, v3);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
