/*
 * XREFs of HalpInterruptLookupController @ 0x140252134
 * Callers:
 *     HalpInterruptSetDestinationInternal @ 0x140251EA0 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140252050 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x1402520D4 (HalpInterruptFindLines.c)
 *     HalpInterruptRestoreClock @ 0x1403915EC (HalpInterruptRestoreClock.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     HalpMaskInterrupt @ 0x140397D10 (HalpMaskInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403B043C (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x1403B07C8 (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x1403B6180 (HalpUnmaskInterrupt.c)
 *     HalpInterruptRegisterLine @ 0x1403BD66C (HalpInterruptRegisterLine.c)
 *     HalpInterruptRegisterController @ 0x1403BDD00 (HalpInterruptRegisterController.c)
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1405080D4 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptSetRemappedLineState @ 0x14050850C (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x1405091D0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x14050A598 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050A60C (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x140908918 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140A521EC (HalpInterruptMaskAcpi.c)
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
    if ( *((_DWORD *)v2 + 60) == a1 )
      return v2;
  }
  return 0LL;
}
