/*
 * XREFs of sub_18002D87C @ 0x18002D87C
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018FB0 @ 0x180018FB0 (sub_180018FB0.c)
 */

_QWORD *__fastcall sub_18002D87C(_QWORD *a1, __int64 a2)
{
  sub_180018FB0((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  return a1;
}
