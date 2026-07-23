/*
 * XREFs of _RtlpHpVaMgrAlloc@12 @ 0x4B37A845
 * Callers:
 *     _RtlpHpVaMgrCtxAlloc@16 @ 0x4B37AA36 (_RtlpHpVaMgrCtxAlloc@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlRbRemoveNode@8 @ 0x4B2D9B10 (_RtlRbRemoveNode@8.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpHpVaMgrAllocAligned@12 @ 0x4B37A9F0 (_RtlpHpVaMgrAllocAligned@12.c)
 *     _RtlpHpVaMgrFree@8 @ 0x4B37AE7C (_RtlpHpVaMgrFree@8.c)
 *     _RtlpHpVaMgrRangeCreate@12 @ 0x4B37B05E (_RtlpHpVaMgrRangeCreate@12.c)
 *     _RtlpHpVaMgrRangeFind@16 @ 0x4B37B145 (_RtlpHpVaMgrRangeFind@16.c)
 *     _RtlpHpVaMgrRangeMarkAllocated@12 @ 0x4B37B2A3 (_RtlpHpVaMgrRangeMarkAllocated@12.c)
 *     _RtlpHpVaMgrRangeSplit@12 @ 0x4B37B2CB (_RtlpHpVaMgrRangeSplit@12.c)
 *     _RtlpHpVaMgrRegionAllocate@4 @ 0x4B37B334 (_RtlpHpVaMgrRegionAllocate@4.c)
 */

PVOID __fastcall RtlpHpVaMgrAlloc(PRTL_SRWLOCK SRWLock, unsigned int *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int v6; // eax
  void *v7; // ecx
  _RTL_BALANCED_NODE *v8; // eax
  int v9; // edi
  void *v10; // ebx
  int v11; // eax
  unsigned int v13; // [esp+Ch] [ebp-28h]
  PVOID BaseAddress; // [esp+10h] [ebp-24h] BYREF
  ULONG_PTR RegionSize; // [esp+14h] [ebp-20h] BYREF
  int v16; // [esp+1Ch] [ebp-18h] BYREF
  int v17; // [esp+20h] [ebp-14h]
  int v18; // [esp+24h] [ebp-10h]
  unsigned int v19; // [esp+28h] [ebp-Ch]

  HIDWORD(RegionSize) = a2;
  v16 = 0x100000;
  v17 = 0x100000;
  v4 = *a2;
  v18 = 0x200000;
  v19 = 0x200000;
  v5 = a3;
  if ( !v4 )
    NT_ASSERT("*SizeInOut > 0");
  if ( v4 <= (unsigned int)(LOWORD(SRWLock[5].Value) << 20) >> 1 )
  {
    v13 = v4 >> 20;
    RtlAcquireSRWLockExclusive(SRWLock);
    v8 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(a3 >> 20, (char *)&RegionSize + 4);
    v9 = (int)v8;
    if ( v8 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[1], v8);
      if ( HIDWORD(RegionSize) != v9 )
      {
        RtlpHpVaMgrRangeMarkAllocated(0);
        RtlpHpVaMgrRangeSplit((HIDWORD(RegionSize) - v9) >> 4);
        RtlpHpVaMgrFree(SRWLock, v9);
        v9 = HIDWORD(RegionSize);
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(SRWLock);
      v9 = RtlpHpVaMgrRegionAllocate(SRWLock);
      if ( !v9 )
        return 0;
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    v10 = (void *)(*(_DWORD *)(SRWLock[3].Value + 4)
                 + ((unsigned int)(v9 - *(_DWORD *)(SRWLock[3].Value + 20)) >> *(_DWORD *)(SRWLock[3].Value + 12) << 20));
    RtlpHpVaMgrRangeMarkAllocated(0);
    if ( *(_WORD *)(v9 + 12) > (unsigned __int16)v13 )
    {
      v11 = RtlpHpVaMgrRangeSplit((unsigned __int16)v13);
      RtlpHpVaMgrFree(SRWLock, v11);
    }
    BaseAddress = v10;
    RtlReleaseSRWLockExclusive(SRWLock);
    return BaseAddress;
  }
  v6 = (BYTE2(SRWLock[6].Value) >> 1) & 3;
  if ( a3 <= *(&v16 + v6) )
    v5 = *(&v16 + v6);
  LODWORD(RegionSize) = v4 - ((v5 - 1) & (v5 + v4 - 1)) + v5 - 1;
  v7 = (void *)RtlpHpVaMgrAllocAligned(v5);
  BaseAddress = v7;
  if ( v7 )
  {
    v16 = 0;
    v17 = 0;
    v18 = 0;
    BYTE1(v16) = SRWLock[6].0;
    v19 = (unsigned int)RegionSize >> 20;
    LOBYTE(v16) = 5;
    if ( !RtlpHpVaMgrRangeCreate(&v16) )
    {
      NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
      return 0;
    }
    *(_DWORD *)HIDWORD(RegionSize) = RegionSize;
    return BaseAddress;
  }
  return v7;
}
