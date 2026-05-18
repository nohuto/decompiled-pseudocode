/*
 * XREFs of sub_18002E2FC @ 0x18002E2FC
 * Callers:
 *     sub_180126628 @ 0x180126628 (sub_180126628.c)
 * Callees:
 *     sub_18002C9F8 @ 0x18002C9F8 (sub_18002C9F8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E2FC(__int64 *a1)
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
      sub_18002C9F8((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      j_j__o_free(v4);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return j_j__o_free(v2);
}
