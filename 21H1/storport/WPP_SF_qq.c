/*
 * XREFs of WPP_SF_qq @ 0x1C00320D0
 * Callers:
 *     RaDriverScsiIrp @ 0x1C000A230 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C000A2D0 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C000B850 (RaDriverDeviceControlIrp.c)
 *     RaDriverPowerIrp @ 0x1C000EE00 (RaDriverPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C000EF78 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000F05C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000F34C (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000F464 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C000F53C (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000F748 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C000F8FC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000FA2C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0010394 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0010448 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0010C10 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0011364 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0011B40 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0012110 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0012250 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0012300 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00123E0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0012490 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001267C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0013C54 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C0019C34 (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C002E41C (RaidAdapterStartDevice.c)
 *     RaDriverAddDevice @ 0x1C0032B60 (RaDriverAddDevice.c)
 *     StorpFreeTimer @ 0x1C003A018 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003A27C (StorpFreeWorkItem.c)
 *     StorpInitializeTimer @ 0x1C003AD60 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003AEEC (StorpInitializeWorkItem.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C00444D0 (RaidSyncAcpiEvalMethod.c)
 *     RaDriverCreateIrp @ 0x1C0071780 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0071830 (RaDriverCloseIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00720D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C0073DD0 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00767C4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0077074 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0077388 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C0077D04 (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
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
