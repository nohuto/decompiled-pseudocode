/*
 * XREFs of _LdrDeleteEnclave@4 @ 0x4B32DD00
 * Callers:
 *     _RtlCreateUserStack@24 @ 0x4B2F2050 (_RtlCreateUserStack@24.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

NTSTATUS __cdecl LdrDeleteEnclave(PVOID BaseAddress)
{
  ULONG_PTR RegionSize; // [esp+0h] [ebp-4h] BYREF

  LODWORD(RegionSize) = 0;
  return NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
}
