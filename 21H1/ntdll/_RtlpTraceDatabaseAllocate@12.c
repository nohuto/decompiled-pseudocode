/*
 * XREFs of _RtlpTraceDatabaseAllocate@12 @ 0x4B36A468
 * Callers:
 *     _RtlTraceDatabaseCreate@20 @ 0x4B36A1A0 (_RtlTraceDatabaseCreate@20.c)
 *     _RtlpTraceDatabaseInternalAdd@16 @ 0x4B36A4C6 (_RtlpTraceDatabaseInternalAdd@16.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

PVOID __thiscall RtlpTraceDatabaseAllocate(ULONG Protect, int a2)
{
  ULONG_PTR v3; // [esp-10h] [ebp-18h]
  int v4; // [esp+0h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+4h] [ebp-4h] BYREF

  BaseAddress = 0;
  HIDWORD(v3) = &v4;
  LODWORD(v3) = 0;
  if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v3, (PSIZE_T)0x3000, 4u, Protect) < 0 )
    return 0;
  else
    return BaseAddress;
}
