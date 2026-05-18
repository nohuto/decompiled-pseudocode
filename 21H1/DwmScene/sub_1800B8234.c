/*
 * XREFs of sub_1800B8234 @ 0x1800B8234
 * Callers:
 *     sub_1800B91D0 @ 0x1800B91D0 (sub_1800B91D0.c)
 * Callees:
 *     sub_1800B819C @ 0x1800B819C (sub_1800B819C.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_1800B8234(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 1552));
  sub_1800B819C((_QWORD *)(a1 + 1488));
  return sub_18007240C(a1);
}
