/*
 * XREFs of sub_180028A2C @ 0x180028A2C
 * Callers:
 *     sub_180120D10 @ 0x180120D10 (sub_180120D10.c)
 * Callees:
 *     sub_180027128 @ 0x180027128 (sub_180027128.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180028A2C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 *v4; // rcx

  v2 = *a1;
  v3 = *(__int64 **)(v2 + 8);
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_180027128((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      j_j__o_free(v4);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return j_j__o_free(v2);
}
