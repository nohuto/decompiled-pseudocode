/*
 * XREFs of WPP_SF_qq @ 0x1C00334D0
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0009AE0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0009B80 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C000B100 (RaDriverDeviceControlIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00112F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaDriverPowerIrp @ 0x1C00120C0 (RaDriverPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0012238 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001231C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C001260C (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0012770 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0012848 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0012A54 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0012C0C (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012D3C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C001375C (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0013810 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013FE0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014734 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0014F10 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C00154E0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0015620 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0015720 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0015800 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C00158B0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015F54 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C001C77C (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C002F830 (RaidAdapterStartDevice.c)
 *     RaDriverAddDevice @ 0x1C0033F60 (RaDriverAddDevice.c)
 *     StorpFreeTimer @ 0x1C003B49C (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003B70C (StorpFreeWorkItem.c)
 *     StorpInitializeTimer @ 0x1C003C1F0 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003C37C (StorpInitializeWorkItem.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C0045ABC (RaidSyncAcpiEvalMethod.c)
 *     RaDriverCreateIrp @ 0x1C0072B60 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0072C10 (RaDriverCloseIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C0075020 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077BBC (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007846C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078780 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C0079120 (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
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
