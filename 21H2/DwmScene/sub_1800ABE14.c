/*
 * XREFs of sub_1800ABE14 @ 0x1800ABE14
 * Callers:
 *     sub_1800ACF58 @ 0x1800ACF58 (sub_1800ACF58.c)
 *     sub_1800ACF68 @ 0x1800ACF68 (sub_1800ACF68.c)
 * Callees:
 *     sub_1800784C0 @ 0x1800784C0 (sub_1800784C0.c)
 *     sub_1800ABE80 @ 0x1800ABE80 (sub_1800ABE80.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800ABE14(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_1800ABE80(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_1800784C0(v6 + 4, 0);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
