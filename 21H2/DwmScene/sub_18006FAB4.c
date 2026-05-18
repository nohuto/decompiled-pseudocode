/*
 * XREFs of sub_18006FAB4 @ 0x18006FAB4
 * Callers:
 *     sub_18012A779 @ 0x18012A779 (sub_18012A779.c)
 * Callees:
 *     sub_18006E8C4 @ 0x18006E8C4 (sub_18006E8C4.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_18006FAB4(_QWORD *a1)
{
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 2));
  sub_18006E8C4((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  return j_j__o_free(*a1);
}
