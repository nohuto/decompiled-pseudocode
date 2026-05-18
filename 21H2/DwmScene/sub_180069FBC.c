/*
 * XREFs of sub_180069FBC @ 0x180069FBC
 * Callers:
 *     sub_18006AF18 @ 0x18006AF18 (sub_18006AF18.c)
 *     sub_18006AF34 @ 0x18006AF34 (sub_18006AF34.c)
 *     sub_18006B328 @ 0x18006B328 (sub_18006B328.c)
 *     sub_18006B958 @ 0x18006B958 (sub_18006B958.c)
 *     sub_18006D110 @ 0x18006D110 (sub_18006D110.c)
 *     sub_18006D2EC @ 0x18006D2EC (sub_18006D2EC.c)
 *     sub_18006D3A4 @ 0x18006D3A4 (sub_18006D3A4.c)
 *     sub_1800D5704 @ 0x1800D5704 (sub_1800D5704.c)
 *     sub_1800D60A0 @ 0x1800D60A0 (sub_1800D60A0.c)
 *     sub_1800D61D8 @ 0x1800D61D8 (sub_1800D61D8.c)
 *     sub_1800D6704 @ 0x1800D6704 (sub_1800D6704.c)
 *     sub_180108788 @ 0x180108788 (sub_180108788.c)
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 * Callees:
 *     sub_18006A0F0 @ 0x18006A0F0 (sub_18006A0F0.c)
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180069FBC(__int64 *a1, __int64 a2)
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
      sub_18006A0F0(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_18006B3C4(v6 + 4, 0LL);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
