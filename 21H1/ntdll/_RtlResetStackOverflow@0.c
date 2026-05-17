/*
 * XREFs of _RtlResetStackOverflow@0 @ 0x4B33BCA7
 * Callers:
 *     _RtlQueryWnfStateData@24 @ 0x4B2AE840 (_RtlQueryWnfStateData@24.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _RtlQueryWnfStateDataWithExplicitScope@28 @ 0x4B33BEA0 (_RtlQueryWnfStateDataWithExplicitScope@28.c)
 *     _EtwpCheckForEnoughStackSpace@4 @ 0x4B381503 (_EtwpCheckForEnoughStackSpace@4.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlResetStackOverflow()
{
  int result; // eax
  unsigned int v1; // edx
  _BYTE v2[4]; // [esp+4h] [ebp-58h] BYREF
  int v3; // [esp+8h] [ebp-54h]
  _BYTE v4[4]; // [esp+20h] [ebp-3Ch] BYREF
  unsigned int v5; // [esp+24h] [ebp-38h] BYREF
  int v6; // [esp+28h] [ebp-34h] BYREF
  _BYTE SystemInformation[8]; // [esp+2Ch] [ebp-30h] BYREF
  int v8; // [esp+34h] [ebp-28h]

  result = NtQueryVirtualMemory(-1, (int)v2, 0, (int)v2, 28, 0);
  if ( result >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0);
    v1 = ~(v8 - 1) & (NtCurrentTeb()->GuaranteedStackBytes + v8 - 1);
    v6 = v1;
    if ( v1 )
    {
      v1 += v8;
      v6 = v1;
    }
    if ( v1 < 2 * v8 )
    {
      v6 = 2 * v8;
      v1 = 2 * v8;
    }
    v5 = ((unsigned int)v2 & ~(v8 - 1)) - v1;
    result = v3 + 17 * v8;
    if ( v5 >= result )
    {
      result = NtAllocateVirtualMemory(-1, (int)&v5, 0, (int)&v6, 4096, 4);
      if ( result >= 0 )
        return ZwProtectVirtualMemory(-1, (int)&v5, (int)&v6, 260, (int)v4);
    }
  }
  return result;
}
