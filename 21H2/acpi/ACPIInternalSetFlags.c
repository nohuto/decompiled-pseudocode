/*
 * XREFs of ACPIInternalSetFlags @ 0x1C0001778
 * Callers:
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0090240 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C00914F0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIBusIrpQueryId @ 0x1C0093F10 (ACPIBusIrpQueryId.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0094A68 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C00A0518 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIInternalIsPci @ 0x1C00A0FB0 (ACPIInternalIsPci.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C00A115C (PcisuppAcquirePciInterfaces.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AE970 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
