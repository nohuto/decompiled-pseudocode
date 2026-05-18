/*
 * XREFs of sub_1800E4758 @ 0x1800E4758
 * Callers:
 *     sub_1800E459C @ 0x1800E459C (sub_1800E459C.c)
 *     sub_1800FD370 @ 0x1800FD370 (sub_1800FD370.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800E4758(__int64 **a1)
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
      v3 = (v1[2] - v2) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v3 >= 0x1000 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        v5 = v3 + 39;
        v6 = v2 - v4;
        if ( (unsigned __int64)(v6 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v6, v5);
          JUMPOUT(0x1800E47B9LL);
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
