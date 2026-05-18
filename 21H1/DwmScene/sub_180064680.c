/*
 * XREFs of sub_180064680 @ 0x180064680
 * Callers:
 *     sub_1800656FC @ 0x1800656FC (sub_1800656FC.c)
 *     sub_180066684 @ 0x180066684 (sub_180066684.c)
 *     sub_180078BF4 @ 0x180078BF4 (sub_180078BF4.c)
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 *     sub_18009F034 @ 0x18009F034 (sub_18009F034.c)
 *     sub_1800A3808 @ 0x1800A3808 (sub_1800A3808.c)
 *     sub_180133A50 @ 0x180133A50 (sub_180133A50.c)
 * Callees:
 *     sub_1800647C4 @ 0x1800647C4 (sub_1800647C4.c)
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180064680(__int64 *a1, __int64 a2)
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
      sub_1800647C4(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180065AF4(v6 + 4, 0LL);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
