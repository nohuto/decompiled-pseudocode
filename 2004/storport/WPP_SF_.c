/*
 * XREFs of WPP_SF_ @ 0x1C00323CC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 *     RaidResumeIoQueue @ 0x1C001056C (RaidResumeIoQueue.c)
 *     StorpAllocatePool @ 0x1C0014058 (StorpAllocatePool.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0015C6C (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0016CFC (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0018C5C (RaUnitWaitForRemoveLock.c)
 *     RaidGetStartIoPerfParams @ 0x1C001AE30 (RaidGetStartIoPerfParams.c)
 *     RaidAdapterConnectInterrupt @ 0x1C002AF7C (RaidAdapterConnectInterrupt.c)
 *     RaidInitializePerfOpts @ 0x1C00306D0 (RaidInitializePerfOpts.c)
 *     RaCallMiniportFindAdapter @ 0x1C0035B3C (RaCallMiniportFindAdapter.c)
 *     StorEnablePassiveInitialization @ 0x1C00374BC (StorEnablePassiveInitialization.c)
 *     StorpAcquireMSISpinLock @ 0x1C0039668 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C0039FFC (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003A138 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C003A1E4 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C003A530 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003A5DC (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003A84C (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C003AAB4 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C003AB30 (StorpGetExtendedTable.c)
 *     StorpGetMSIInfo @ 0x1C003AD48 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C003AE30 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C003B1B4 (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C003B330 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003B4BC (StorpInitializeWorkItem.c)
 *     StorpPutScatterGatherList @ 0x1C003BF88 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003C088 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003C1C0 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C003D59C (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C003D6EC (RaUnitRequestPowerUp.c)
 *     RaUnitSmartReturnStatus @ 0x1C0047AA0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitRequestTimeout @ 0x1C004A0F8 (RaidUnitRequestTimeout.c)
 *     ATADeviceIdShimHookDeviceControl @ 0x1C0057160 (ATADeviceIdShimHookDeviceControl.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C0057430 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimHookDeviceControl @ 0x1C0057940 (SrbShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0057A20 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0077970 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
