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

int __stdcall RtlExtendMemoryZone(int a1, int a2)
{
  int VirtualMemory; // esi
  _DWORD *v4; // ecx
  signed __int32 v5; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+8h] [ebp-8h] BYREF
  unsigned int v7; // [esp+Ch] [ebp-4h] BYREF

  if ( !a2 )
    return -1073741811;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 16));
  v6 = 0;
  v7 = (a2 + 4095) & 0xFFFFF000;
  VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v6, 0, (int)&v7, 12288, 4);
  if ( VirtualMemory >= 0 )
  {
    if ( *(_DWORD *)(a1 + 20) && (VirtualMemory = ZwLockVirtualMemory(-1, (int)&v6, (int)&v7, 1), VirtualMemory < 0) )
    {
      NtFreeVirtualMemory(-1, (int)&v6, (int)&v7, 0x8000);
    }
    else
    {
      v4 = v6;
      v6[1] = v7;
      v4[2] = v4 + 4;
      v4[3] = (char *)v4 + v7;
      *v4 = *(_DWORD *)(a1 + 24);
      _InterlockedOr(&v5, 0);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 16));
  return VirtualMemory;
}
