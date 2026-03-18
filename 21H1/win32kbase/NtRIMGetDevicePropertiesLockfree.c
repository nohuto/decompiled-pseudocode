/*
 * XREFs of NtRIMGetDevicePropertiesLockfree @ 0x1C015CDB0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePropertiesLockfree @ 0x1C015F710 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePropertiesLockfree(__int64 a1, __int64 a2)
{
  return RIMGetDevicePropertiesLockfree(a1, a2, 1LL);
}
