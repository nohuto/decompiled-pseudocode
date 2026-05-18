/*
 * XREFs of sub_1800646EC @ 0x1800646EC
 * Callers:
 *     sub_180065648 @ 0x180065648 (sub_180065648.c)
 *     sub_180065664 @ 0x180065664 (sub_180065664.c)
 *     sub_180065A58 @ 0x180065A58 (sub_180065A58.c)
 *     sub_180066088 @ 0x180066088 (sub_180066088.c)
 *     sub_180067840 @ 0x180067840 (sub_180067840.c)
 *     sub_180067A1C @ 0x180067A1C (sub_180067A1C.c)
 *     sub_180067AD4 @ 0x180067AD4 (sub_180067AD4.c)
 *     sub_1800CFE34 @ 0x1800CFE34 (sub_1800CFE34.c)
 *     sub_1800D07D0 @ 0x1800D07D0 (sub_1800D07D0.c)
 *     sub_1800D0908 @ 0x1800D0908 (sub_1800D0908.c)
 *     sub_1800D0E34 @ 0x1800D0E34 (sub_1800D0E34.c)
 *     sub_180102EB8 @ 0x180102EB8 (sub_180102EB8.c)
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 * Callees:
 *     sub_180064820 @ 0x180064820 (sub_180064820.c)
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800646EC(__int64 *a1, __int64 a2)
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
      sub_180064820(a1, a2, v5[2]);
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
