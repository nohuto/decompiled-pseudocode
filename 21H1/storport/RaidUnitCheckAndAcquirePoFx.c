/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C0006D20
 * Callers:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000223C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaUnitStoragePowerIdle @ 0x1C00022C0 (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C000234C (RaUnitStoragePowerActive.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0006784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0006854 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0006938 (RaidUnitAdaptiveIdleTimeout.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C0006A90 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C0006BB8 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleCondition @ 0x1C0006C20 (StorPortUnitIdleCondition.c)
 *     RaidStartIoPacket @ 0x1C000A730 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C000F820 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000FB38 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000FDA4 (StorUpdateCrashDumpPowerReady.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C001012C (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0010210 (RaidUnitCancelWaitWakeIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001267C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0031988 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0036948 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C003E1A0 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C003E2F0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C003E384 (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C003E540 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C003FBC0 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x1C003FCE0 (StorPortUnitDirectedPowerDownCompletion.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0040080 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitIdleState @ 0x1C00403A0 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0040720 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0040800 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0040920 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0040CB0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C0046328 (RaUnitPowerCapIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004A7A4 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C0050278 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C00506C4 (StorpCSExitTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00730A0 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0074764 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1C007A63C (RaidUnitCreateDumpData.c)
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
