/*
 * XREFs of HalpIommuFreeDeviceId @ 0x14037788C
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x1407535D4 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403772D0 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  return HalpMmAllocCtxFree(a1, a1);
}
