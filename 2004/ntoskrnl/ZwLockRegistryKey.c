/*
 * XREFs of ZwLockRegistryKey @ 0x1403F5740
 * Callers:
 *     NtLockProductActivationKeys @ 0x14079FDB0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1407C2B50 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
