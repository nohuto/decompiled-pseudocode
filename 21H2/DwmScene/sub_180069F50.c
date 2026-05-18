/*
 * XREFs of sub_180069F50 @ 0x180069F50
 * Callers:
 *     sub_18006AFCC @ 0x18006AFCC (sub_18006AFCC.c)
 *     sub_18006BF54 @ 0x18006BF54 (sub_18006BF54.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 *     sub_18007E8F0 @ 0x18007E8F0 (sub_18007E8F0.c)
 *     sub_1800A4904 @ 0x1800A4904 (sub_1800A4904.c)
 *     sub_1800A90D8 @ 0x1800A90D8 (sub_1800A90D8.c)
 *     sub_180139410 @ 0x180139410 (sub_180139410.c)
 * Callees:
 *     sub_18006A094 @ 0x18006A094 (sub_18006A094.c)
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180069F50(__int64 *a1, __int64 a2)
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
      sub_18006A094(a1, a2, v5[2]);
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
