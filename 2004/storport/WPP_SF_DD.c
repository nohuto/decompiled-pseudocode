/*
 * XREFs of WPP_SF_DD @ 0x1C003243C
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x1C00112FC (RaidAdapterSetDevicePowerIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00131D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidStallDeviceQueue @ 0x1C001377C (RaidStallDeviceQueue.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00144EC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0015C6C (RaidpBuildAdapterBusRelations.c)
 *     RaUnitSmartReturnStatus @ 0x1C0047AA0 (RaUnitSmartReturnStatus.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0071FE0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00766E8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0076F98 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C00772AC (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_DD(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
