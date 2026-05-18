/*
 * XREFs of sub_1800A7B28 @ 0x1800A7B28
 * Callers:
 *     sub_1800A8F78 @ 0x1800A8F78 (sub_1800A8F78.c)
 *     sub_1800A90D8 @ 0x1800A90D8 (sub_1800A90D8.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_180081170 @ 0x180081170 (sub_180081170.c)
 *     sub_1800A7BAC @ 0x1800A7BAC (sub_1800A7BAC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A7B28(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // r14
  __int64 *v6; // rdi

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_1800A7BAC(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_1800258BC(v6 + 7, (__int64)(v6 + 7));
      sub_180081170(v6 + 5);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
