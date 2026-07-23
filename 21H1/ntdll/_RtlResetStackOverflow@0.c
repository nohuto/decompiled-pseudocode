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
  ULONG_PTR v2; // [esp-10h] [ebp-6Ch]
  ULONG_PTR *v3; // [esp+0h] [ebp-5Ch]
  ULONG v4; // [esp+0h] [ebp-5Ch]
  _BYTE BaseAddress[4]; // [esp+4h] [ebp-58h] BYREF
  int v6; // [esp+8h] [ebp-54h]
  ULONG OldProtect; // [esp+20h] [ebp-3Ch] BYREF
  PVOID v8; // [esp+24h] [ebp-38h] BYREF
  ULONG_PTR RegionSize; // [esp+28h] [ebp-34h] BYREF
  int v10; // [esp+34h] [ebp-28h]

  result = NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, BaseAddress, MemoryBasicInformation, BaseAddress, 0x1CuLL, v3);
  if ( result >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, (char *)&RegionSize + 4, 0x2Cu, 0);
    v1 = ~(v10 - 1) & (NtCurrentTeb()->GuaranteedStackBytes + v10 - 1);
    LODWORD(RegionSize) = v1;
    if ( v1 )
    {
      v1 += v10;
      LODWORD(RegionSize) = v1;
    }
    if ( v1 < 2 * v10 )
    {
      LODWORD(RegionSize) = 2 * v10;
      v1 = 2 * v10;
    }
    v8 = (PVOID)(((unsigned int)BaseAddress & ~(v10 - 1)) - v1);
    result = v6 + 17 * v10;
    if ( (unsigned int)v8 >= result )
    {
      HIDWORD(v2) = &RegionSize;
      LODWORD(v2) = 0;
      result = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &v8, v2, (PSIZE_T)0x1000, 4u, v4);
      if ( result >= 0 )
        return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &v8, &RegionSize, 0x104u, &OldProtect);
    }
  }
  return result;
}
