/*
 * XREFs of sub_1800C88F8 @ 0x1800C88F8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018900 @ 0x180018900 (sub_180018900.c)
 */

_QWORD *__fastcall sub_1800C88F8(_QWORD *a1, __int64 a2)
{
  sub_180018900((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineUnexpectedException::`vftable';
  return a1;
}
