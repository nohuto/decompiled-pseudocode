/*
 * XREFs of ZwLockRegistryKey @ 0x1403F44B0
 * Callers:
 *     NtLockProductActivationKeys @ 0x14079BDB0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1407BF5F0 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
