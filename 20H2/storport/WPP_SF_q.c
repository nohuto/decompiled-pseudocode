/*
 * XREFs of WPP_SF_q @ 0x1C0033368
 * Callers:
 *     StorpRequestTimer @ 0x1C0001008 (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0010870 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00160FC (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017194 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaDriverUnload @ 0x1C0034230 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C0039A50 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C003B49C (StorpFreeTimer.c)
 *     StorpInitializeTimer @ 0x1C003C1F0 (StorpInitializeTimer.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x1C00454F0 (RaidQueryAcpiDsdSynchronous.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0046B00 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C0046CA4 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0047348 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C0047650 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0047B54 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0048198 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0049A10 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C004AF08 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00744D4 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
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
