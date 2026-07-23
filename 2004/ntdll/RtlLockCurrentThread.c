/*
 * XREFs of RtlLockCurrentThread @ 0x180083490
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockStack @ 0x180083548 (RtlpLockStack.c)
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x18009EFA0 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A0760 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS RtlLockCurrentThread(void)
{
  struct _TEB *v0; // rbx
  unsigned int LockCount; // eax
  int VirtualMemory; // edi
  NTSTATUS result; // eax
  _QWORD v4[6]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( LockCount )
  {
    v0->LockCount = LockCount + 1;
    return 0;
  }
  VirtualMemory = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v0, MemoryBasicInformation, v4, 0x30uLL, 0LL);
  if ( VirtualMemory < 0 )
    return VirtualMemory;
  BaseAddress = (PVOID)v4[0];
  RegionSize = v4[3];
  result = NtLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
  if ( result < 0 )
    return result;
  VirtualMemory = RtlpLockStack();
  if ( VirtualMemory < 0 )
  {
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    return VirtualMemory;
  }
  v0->LockCount = 1;
  return 0;
}
