/*
 * XREFs of _RtlExtendMemoryZone@8 @ 0x4B34D780
 * Callers:
 *     _RtlExtendMemoryBlockLookaside@8 @ 0x4B34D550 (_RtlExtendMemoryBlockLookaside@8.c)
 *     _RtlpRegisterStackTrace@12 @ 0x4B36F97B (_RtlpRegisterStackTrace@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwLockVirtualMemory@16 @ 0x4B2F3A50 (_ZwLockVirtualMemory@16.c)
 */

int __userpurge RtlExtendMemoryZone@<eax>(ULONG a1@<edi>, _RTL_SRWLOCK *a2, int a3)
{
  NTSTATUS v4; // esi
  _DWORD *v5; // ecx
  ULONG_PTR v6; // [esp-18h] [ebp-28h]
  signed __int32 v7; // [esp+4h] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+8h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+Ch] [ebp-4h] BYREF

  if ( !a3 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(a2 + 4);
  BaseAddress = 0;
  LODWORD(RegionSize) = (a3 + 4095) & 0xFFFFF000;
  HIDWORD(v6) = &RegionSize;
  LODWORD(v6) = 0;
  v4 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v6, (PSIZE_T)0x3000, 4u, a1);
  if ( v4 >= 0 )
  {
    if ( a2[5].Value && (v4 = ZwLockVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 1u), v4 < 0) )
    {
      NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
    }
    else
    {
      v5 = BaseAddress;
      *((_DWORD *)BaseAddress + 1) = RegionSize;
      v5[2] = v5 + 4;
      v5[3] = (char *)v5 + RegionSize;
      *v5 = a2[6].Value;
      _InterlockedOr(&v7, 0);
      a2[6].Value = (unsigned int)v5;
    }
  }
  RtlReleaseSRWLockExclusive(a2 + 4);
  return v4;
}
