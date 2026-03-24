/*
 * XREFs of ACPIInternalSetFlags @ 0x1C0002350
 * Callers:
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C008F320 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIBusIrpQueryId @ 0x1C008FF00 (ACPIBusIrpQueryId.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C00906FC (PcisuppAcquirePciInterfaces.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0099E28 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C009A070 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009F074 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalIsPci @ 0x1C00A306C (ACPIInternalIsPci.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AF8D0 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
