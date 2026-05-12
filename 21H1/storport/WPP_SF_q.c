/*
 * XREFs of WPP_SF_q @ 0x1C0031F68
 * Callers:
 *     StorpRequestTimer @ 0x1C0001960 (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000DAF0 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0013DFC (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0014E8C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaDriverUnload @ 0x1C0032E30 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C0038620 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C003A018 (StorpFreeTimer.c)
 *     StorpInitializeTimer @ 0x1C003AD60 (StorpInitializeTimer.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x1C0043F04 (RaidQueryAcpiDsdSynchronous.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C00455E0 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C0045784 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0045E28 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C0046130 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0046634 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0046C78 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C00484F0 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C00499E8 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0073284 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
