/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x1403C56C0
 * Callers:
 *     HalpCheckInterruptType @ 0x1404D0BBC (HalpCheckInterruptType.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1404D105C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x1407C0F10 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x1407C0FF0 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140865730 (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIsInterruptTypeSecondary(int a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 && a2 >= SecondaryGsivRangeStart )
    return a2 < SecondaryGsivRangeSize + SecondaryGsivRangeStart;
  return v2;
}
