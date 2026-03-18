/*
 * XREFs of HalpIommuFreeDeviceId @ 0x1403CD2B8
 * Callers:
 *     IommuDeviceCreate @ 0x1408459C0 (IommuDeviceCreate.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x140846600 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
}
