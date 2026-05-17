/*
 * XREFs of _RtlHpInitializeHeapManager@0 @ 0x4B37080D
 * Callers:
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 * Callees:
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlHpHeapManagerInitialize@8 @ 0x4B375D4D (_RtlHpHeapManagerInitialize@8.c)
 *     _RtlHpHeapManagerStart@24 @ 0x4B375DB6 (_RtlHpHeapManagerStart@24.c)
 */

NTSTATUS __thiscall RtlHpInitializeHeapManager(void *this)
{
  NTSTATUS result; // eax
  int v2; // ecx
  _DWORD v3[2]; // [esp+8h] [ebp-38h] BYREF
  _BYTE SystemInformation[32]; // [esp+10h] [ebp-30h] BYREF
  int v5; // [esp+30h] [ebp-10h]

  v3[1] = 0;
  v3[0] = 0x4000;
  RtlHpHeapManagerInitialize(this, v3);
  RtlpHpEnvHandle = 0;
  dword_4B3A446C = 0;
  result = NtQuerySystemInformation(SystemEmulationBasicInformation, SystemInformation, 0x2Cu, 0);
  if ( result >= 0 )
    return RtlHpHeapManagerStart(v2, v5 + 1, 0, v2);
  return result;
}
