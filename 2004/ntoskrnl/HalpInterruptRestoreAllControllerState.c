/*
 * XREFs of HalpInterruptRestoreAllControllerState @ 0x140994950
 * Callers:
 *     HalpInterruptMaskLevelTriggeredLines @ 0x1404D2130 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptUnmaskLevelTriggeredLines @ 0x1404D2320 (HalpInterruptUnmaskLevelTriggeredLines.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A5E24 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpInterruptRestoreController @ 0x140388BC0 (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void HalpInterruptRestoreAllControllerState()
{
  ULONG_PTR *v0; // rbx
  __int64 v1; // rcx
  int v2; // eax

  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v0 != &HalpRegisteredInterruptControllers )
  {
    v1 = (__int64)v0;
    v0 = (ULONG_PTR *)*v0;
    v2 = HalpInterruptRestoreController(v1, 0);
    if ( v2 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 3uLL, v2);
  }
  HalpInterruptPicStateIntact = 1;
}
