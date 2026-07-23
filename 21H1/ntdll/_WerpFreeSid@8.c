/*
 * XREFs of _WerpFreeSid@8 @ 0x4B33B0D2
 * Callers:
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 *     _WerpAllocateAndInitializeSid@44 @ 0x4B33AE87 (_WerpAllocateAndInitializeSid@44.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

NTSTATUS __thiscall WerpFreeSid(void *this)
{
  PVOID BaseAddress; // [esp+0h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+4h] [ebp-4h] BYREF

  BaseAddress = this;
  LODWORD(RegionSize) = 12;
  if ( this )
    return NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
  else
    return -1073741811;
}
