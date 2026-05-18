/*
 * XREFs of sub_180067BA0 @ 0x180067BA0
 * Callers:
 *     sub_18012A366 @ 0x18012A366 (sub_18012A366.c)
 *     unknown_libname_56 @ 0x18012B752 (unknown_libname_56.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180067BA0(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
