/*
 * XREFs of sub_180085D6C @ 0x180085D6C
 * Callers:
 *     sub_180072828 @ 0x180072828 (sub_180072828.c)
 *     sub_180072C70 @ 0x180072C70 (sub_180072C70.c)
 *     sub_1800B826C @ 0x1800B826C (sub_1800B826C.c)
 *     sub_1801278E8 @ 0x1801278E8 (sub_1801278E8.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180085D6C(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
