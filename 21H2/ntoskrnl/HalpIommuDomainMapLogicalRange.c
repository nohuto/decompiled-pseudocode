/*
 * XREFs of HalpIommuDomainMapLogicalRange @ 0x14051AC2C
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403BB820 (HalpIommuAllocateDmaDomain.c)
 *     IommuMapIdentityRangeEx @ 0x1405284B0 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x1405286D0 (IommuMapLogicalRangeEx.c)
 *     IommuMapReservedLogicalRange @ 0x1405287F0 (IommuMapReservedLogicalRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140528B30 (IommuReserveLogicalAddressRange.c)
 * Callees:
 *     IommupHvMapDeviceLogicalRange @ 0x140527A68 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x140529F08 (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainMapLogicalRange(ULONG_PTR a1, int a2, int a3, __int64 a4, ULONG_PTR a5)
{
  if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
    return HalpIommuMapLogicalRange(0, *(_QWORD *)(a1 + 40), a2, a3, a4, a5);
  else
    return IommupHvMapDeviceLogicalRange(a1, a5);
}
