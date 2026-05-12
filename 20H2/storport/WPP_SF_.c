/*
 * XREFs of WPP_SF_ @ 0x1C003324C
 * Callers:
 *     RaidResumeIoQueue @ 0x1C0002C7C (RaidResumeIoQueue.c)
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 *     StorpAllocatePool @ 0x1C00155B8 (StorpAllocatePool.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00160FC (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017194 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0019120 (RaUnitWaitForRemoveLock.c)
 *     RaidGetStartIoPerfParams @ 0x1C001BAD0 (RaidGetStartIoPerfParams.c)
 *     RaidAdapterConnectInterrupt @ 0x1C002BDD0 (RaidAdapterConnectInterrupt.c)
 *     RaidInitializePerfOpts @ 0x1C0031540 (RaidInitializePerfOpts.c)
 *     RaCallMiniportFindAdapter @ 0x1C00369AC (RaCallMiniportFindAdapter.c)
 *     StorEnablePassiveInitialization @ 0x1C003832C (StorEnablePassiveInitialization.c)
 *     StorpAcquireMSISpinLock @ 0x1C003A528 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C003AEBC (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003AFF8 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C003B0A4 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C003B3F0 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003B49C (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003B70C (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C003B974 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C003B9F0 (StorpGetExtendedTable.c)
 *     StorpGetMSIInfo @ 0x1C003BC08 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C003BCF0 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C003C074 (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C003C1F0 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003C37C (StorpInitializeWorkItem.c)
 *     StorpPutScatterGatherList @ 0x1C003CE48 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003CF48 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003D0E4 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C003E4C0 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C003E610 (RaUnitRequestPowerUp.c)
 *     RaUnitSmartReturnStatus @ 0x1C00488B0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitRequestTimeout @ 0x1C004AF08 (RaidUnitRequestTimeout.c)
 *     ATADeviceIdShimHookDeviceControl @ 0x1C0058020 (ATADeviceIdShimHookDeviceControl.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C00582F0 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimHookDeviceControl @ 0x1C0058800 (SrbShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C00588E0 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0078E44 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
