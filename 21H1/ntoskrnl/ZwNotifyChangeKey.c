/*
 * XREFs of ZwNotifyChangeKey @ 0x1403F4650
 * Callers:
 *     CcRegistryChangeCallback @ 0x140397770 (CcRegistryChangeCallback.c)
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403AB400 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403C8A48 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x14057B338 (PspReadDfssConfigurationValues.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14077F958 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x1407901D4 (ExpReadLeapSecondData.c)
 *     IopRegistryInitializeCallbacks @ 0x14079B870 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x14079B990 (IopRegistryCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x140897438 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1408DC290 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140A6667C (PfInitializeSuperfetch.c)
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
