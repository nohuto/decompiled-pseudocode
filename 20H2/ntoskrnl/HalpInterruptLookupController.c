/*
 * XREFs of HalpInterruptLookupController @ 0x140378870
 * Callers:
 *     HalDisableInterrupt @ 0x140376DF0 (HalDisableInterrupt.c)
 *     HalpInterruptRemap @ 0x140378150 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403785DC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140378790 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x140378810 (HalpInterruptFindLines.c)
 *     HalpInterruptRestoreClock @ 0x140385AD8 (HalpInterruptRestoreClock.c)
 *     HalpUnmaskInterrupt @ 0x14038C4B0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A2EAC (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x1403A3238 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403A66D0 (HalpMaskInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403AE154 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterLine @ 0x1403B1230 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403B1894 (HalpInterruptRegisterController.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404B9C74 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x1404BAD90 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404BC168 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BC1DC (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x14075D048 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099B04C (HalpInterruptMaskAcpi.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpInterruptLookupController(int a1)
{
  ULONG_PTR *v1; // rax
  ULONG_PTR *v2; // rdx

  v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v1 != &HalpRegisteredInterruptControllers )
  {
    v2 = v1;
    v1 = (ULONG_PTR *)*v1;
    if ( *((_DWORD *)v2 + 58) == a1 )
      return v2;
  }
  return 0LL;
}
