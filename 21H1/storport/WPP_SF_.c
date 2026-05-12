/*
 * XREFs of WPP_SF_ @ 0x1C0031E4C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 *     RaidResumeIoQueue @ 0x1C000E7AC (RaidResumeIoQueue.c)
 *     StorpAllocatePool @ 0x1C00121E8 (StorpAllocatePool.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0013DFC (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0014E8C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0016DEC (RaUnitWaitForRemoveLock.c)
 *     RaidGetStartIoPerfParams @ 0x1C0018FC0 (RaidGetStartIoPerfParams.c)
 *     RaidAdapterConnectInterrupt @ 0x1C002A9DC (RaidAdapterConnectInterrupt.c)
 *     RaidInitializePerfOpts @ 0x1C0030120 (RaidInitializePerfOpts.c)
 *     RaCallMiniportFindAdapter @ 0x1C00355BC (RaCallMiniportFindAdapter.c)
 *     StorEnablePassiveInitialization @ 0x1C0036F3C (StorEnablePassiveInitialization.c)
 *     StorpAcquireMSISpinLock @ 0x1C00390E8 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C0039A38 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0039B74 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C0039C20 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C0039F6C (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003A018 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003A27C (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C003A4E4 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C003A560 (StorpGetExtendedTable.c)
 *     StorpGetMSIInfo @ 0x1C003A778 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C003A860 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C003ABE4 (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C003AD60 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003AEEC (StorpInitializeWorkItem.c)
 *     StorpPutScatterGatherList @ 0x1C003B9B8 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003BAB8 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003BBF0 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C003CFCC (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C003D11C (RaUnitRequestPowerUp.c)
 *     RaUnitSmartReturnStatus @ 0x1C0047390 (RaUnitSmartReturnStatus.c)
 *     RaidUnitRequestTimeout @ 0x1C00499E8 (RaidUnitRequestTimeout.c)
 *     ATADeviceIdShimHookDeviceControl @ 0x1C0056A30 (ATADeviceIdShimHookDeviceControl.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C0056D00 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimHookDeviceControl @ 0x1C0057210 (SrbShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C00572F0 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0077A4C (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
