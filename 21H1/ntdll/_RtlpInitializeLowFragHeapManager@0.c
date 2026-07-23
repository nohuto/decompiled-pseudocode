/*
 * XREFs of _RtlpInitializeLowFragHeapManager@0 @ 0x4B370FB3
 * Callers:
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

ULONG __stdcall RtlpInitializeLowFragHeapManager()
{
  unsigned int v0; // esi
  char v1; // cl
  ULONG result; // eax
  _BYTE SystemInformation[40]; // [esp+10h] [ebp-30h] BYREF
  char v4; // [esp+38h] [ebp-8h]

  RtlpHeapGenerateRandomValue32();
  RtlpLFHKey = RtlpHeapGenerateRandomValue32();
  v0 = 1;
  if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0) >= 0 )
  {
    v1 = 0;
    if ( (unsigned int)v4 > 1 )
    {
      do
        ++v1;
      while ( (unsigned int)v4 >> v1 > 1 );
    }
    v0 = -(1 << v1) & ((1 << v1) + v4 - 1);
    if ( v0 > 0x40 )
      v0 = 64;
  }
  RtlpAffinityState = v0;
  result = 0;
  dword_4B3A4364 = 0;
  memset(&RtlpDefaultHeapDebuggingOptions, 0, 0x1Cu);
  if ( (RtlpDisableHeapLookaside & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = (RtlpDisableHeapLookaside >> 4) & 3;
    dword_4B3A4888 = result;
  }
  return result;
}
