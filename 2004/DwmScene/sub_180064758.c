/*
 * XREFs of sub_180064758 @ 0x180064758
 * Callers:
 *     sub_180065620 @ 0x180065620 (sub_180065620.c)
 *     sub_1800657A4 @ 0x1800657A4 (sub_1800657A4.c)
 * Callees:
 *     sub_18006487C @ 0x18006487C (sub_18006487C.c)
 *     sub_180065B6C @ 0x180065B6C (sub_180065B6C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180064758(__int64 *a1, __int64 a2)
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
      sub_18006487C(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180065B6C(v6 + 4, 0LL);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
