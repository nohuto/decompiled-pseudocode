/*
 * XREFs of sub_18011A90C @ 0x18011A90C
 * Callers:
 *     sub_18011AA00 @ 0x18011AA00 (sub_18011AA00.c)
 * Callees:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     sub_1801190BC @ 0x1801190BC (sub_1801190BC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_18011A90C(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 240);
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  sub_180068FF4(a1 + 240, (__int64)v1, *(__int64 **)(*v1 + 8LL));
  j_j__o_free(*v1);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 160));
  sub_1801190BC((__int64 *)(a1 + 144), a1 + 144);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 64));
  return sub_18011C05C(a1);
}
