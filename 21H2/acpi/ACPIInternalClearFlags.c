/*
 * XREFs of ACPIInternalClearFlags @ 0x1C0001748
 * Callers:
 *     ACPIDetectFilterMatch @ 0x1C0093268 (ACPIDetectFilterMatch.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0094A68 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalSetSpare @ 0x1C0097F6C (ACPIInternalSetSpare.c)
 *     ACPIDockIrpEject @ 0x1C00AA350 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C00AB2A0 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AC2E0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B61A0 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
