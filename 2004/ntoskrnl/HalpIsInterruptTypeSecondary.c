/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x1403C23C0
 * Callers:
 *     HalpCheckInterruptType @ 0x1404CBA4C (HalpCheckInterruptType.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1404CBEEC (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x1407AE6B0 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x1407AE790 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140861FA0 (HalpQueryPrimaryInterruptInformation.c)
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
