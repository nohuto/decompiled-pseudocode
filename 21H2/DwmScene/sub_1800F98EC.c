/*
 * XREFs of sub_1800F98EC @ 0x1800F98EC
 * Callers:
 *     sub_1800B6800 @ 0x1800B6800 (sub_1800B6800.c)
 * Callees:
 *     sub_1800A0998 @ 0x1800A0998 (sub_1800A0998.c)
 */

_QWORD *__fastcall sub_1800F98EC(_QWORD *a1)
{
  sub_1800A0998(a1);
  *a1 = &Spectre::Engine::SamplerGeneric::`vftable';
  return a1;
}
