/*
 * XREFs of ACPIDebugGetIrpText @ 0x1C0001908
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008E540 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C008E6C0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C008F350 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIFanStartDevice @ 0x1C0090820 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C0090CB0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0090EC0 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C0090FD0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C00914F0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C0091690 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0091924 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C00919C0 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0091E90 (ACPIRootIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00937D0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0093BA0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryId @ 0x1C0093F10 (ACPIBusIrpQueryId.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryResources @ 0x1C00978C0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0097B70 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C009F950 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C00A0740 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C00A08E0 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AA5F0 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00AA8A0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00AACA0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00AAFD0 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C00AB180 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AC2E0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C00AC720 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00AC7F0 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00ACA70 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00ACBF0 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AE970 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00AEBD0 (ACPIFilterIrpStopDevice.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00AED70 (ACPIFilterIrpSurpriseRemoval.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B4790 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00B48C0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C00B4A00 (ACPIRootIrpStopDevice.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIDebugGetIrpText(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax

  v2 = a2;
  if ( a2 >= 0x1Au )
    v2 = 26LL;
  return ACPIDispatchPnpTableNames[v2];
}
