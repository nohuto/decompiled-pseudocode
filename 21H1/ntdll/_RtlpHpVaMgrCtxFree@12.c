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

int __fastcall RtlpHpVaMgrCtxFree(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v4; // edi
  char *v5; // eax
  int v6; // esi
  int Capped; // esi
  int result; // eax
  char v9; // dl
  int v10; // ebx
  int v11; // edi
  char v12; // dl
  int v13; // eax
  unsigned int v14; // eax
  int v17; // [esp+18h] [ebp-4h]

  v4 = *a3 >> 20;
  v5 = (char *)RtlSparseArrayElementAllocated(a1 + 8, (unsigned int)(*a2 - *(_DWORD *)(a1 + 4)) >> 20);
  v6 = (int)v5;
  if ( !v5 )
  {
    Capped = RtlSparseArrayElementFindCapped(-1 - ((unsigned int)(*a2 - *(_DWORD *)(a1 + 4)) >> 20));
    result = NtFreeVirtualMemory(-1, (int)a2, (int)a3, 0x8000);
    *(_DWORD *)(Capped + 12) -= *a3 >> 20;
    return result;
  }
  v9 = *v5;
  v10 = 28 * (unsigned __int8)v5[1] + a1 + 60;
  if ( (*v5 & 4) != 0 )
  {
    *v5 = v9 & 0xFE;
    return RtlpHpVaMgrRangeFree(v10, v6);
  }
  if ( (*(_BYTE *)(v10 + 26) & 6u) < 4 )
  {
    NtFreeVirtualMemory(-1, (int)a2, (int)a3, 0x4000);
    v9 = *(_BYTE *)v6;
  }
  v17 = v6;
  if ( (v9 & 2) != 0 )
  {
    v11 = v6;
    do
      v6 -= 16;
    while ( (*(_BYTE *)v6 & 2) != 0 );
  }
  else
  {
    v12 = v9 & 4;
    if ( ((*(_BYTE *)(v10 + 26) >> 4) & (v12 == 0)) == 0 )
    {
      v13 = v12 ? *(_DWORD *)(v6 + 12) : *(unsigned __int16 *)(v6 + 12);
      if ( v4 != v13 )
        NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
    }
    if ( v12 )
      v14 = *(_DWORD *)(v6 + 12);
    else
      v14 = *(unsigned __int16 *)(v6 + 12);
    if ( v4 >= v14 )
      v11 = 0;
    else
      v11 = v6 + 16 * v4;
  }
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)v10);
  if ( v11 )
    RtlpHpVaMgrRangeSplit((v11 - v6) >> 4);
  v6 = RtlpHpVaMgrFree(v10, v17);
  result = RtlReleaseSRWLockExclusive((volatile signed __int32 *)v10);
  if ( v6 )
    return RtlpHpVaMgrRangeFree(v10, v6);
  return result;
}
