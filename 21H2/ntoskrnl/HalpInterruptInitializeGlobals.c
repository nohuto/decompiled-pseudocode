/*
 * XREFs of HalpInterruptInitializeGlobals @ 0x1402D3F78
 * Callers:
 *     HalpInterruptInitSystem @ 0x14099B890 (HalpInterruptInitSystem.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *HalpInterruptInitializeGlobals()
{
  ULONG_PTR *result; // rax

  HalpInterruptControllerCount = 0;
  result = &HalpRegisteredInterruptControllers;
  qword_140C4BAF8 = (__int64)&HalpRegisteredInterruptControllers;
  HalpRegisteredInterruptControllers = (ULONG_PTR)&HalpRegisteredInterruptControllers;
  return result;
}
