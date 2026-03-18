/*
 * XREFs of HalpIommuFreeDeviceId @ 0x140376A7C
 * Callers:
 *     HalpQueryIommuReservedRegionInformation @ 0x14074EF44 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403764C0 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpIommuFreeDeviceId(__int64 a1)
{
  return HalpMmAllocCtxFree(a1, a1);
}
