/*
 * XREFs of sub_1800BDB04 @ 0x1800BDB04
 * Callers:
 *     sub_1800BEAA0 @ 0x1800BEAA0 (sub_1800BEAA0.c)
 * Callees:
 *     sub_1800BDA6C @ 0x1800BDA6C (sub_1800BDA6C.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 */

__int64 __fastcall sub_1800BDB04(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 1552));
  sub_1800BDA6C((_QWORD *)(a1 + 1488));
  return sub_180077CDC(a1);
}
