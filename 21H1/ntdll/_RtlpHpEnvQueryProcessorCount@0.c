/*
 * XREFs of _RtlpHpEnvQueryProcessorCount@0 @ 0x4B37247C
 * Callers:
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 * Callees:
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlpHpEnvQueryProcessorCount()
{
  _BYTE SystemInformation[44]; // [esp+0h] [ebp-30h] BYREF

  if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0) >= 0 )
    return SystemInformation[40];
  else
    return 1;
}
