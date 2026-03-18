/*
 * XREFs of HalpIommuFreeDeviceId @ 0x14037981C
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x1407621B4 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140379260 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  return HalpMmAllocCtxFree(a1, a1);
}
