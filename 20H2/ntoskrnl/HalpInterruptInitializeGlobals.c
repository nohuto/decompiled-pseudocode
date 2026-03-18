/*
 * XREFs of HalpInterruptInitializeGlobals @ 0x140331CD8
 * Callers:
 *     HalpInterruptInitSystem @ 0x1409A1570 (HalpInterruptInitSystem.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *HalpInterruptInitializeGlobals()
{
  ULONG_PTR *result; // rax

  HalpInterruptControllerCount = 0;
  result = &HalpRegisteredInterruptControllers;
  qword_140C4B978 = (__int64)&HalpRegisteredInterruptControllers;
  HalpRegisteredInterruptControllers = (ULONG_PTR)&HalpRegisteredInterruptControllers;
  return result;
}
