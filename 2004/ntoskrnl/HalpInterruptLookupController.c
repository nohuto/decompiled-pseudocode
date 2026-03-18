/*
 * XREFs of HalpInterruptLookupController @ 0x1403768E0
 * Callers:
 *     HalDisableInterrupt @ 0x140374E60 (HalDisableInterrupt.c)
 *     HalpInterruptRemap @ 0x1403761C0 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestinationInternal @ 0x14037664C (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140376800 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x140376880 (HalpInterruptFindLines.c)
 *     HalpInterruptRestoreClock @ 0x1403839AC (HalpInterruptRestoreClock.c)
 *     HalpUnmaskInterrupt @ 0x14038A210 (HalpUnmaskInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A09DC (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x1403A0D68 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403A42B0 (HalpMaskInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403ABB84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterLine @ 0x1403AEC40 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403AF2A4 (HalpInterruptRegisterController.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404B6754 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x1404B7870 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B8C48 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404B8CBC (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x14074E468 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140994EEC (HalpInterruptMaskAcpi.c)
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
