/*
 * XREFs of sub_18006D054 @ 0x18006D054
 * Callers:
 *     sub_1800722C4 @ 0x1800722C4 (sub_1800722C4.c)
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 * Callees:
 *     sub_180065B6C @ 0x180065B6C (sub_180065B6C.c)
 *     sub_18006D2B0 @ 0x18006D2B0 (sub_18006D2B0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006D054(__int64 *a1, __int64 a2)
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
      sub_18006D2B0(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180065B6C(v6 + 4, 0);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
