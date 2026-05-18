/*
 * XREFs of sub_1800622D0 @ 0x1800622D0
 * Callers:
 *     sub_180124A4E @ 0x180124A4E (sub_180124A4E.c)
 *     unknown_libname_54 @ 0x180125E3A (unknown_libname_54.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800622D0(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
