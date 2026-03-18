/*
 * XREFs of TmEnableCallbacks @ 0x1403CD640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmEnableCallbacks(
        PKRESOURCEMANAGER ResourceManager,
        PTM_RM_NOTIFICATION CallbackRoutine,
        PVOID RMKey)
{
  return __imp_TmEnableCallbacks(ResourceManager, CallbackRoutine, RMKey);
}
