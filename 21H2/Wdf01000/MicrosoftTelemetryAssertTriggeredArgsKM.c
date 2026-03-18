/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008F414
 * Callers:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C000C360 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0014E88 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00161D8 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C001E4F0 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008F448 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredArgsKM(
        const char *OriginatingBinary,
        unsigned int BucketArg1,
        unsigned int BucketArg2)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 1u, OriginatingBinary, BucketArg1, BucketArg2, 0LL);
}
