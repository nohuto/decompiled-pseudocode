/*
 * XREFs of _RtlUnlockCurrentThread@0 @ 0x4B368CC0
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _NtUnlockVirtualMemory@16 @ 0x4B2F4630 (_NtUnlockVirtualMemory@16.c)
 *     _RtlpUnlockStack@0 @ 0x4B368D7F (_RtlpUnlockStack@0.c)
 */

NTSTATUS RtlUnlockCurrentThread(void)
{
  struct _TEB *v0; // ecx
  unsigned int LockCount; // eax
  unsigned int v3; // eax
  PSIZE_T MemoryInformation[7]; // [esp+0h] [ebp-24h] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+20h] [ebp-4h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( !LockCount )
    return -1073741782;
  v3 = LockCount - 1;
  v0->LockCount = v3;
  if ( !v3 )
  {
    if ( NtQueryVirtualMemory(
           (HANDLE)0xFFFFFFFF,
           v0,
           MemoryBasicInformation,
           MemoryInformation,
           0x1CuLL,
           MemoryInformation[0]) >= 0 )
    {
      BaseAddress = MemoryInformation[0];
      *(PSIZE_T *)&RegionSize = MemoryInformation[3];
      NtUnlockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u);
    }
    RtlpUnlockStack();
  }
  return 0;
}
