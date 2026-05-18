/*
 * XREFs of sub_18006A1E4 @ 0x18006A1E4
 * Callers:
 *     sub_180124E61 @ 0x180124E61 (sub_180124E61.c)
 * Callees:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_18006A1E4(_QWORD *a1)
{
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 2));
  sub_180068FF4((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  return j_j__o_free(*a1);
}
