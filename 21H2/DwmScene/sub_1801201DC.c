/*
 * XREFs of sub_1801201DC @ 0x1801201DC
 * Callers:
 *     sub_1801202D0 @ 0x1801202D0 (sub_1801202D0.c)
 * Callees:
 *     sub_18006E8C4 @ 0x18006E8C4 (sub_18006E8C4.c)
 *     sub_18011E98C @ 0x18011E98C (sub_18011E98C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_1801201DC(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 240);
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  sub_18006E8C4(a1 + 240, (__int64)v1, *(__int64 **)(*v1 + 8LL));
  j_j__o_free(*v1);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 160));
  sub_18011E98C((__int64 *)(a1 + 144), a1 + 144);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 64));
  return sub_18012192C(a1);
}
