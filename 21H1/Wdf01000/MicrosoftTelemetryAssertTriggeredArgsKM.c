/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008E6C4
 * Callers:
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C000ED2C (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011F80 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C001C780 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008E6F8 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredArgsKM(
        const char *BucketArg1,
        unsigned int BucketArg2,
        unsigned int OriginatingBinary)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 1u, "wdf01000.sys", BucketArg2, OriginatingBinary, 0LL);
}
