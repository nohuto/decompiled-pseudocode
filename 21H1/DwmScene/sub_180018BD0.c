/*
 * XREFs of sub_180018BD0 @ 0x180018BD0
 * Callers:
 *     sub_180018764 @ 0x180018764 (sub_180018764.c)
 *     sub_18008D650 @ 0x18008D650 (sub_18008D650.c)
 *     sub_18008D6CC @ 0x18008D6CC (sub_18008D6CC.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180018BD0(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
      v3 = (v1[2] - v2) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v3 >= 0x1000 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        v5 = v3 + 39;
        v6 = v2 - v4;
        if ( (unsigned __int64)(v6 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v6, v5);
          JUMPOUT(0x180018C31LL);
        }
        v2 = v4;
      }
      result = j_j__o_free(v2);
      *v1 = 0LL;
      v1[1] = 0LL;
      v1[2] = 0LL;
    }
  }
  return result;
}
