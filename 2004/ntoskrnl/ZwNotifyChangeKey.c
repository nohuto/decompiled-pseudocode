/*
 * XREFs of ZwNotifyChangeKey @ 0x1403F58E0
 * Callers:
 *     CcRegistryChangeCallback @ 0x1403983A0 (CcRegistryChangeCallback.c)
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B1080 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403C9858 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x14057B978 (PspReadDfssConfigurationValues.c)
 *     PopUpdateUpgradeInProgress @ 0x1405C8020 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14077F148 (PopPowerButtonBugcheckConfigure.c)
 *     IopRegistryInitializeCallbacks @ 0x140786270 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x140786390 (IopRegistryCallback.c)
 *     ExpReadLeapSecondData @ 0x140792864 (ExpReadLeapSecondData.c)
 *     PipUpdateSetupInProgressNotify @ 0x140898758 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1408DD600 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140A6605C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
