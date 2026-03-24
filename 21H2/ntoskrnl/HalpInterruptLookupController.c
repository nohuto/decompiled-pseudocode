/*
 * XREFs of HalpInterruptLookupController @ 0x140378D00
 * Callers:
 *     HalDisableInterrupt @ 0x140377280 (HalDisableInterrupt.c)
 *     HalpInterruptRemap @ 0x1403785E0 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestinationInternal @ 0x140378A6C (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140378C20 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x140378CA0 (HalpInterruptFindLines.c)
 *     HalpInterruptRestoreClock @ 0x1403868C8 (HalpInterruptRestoreClock.c)
 *     HalpUnmaskInterrupt @ 0x14038CBD0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A376C (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x1403A3AF8 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403A6F90 (HalpMaskInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8104 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterLine @ 0x1403AB1E0 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403AB844 (HalpInterruptRegisterController.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404BB634 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x1404BC750 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404BDB28 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BDB9C (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x140761838 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099823C (HalpInterruptMaskAcpi.c)
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
