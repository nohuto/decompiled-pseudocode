/*
 * XREFs of ZwLockRegistryKey @ 0x1403F44B0
 * Callers:
 *     NtLockProductActivationKeys @ 0x14079BDB0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1407BF5F0 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
