/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x1404C7904
 * Callers:
 *     IoMapTransfer @ 0x140388510 (IoMapTransfer.c)
 *     HalMapTransferEx @ 0x14039FAA0 (HalMapTransferEx.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0934 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A5AC0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalJoinDmaDomain @ 0x1403C6720 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateAndPremapLa @ 0x1404B53B0 (HalpDmaAllocateAndPremapLa.c)
 *     HalpDmaAddReservedRangesToDomain @ 0x1404C3040 (HalpDmaAddReservedRangesToDomain.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x1404D8874 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x1404DA7FC (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapLogicalRange(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  if ( !HalpHvIommu )
    return HalpIommuMapLogicalRange(0, *(_QWORD *)(a1 + 24), a2, a3, a4, a5);
  if ( HalpHvIommuDeviceDomain )
    return IommupHvMapDeviceLogicalRange(*(_DWORD *)(a1 + 32), a2, a3, a4, a5);
  return 3221225659LL;
}
