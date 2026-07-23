/*
 * XREFs of ZwLockProductActivationKeys @ 0x1403FA2F0
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140A59BC0 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
