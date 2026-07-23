/*
 * XREFs of _RtlpHpVaMgrCtxFree@12 @ 0x4B37AC12
 * Callers:
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _RtlpHpVaMgrFree@8 @ 0x4B37AE7C (_RtlpHpVaMgrFree@8.c)
 *     _RtlpHpVaMgrRangeFree@8 @ 0x4B37B24F (_RtlpHpVaMgrRangeFree@8.c)
 *     _RtlpHpVaMgrRangeSplit@12 @ 0x4B37B2CB (_RtlpHpVaMgrRangeSplit@12.c)
 *     _RtlSparseArrayElementAllocated@8 @ 0x4B37E3A6 (_RtlSparseArrayElementAllocated@8.c)
 *     _RtlSparseArrayElementFindCapped@12 @ 0x4B37E3DA (_RtlSparseArrayElementFindCapped@12.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(int a1, PVOID *a2, PSIZE_T RegionSize)
{
  unsigned int v4; // edi
  char *v5; // eax
  int v6; // esi
  int Capped; // esi
  char v8; // dl
  int v9; // ebx
  int v10; // edi
  char v11; // dl
  int v12; // eax
  unsigned int v13; // eax
  int v16; // [esp+18h] [ebp-4h]

  v4 = *(_DWORD *)RegionSize >> 20;
  v5 = (char *)RtlSparseArrayElementAllocated(a1 + 8, ((unsigned int)*a2 - *(_DWORD *)(a1 + 4)) >> 20);
  v6 = (int)v5;
  if ( !v5 )
  {
    Capped = RtlSparseArrayElementFindCapped(-1 - (((unsigned int)*a2 - *(_DWORD *)(a1 + 4)) >> 20));
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, a2, RegionSize, 0x8000u);
    *(_DWORD *)(Capped + 12) -= *(_DWORD *)RegionSize >> 20;
    return;
  }
  v8 = *v5;
  v9 = 28 * (unsigned __int8)v5[1] + a1 + 60;
  if ( (*v5 & 4) != 0 )
  {
    *v5 = v8 & 0xFE;
LABEL_26:
    RtlpHpVaMgrRangeFree(v9, v6);
    return;
  }
  if ( (*(_BYTE *)(v9 + 26) & 6u) < 4 )
  {
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, a2, RegionSize, 0x4000u);
    v8 = *(_BYTE *)v6;
  }
  v16 = v6;
  if ( (v8 & 2) != 0 )
  {
    v10 = v6;
    do
      v6 -= 16;
    while ( (*(_BYTE *)v6 & 2) != 0 );
  }
  else
  {
    v11 = v8 & 4;
    if ( ((*(_BYTE *)(v9 + 26) >> 4) & (v11 == 0)) == 0 )
    {
      v12 = v11 ? *(_DWORD *)(v6 + 12) : *(unsigned __int16 *)(v6 + 12);
      if ( v4 != v12 )
        NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
    }
    if ( v11 )
      v13 = *(_DWORD *)(v6 + 12);
    else
      v13 = *(unsigned __int16 *)(v6 + 12);
    if ( v4 >= v13 )
      v10 = 0;
    else
      v10 = v6 + 16 * v4;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v9);
  if ( v10 )
    RtlpHpVaMgrRangeSplit((v10 - v6) >> 4);
  v6 = RtlpHpVaMgrFree(v9, v16);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v9);
  if ( v6 )
    goto LABEL_26;
}
