/*
 * XREFs of HalpInterruptLookupController @ 0x140375AD0
 * Callers:
 *     HalDisableInterrupt @ 0x140374050 (HalDisableInterrupt.c)
 *     HalpInterruptRemap @ 0x1403753B0 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestinationInternal @ 0x14037583C (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x1403759F0 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x140375A70 (HalpInterruptFindLines.c)
 *     HalpInterruptRestoreClock @ 0x14038305C (HalpInterruptRestoreClock.c)
 *     HalpUnmaskInterrupt @ 0x1403891A0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A024C (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x1403A05D8 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403A3B50 (HalpMaskInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A4ABC (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterLine @ 0x1403A7B80 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403A81E4 (HalpInterruptRegisterController.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404B6074 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x1404B7190 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B8568 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404B85DC (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x14074A048 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x1409938AC (HalpInterruptMaskAcpi.c)
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
