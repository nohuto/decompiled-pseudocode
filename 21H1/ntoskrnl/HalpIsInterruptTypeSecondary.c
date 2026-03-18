/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x1403C1500
 * Callers:
 *     HalpCheckInterruptType @ 0x1404CB59C (HalpCheckInterruptType.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1404CBA3C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x1407AB550 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x1407AB630 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140860CA4 (HalpQueryPrimaryInterruptInformation.c)
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
