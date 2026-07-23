/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x1404C9514
 * Callers:
 *     IoMapTransfer @ 0x140388DC0 (IoMapTransfer.c)
 *     HalMapTransferEx @ 0x14039F830 (HalMapTransferEx.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A1344 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A64D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalJoinDmaDomain @ 0x1403C72B0 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateAndPremapLa @ 0x1404B6FB0 (HalpDmaAllocateAndPremapLa.c)
 *     HalpDmaAddReservedRangesToDomain @ 0x1404C4C50 (HalpDmaAddReservedRangesToDomain.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x1404DA4C4 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x1404DC44C (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapLogicalRange(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  if ( !HalpHvIommu )
    return HalpIommuMapLogicalRange(0, *(_QWORD *)(a1 + 24), a2, a3, a4, a5);
  if ( HalpHvIommuDeviceDomain )
    return IommupHvMapDeviceLogicalRange(*(_DWORD *)(a1 + 32), a2, a3, a4, a5);
  return 3221225659LL;
}
