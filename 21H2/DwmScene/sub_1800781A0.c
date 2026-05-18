/*
 * XREFs of sub_1800781A0 @ 0x1800781A0
 * Callers:
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     sub_18012ADF2 @ 0x18012ADF2 (sub_18012ADF2.c)
 *     sub_18012B029 @ 0x18012B029 (sub_18012B029.c)
 * Callees:
 *     sub_18002C9B0 @ 0x18002C9B0 (sub_18002C9B0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800781A0(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rcx

  v1 = a1 + 2;
  v3 = a1[2];
  v4 = *(__int64 **)(v3 + 8);
  if ( !*((_BYTE *)v4 + 25) )
  {
    do
    {
      sub_18002C9B0((__int64)v1, (__int64)v1, (__int64 *)v4[2]);
      v5 = v4;
      v4 = (__int64 *)*v4;
      j_j__o_free(v5);
    }
    while ( !*((_BYTE *)v4 + 25) );
    v3 = *v1;
  }
  j_j__o_free(v3);
  return sub_1800728B8(a1, (__int64)a1);
}
