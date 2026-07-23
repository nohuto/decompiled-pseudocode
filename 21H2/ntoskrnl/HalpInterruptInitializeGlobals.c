/*
 * XREFs of HalpInterruptInitializeGlobals @ 0x1402521E8
 * Callers:
 *     HalpInterruptInitSystem @ 0x14099C890 (HalpInterruptInitSystem.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *HalpInterruptInitializeGlobals()
{
  ULONG_PTR *result; // rax

  HalpInterruptControllerCount = 0;
  result = &HalpRegisteredInterruptControllers;
  qword_140C4BB38 = (__int64)&HalpRegisteredInterruptControllers;
  HalpRegisteredInterruptControllers = (ULONG_PTR)&HalpRegisteredInterruptControllers;
  return result;
}
