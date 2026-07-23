/*
 * XREFs of _LdrInitializeMrdata@0 @ 0x4B334E89
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall LdrInitializeMrdata()
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[8]; // [esp+0h] [ebp-30h] BYREF
  int v2; // [esp+8h] [ebp-28h]
  int v3; // [esp+18h] [ebp-18h]

  LdrpMrdataLock.0 = 0;
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0);
  if ( result >= 0 )
  {
    LdrpPageSize = v2;
    LdrpAllocationGranularity = v3;
    return 0;
  }
  return result;
}
