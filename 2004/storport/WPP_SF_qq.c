/*
 * XREFs of WPP_SF_qq @ 0x1C0032650
 * Callers:
 *     RaDriverScsiIrp @ 0x1C000A820 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C000A8C0 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C000BE40 (RaDriverDeviceControlIrp.c)
 *     RaDriverPowerIrp @ 0x1C0010BC0 (RaDriverPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0010D38 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0010E1C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C001110C (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011224 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C00112FC (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011508 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00116BC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00117EC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0012208 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00122BC (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0012A80 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00131D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C00139B0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0013F80 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00140C0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0014170 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0014250 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0014300 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00144EC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015AC4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C001BADC (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C002E9CC (RaidAdapterStartDevice.c)
 *     RaDriverAddDevice @ 0x1C00330E0 (RaDriverAddDevice.c)
 *     StorpFreeTimer @ 0x1C003A5DC (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003A84C (StorpFreeWorkItem.c)
 *     StorpInitializeTimer @ 0x1C003B330 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003B4BC (StorpInitializeWorkItem.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C0044BB8 (RaidSyncAcpiEvalMethod.c)
 *     RaDriverCreateIrp @ 0x1C0071690 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0071740 (RaDriverCloseIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0071FE0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C0074110 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00766E8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0076F98 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C00772AC (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C0077C28 (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
