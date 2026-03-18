/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x1403C4B30
 * Callers:
 *     HalpCheckInterruptType @ 0x1404CEFAC (HalpCheckInterruptType.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1404CF44C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x1407BC5F0 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x1407BC6D0 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x1408679C0 (HalpQueryPrimaryInterruptInformation.c)
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
