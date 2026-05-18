/*
 * XREFs of sub_18006F854 @ 0x18006F854
 * Callers:
 *     sub_18012A6AB @ 0x18012A6AB (sub_18012A6AB.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18006F854(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IGpuQueryPool::`vftable';
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  return result;
}
