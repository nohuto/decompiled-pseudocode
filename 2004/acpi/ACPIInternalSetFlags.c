/*
 * XREFs of ACPIInternalSetFlags @ 0x1C0002350
 * Callers:
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C008F010 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIBusIrpQueryId @ 0x1C008FBF0 (ACPIBusIrpQueryId.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C00903EC (PcisuppAcquirePciInterfaces.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0099B08 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0099D50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009ED54 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalIsPci @ 0x1C00A2D4C (ACPIInternalIsPci.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AF5B0 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
