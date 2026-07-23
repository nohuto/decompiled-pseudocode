/*
 * XREFs of HalpInterruptLookupController @ 0x140378850
 * Callers:
 *     HalDisableInterrupt @ 0x140376DD0 (HalDisableInterrupt.c)
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403785BC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140378770 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptRestoreClock @ 0x140386A18 (HalpInterruptRestoreClock.c)
 *     HalpUnmaskInterrupt @ 0x14038CD20 (HalpUnmaskInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A38BC (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403A70E0 (HalpMaskInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8E94 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterLine @ 0x1403ABF70 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403AC5D4 (HalpInterruptRegisterController.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404BB874 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x1404BC990 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404BDD68 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BDDDC (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099923C (HalpInterruptMaskAcpi.c)
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
