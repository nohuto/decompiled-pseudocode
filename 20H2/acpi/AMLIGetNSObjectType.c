/*
 * XREFs of AMLIGetNSObjectType @ 0x1C000256C
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C008F410 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0090DA8 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0095FF0 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C00963FC (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIProcessorDeviceControl @ 0x1C009A670 (ACPIProcessorDeviceControl.c)
 *     EnableDisableRegions @ 0x1C009D614 (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009E810 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}
