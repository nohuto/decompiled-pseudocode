/*
 * XREFs of ZwLockRegistryKey @ 0x1403F5740
 * Callers:
 *     NtLockProductActivationKeys @ 0x14079FDB0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1407C2B50 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
