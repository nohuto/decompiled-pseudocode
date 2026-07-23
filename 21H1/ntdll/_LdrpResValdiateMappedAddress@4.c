/*
 * XREFs of _LdrpResValdiateMappedAddress@4 @ 0x4B343B5A
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 */

NTSTATUS __fastcall LdrpResValdiateMappedAddress(int a1)
{
  PSIZE_T MemoryInformation[7]; // [esp+0h] [ebp-1Ch] BYREF

  if ( a1 )
    return NtQueryVirtualMemory(
             (HANDLE)0xFFFFFFFF,
             (PVOID)(a1 & 0xFFFFFFFC),
             MemoryBasicInformation,
             MemoryInformation,
             0x1CuLL,
             MemoryInformation[0]);
  else
    return -1073741811;
}
