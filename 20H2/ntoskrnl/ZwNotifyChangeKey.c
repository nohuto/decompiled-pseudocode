/*
 * XREFs of ZwNotifyChangeKey @ 0x1403FA4B0
 * Callers:
 *     CcRegistryChangeCallback @ 0x14039A860 (CcRegistryChangeCallback.c)
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B39F0 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403CC498 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x14057F3A8 (PspReadDfssConfigurationValues.c)
 *     PopUpdateUpgradeInProgress @ 0x1405CD360 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14078C68C (PopPowerButtonBugcheckConfigure.c)
 *     IopRegistryInitializeCallbacks @ 0x140793F80 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1407940A0 (IopRegistryCallback.c)
 *     ExpReadLeapSecondData @ 0x14079F0F8 (ExpReadLeapSecondData.c)
 *     PipUpdateSetupInProgressNotify @ 0x14089E288 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1408E3440 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140A6D32C (PfInitializeSuperfetch.c)
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
