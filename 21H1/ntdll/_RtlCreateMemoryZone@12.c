/*
 * XREFs of _RtlCreateMemoryZone@12 @ 0x4B2AAAA0
 * Callers:
 *     _RtlCreateMemoryBlockLookaside@20 @ 0x4B2AA940 (_RtlCreateMemoryBlockLookaside@20.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

NTSTATUS __cdecl RtlCreateMemoryZone(PVOID *MemoryZone, SIZE_T InitialSize, ULONG Flags)
{
  NTSTATUS result; // eax
  _DWORD *v4; // ecx
  ULONG_PTR v5; // [esp-10h] [ebp-24h]
  ULONG v6; // [esp+0h] [ebp-14h]
  signed __int32 v7; // [esp+8h] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  *MemoryZone = 0;
  if ( HIDWORD(InitialSize) || !(_DWORD)InitialSize )
    return -1073741811;
  BaseAddress = 0;
  v9 = (InitialSize + 4123) & 0xFFFFF000;
  HIDWORD(v5) = &v9;
  LODWORD(v5) = 0;
  result = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v5, (PSIZE_T)0x3000, 4u, v6);
  if ( result >= 0 )
  {
    v4 = BaseAddress;
    *((_DWORD *)BaseAddress + 4) = 0;
    v4[1] = v9;
    v4[2] = v4 + 7;
    v4[3] = (char *)v4 + v9;
    _InterlockedOr(&v7, 0);
    v4[6] = v4;
    result = 0;
    *MemoryZone = v4;
  }
  return result;
}
