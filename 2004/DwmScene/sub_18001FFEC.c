/*
 * XREFs of sub_18001FFEC @ 0x18001FFEC
 * Callers:
 *     sub_1800220E8 @ 0x1800220E8 (sub_1800220E8.c)
 *     sub_18003E638 @ 0x18003E638 (sub_18003E638.c)
 *     sub_180062DE8 @ 0x180062DE8 (sub_180062DE8.c)
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 *     sub_180085CBC @ 0x180085CBC (sub_180085CBC.c)
 *     sub_1800915D4 @ 0x1800915D4 (sub_1800915D4.c)
 *     sub_18009988C @ 0x18009988C (sub_18009988C.c)
 *     sub_18009B244 @ 0x18009B244 (sub_18009B244.c)
 *     sub_18009EF18 @ 0x18009EF18 (sub_18009EF18.c)
 *     sub_18009F034 @ 0x18009F034 (sub_18009F034.c)
 *     sub_1800A2258 @ 0x1800A2258 (sub_1800A2258.c)
 *     sub_1800A22DC @ 0x1800A22DC (sub_1800A22DC.c)
 *     sub_1800A2B10 @ 0x1800A2B10 (sub_1800A2B10.c)
 *     sub_1800A58CC @ 0x1800A58CC (sub_1800A58CC.c)
 *     sub_1800A7698 @ 0x1800A7698 (sub_1800A7698.c)
 *     sub_1800B826C @ 0x1800B826C (sub_1800B826C.c)
 *     sub_1800CAA68 @ 0x1800CAA68 (sub_1800CAA68.c)
 *     sub_1800CC4C4 @ 0x1800CC4C4 (sub_1800CC4C4.c)
 *     sub_1800CD134 @ 0x1800CD134 (sub_1800CD134.c)
 *     sub_1800CDDB0 @ 0x1800CDDB0 (sub_1800CDDB0.c)
 *     sub_1800F07E0 @ 0x1800F07E0 (sub_1800F07E0.c)
 *     sub_1800F1414 @ 0x1800F1414 (sub_1800F1414.c)
 *     sub_180127D99 @ 0x180127D99 (sub_180127D99.c)
 * Callees:
 *     sub_1800200A0 @ 0x1800200A0 (sub_1800200A0.c)
 *     sub_180022FE0 @ 0x180022FE0 (sub_180022FE0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18001FFEC(__int64 *a1, __int64 a2)
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
      sub_1800200A0(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180022FE0(v6 + 4, 0LL);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
