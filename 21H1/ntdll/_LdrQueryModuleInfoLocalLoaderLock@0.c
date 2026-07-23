/*
 * XREFs of _LdrQueryModuleInfoLocalLoaderLock@0 @ 0x4B32E9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall LdrQueryModuleInfoLocalLoaderLock()
{
  return LdrpAcquireLoaderLock();
}
