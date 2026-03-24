/*
 * XREFs of HalpIommuFreeDeviceId @ 0x140379A1C
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x140765484 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140379460 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  return HalpMmAllocCtxFree(a1, a1);
}
