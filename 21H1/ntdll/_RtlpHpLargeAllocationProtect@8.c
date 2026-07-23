/*
 * XREFs of _RtlpHpLargeAllocationProtect@8 @ 0x4B37A357
 * Callers:
 *     _RtlpHpHeapProtect@8 @ 0x4B379008 (_RtlpHpHeapProtect@8.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

int __stdcall RtlpHpLargeAllocationProtect(int a1, ULONG NewProtect)
{
  int result; // eax
  PSIZE_T MemoryInformation[7]; // [esp+0h] [ebp-28h] BYREF
  ULONG OldProtect; // [esp+1Ch] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+20h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+24h] [ebp-4h] BYREF

  BaseAddress = (PVOID)(*(_DWORD *)(a1 + 12) & 0xFFFF0000);
  result = NtQueryVirtualMemory(
             (HANDLE)0xFFFFFFFF,
             BaseAddress,
             MemoryBasicInformation,
             MemoryInformation,
             0x1CuLL,
             MemoryInformation[0]);
  if ( result >= 0 )
  {
    *(PSIZE_T *)&RegionSize = MemoryInformation[3];
    return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, NewProtect, &OldProtect);
  }
  return result;
}
