/*
 * XREFs of ACPIInternalClearFlags @ 0x1C0002320
 * Callers:
 *     ACPIInitStopDevice @ 0x1C009092C (ACPIInitStopDevice.c)
 *     ACPIInternalSetSpare @ 0x1C009C630 (ACPIInternalSetSpare.c)
 *     ACPIDetectFilterMatch @ 0x1C009D9F4 (ACPIDetectFilterMatch.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009ED54 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIDockIrpEject @ 0x1C00AB230 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C00AC260 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AD3B0 (ACPIBusAndFilterIrpEject.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B6818 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
