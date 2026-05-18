/*
 * XREFs of sub_180069F84 @ 0x180069F84
 * Callers:
 *     sub_180124D93 @ 0x180124D93 (sub_180124D93.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180069F84(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
