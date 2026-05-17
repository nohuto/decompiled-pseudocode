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

unsigned int __fastcall RtlpHpVaMgrAlloc(int a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // edi
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v13; // [esp+Ch] [ebp-28h]
  unsigned int v14; // [esp+10h] [ebp-24h] BYREF
  unsigned int v15; // [esp+14h] [ebp-20h] BYREF
  unsigned int *v16; // [esp+18h] [ebp-1Ch] BYREF
  int v17; // [esp+1Ch] [ebp-18h] BYREF
  int v18; // [esp+20h] [ebp-14h]
  int v19; // [esp+24h] [ebp-10h]
  int v20; // [esp+28h] [ebp-Ch]

  v16 = a2;
  v17 = 0x100000;
  v18 = 0x100000;
  v4 = *a2;
  v19 = 0x200000;
  v20 = 0x200000;
  v5 = a3;
  if ( !v4 )
    NT_ASSERT("*SizeInOut > 0");
  if ( v4 <= (unsigned int)(*(unsigned __int16 *)(a1 + 20) << 20) >> 1 )
  {
    v13 = v4 >> 20;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
    v8 = RtlpHpVaMgrRangeFind(a3 >> 20, &v16);
    v9 = v8;
    if ( v8 )
    {
      RtlRbRemoveNode(a1 + 4, v8);
      if ( v16 != (unsigned int *)v9 )
      {
        RtlpHpVaMgrRangeMarkAllocated(0);
        RtlpHpVaMgrRangeSplit(((int)v16 - v9) >> 4);
        RtlpHpVaMgrFree(a1, v9);
        v9 = (int)v16;
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
      v9 = RtlpHpVaMgrRegionAllocate(a1);
      if ( !v9 )
        return 0;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
    }
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4)
        + ((unsigned int)(v9 - *(_DWORD *)(*(_DWORD *)(a1 + 12) + 20)) >> *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12) << 20);
    RtlpHpVaMgrRangeMarkAllocated(0);
    if ( *(_WORD *)(v9 + 12) > (unsigned __int16)v13 )
    {
      v11 = RtlpHpVaMgrRangeSplit((unsigned __int16)v13);
      RtlpHpVaMgrFree(a1, v11);
    }
    v14 = v10;
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
    return v14;
  }
  v6 = (*(unsigned __int8 *)(a1 + 26) >> 1) & 3;
  if ( a3 <= *(&v17 + v6) )
    v5 = *(&v17 + v6);
  v15 = v4 - ((v5 - 1) & (v5 + v4 - 1)) + v5 - 1;
  v7 = RtlpHpVaMgrAllocAligned(v5);
  v14 = v7;
  if ( v7 )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
    BYTE1(v17) = *(_BYTE *)(a1 + 24);
    v20 = v15 >> 20;
    LOBYTE(v17) = 5;
    if ( !RtlpHpVaMgrRangeCreate(&v17) )
    {
      NtFreeVirtualMemory(-1, (int)&v14, (int)&v15, 0x8000);
      return 0;
    }
    *v16 = v15;
    return v14;
  }
  return v7;
}
