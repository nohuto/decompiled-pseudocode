/*
 * XREFs of sub_18011C1A0 @ 0x18011C1A0
 * Callers:
 *     sub_180066D64 @ 0x180066D64 (sub_180066D64.c)
 *     sub_18006AFE4 @ 0x18006AFE4 (sub_18006AFE4.c)
 *     sub_18006B044 @ 0x18006B044 (sub_18006B044.c)
 *     sub_18006F860 @ 0x18006F860 (sub_18006F860.c)
 *     sub_18006FC10 @ 0x18006FC10 (sub_18006FC10.c)
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     sub_180080D80 @ 0x180080D80 (sub_180080D80.c)
 *     sub_18008B58C @ 0x18008B58C (sub_18008B58C.c)
 *     sub_1800A90D8 @ 0x1800A90D8 (sub_1800A90D8.c)
 *     sub_1800D5594 @ 0x1800D5594 (sub_1800D5594.c)
 *     sub_1800D5640 @ 0x1800D5640 (sub_1800D5640.c)
 *     sub_1800D57C4 @ 0x1800D57C4 (sub_1800D57C4.c)
 *     sub_180108A34 @ 0x180108A34 (sub_180108A34.c)
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 *     _Cnd_destroy_in_situ @ 0x18012537A (_Cnd_destroy_in_situ.c)
 */

__int64 __fastcall sub_18011C1A0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    Cnd_destroy_in_situ((_Cnd_t)(v1 + 152));
    Cnd_destroy_in_situ((_Cnd_t)(v1 + 80));
    Mtx_destroy_in_situ((_Mtx_t)v1);
    return j__o_free(v1);
  }
  return result;
}
