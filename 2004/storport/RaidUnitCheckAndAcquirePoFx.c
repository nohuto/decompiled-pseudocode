/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C0007310
 * Callers:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000232C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaUnitStoragePowerIdle @ 0x1C00023B0 (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C000243C (RaUnitStoragePowerActive.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0006C44 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0006D14 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0006DF8 (RaidUnitAdaptiveIdleTimeout.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C0007080 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C00071A8 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleCondition @ 0x1C0007210 (StorPortUnitIdleCondition.c)
 *     RaidStartIoPacket @ 0x1C000AD20 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C00115E0 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00118F8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0011C18 (StorUpdateCrashDumpPowerReady.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0011FA0 (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0012084 (RaidUnitCancelWaitWakeIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00144EC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C001BF94 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0031ED8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0036EC8 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C003E770 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C003E8C0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C003E954 (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C003EB10 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C0040190 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x1C00402B0 (StorPortUnitDirectedPowerDownCompletion.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0040650 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitIdleState @ 0x1C0040970 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0040D50 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0040E30 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0040F50 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00412E0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C0046A38 (RaUnitPowerCapIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004AEB4 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C0050988 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0050DD4 (StorpCSExitTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0072FB0 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0074AA4 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1C007A55C (RaidUnitCreateDumpData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  BOOLEAN result; // al

  result = 0;
  if ( *(char *)(a1 + 449) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  return result;
}
