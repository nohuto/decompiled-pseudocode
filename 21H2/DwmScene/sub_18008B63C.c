/*
 * XREFs of sub_18008B63C @ 0x18008B63C
 * Callers:
 *     sub_1800780F8 @ 0x1800780F8 (sub_1800780F8.c)
 *     sub_180078540 @ 0x180078540 (sub_180078540.c)
 *     sub_1800BDB3C @ 0x1800BDB3C (sub_1800BDB3C.c)
 *     sub_18012D200 @ 0x18012D200 (sub_18012D200.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18008B63C(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
