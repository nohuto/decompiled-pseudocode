/*
 * XREFs of sub_180066C04 @ 0x180066C04
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018FB0 @ 0x180018FB0 (sub_180018FB0.c)
 */

_QWORD *__fastcall sub_180066C04(_QWORD *a1, __int64 a2)
{
  sub_180018FB0((__int64)a1, a2);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  return a1;
}
