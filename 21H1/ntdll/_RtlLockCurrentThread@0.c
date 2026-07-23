/*
 * XREFs of _RtlLockCurrentThread@0 @ 0x4B368C20
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwLockVirtualMemory@16 @ 0x4B2F3A50 (_ZwLockVirtualMemory@16.c)
 *     _NtUnlockVirtualMemory@16 @ 0x4B2F4630 (_NtUnlockVirtualMemory@16.c)
 *     _RtlpLockStack@0 @ 0x4B368D27 (_RtlpLockStack@0.c)
 */

NTSTATUS RtlLockCurrentThread(void)
{
  ULONG_PTR *v0; // edi
  struct _TEB *v1; // esi
  unsigned int LockCount; // eax
  NTSTATUS result; // eax
  int VirtualMemory; // edi
  _DWORD MemoryInformation[7]; // [esp+4h] [ebp-24h] BYREF
  PVOID BaseAddress; // [esp+20h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+24h] [ebp-4h] BYREF

  v1 = NtCurrentTeb();
  LockCount = v1->LockCount;
  if ( LockCount )
  {
    v1->LockCount = LockCount + 1;
    return 0;
  }
  VirtualMemory = NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, v1, MemoryBasicInformation, MemoryInformation, 0x1CuLL, v0);
  if ( VirtualMemory >= 0 )
  {
    BaseAddress = (PVOID)MemoryInformation[0];
    LODWORD(RegionSize) = MemoryInformation[3];
    result = ZwLockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u);
    if ( result < 0 )
      return result;
    VirtualMemory = RtlpLockStack();
    if ( VirtualMemory >= 0 )
    {
      v1->LockCount = 1;
      return 0;
    }
    NtUnlockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u);
  }
  return VirtualMemory;
}
