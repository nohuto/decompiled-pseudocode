/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x1404C92D4
 * Callers:
 *     IoMapTransfer @ 0x140388C70 (IoMapTransfer.c)
 *     HalMapTransferEx @ 0x14039F6E0 (HalMapTransferEx.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A11F4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A6380 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalJoinDmaDomain @ 0x1403C7110 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateAndPremapLa @ 0x1404B6D70 (HalpDmaAllocateAndPremapLa.c)
 *     HalpDmaAddReservedRangesToDomain @ 0x1404C4A10 (HalpDmaAddReservedRangesToDomain.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x1404DA284 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x1404DC20C (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapLogicalRange(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  if ( !HalpHvIommu )
    return HalpIommuMapLogicalRange(0, *(_QWORD *)(a1 + 24), a2, a3, a4, a5);
  if ( HalpHvIommuDeviceDomain )
    return IommupHvMapDeviceLogicalRange(*(_DWORD *)(a1 + 32), a2, a3, a4, a5);
  return 3221225659LL;
}
