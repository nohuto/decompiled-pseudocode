/*
 * XREFs of sub_1800CE1C8 @ 0x1800CE1C8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018FB0 @ 0x180018FB0 (sub_180018FB0.c)
 */

_QWORD *__fastcall sub_1800CE1C8(_QWORD *a1, __int64 a2)
{
  sub_180018FB0((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineUnexpectedException::`vftable';
  return a1;
}
