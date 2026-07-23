/*
 * XREFs of ZwLockRegistryKey @ 0x1403FA310
 * Callers:
 *     NtLockProductActivationKeys @ 0x1407AF0E0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1407D1350 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
