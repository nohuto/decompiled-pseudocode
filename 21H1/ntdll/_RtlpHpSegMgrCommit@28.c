/*
 * XREFs of _RtlpHpSegMgrCommit@28 @ 0x4B37BF36
 * Callers:
 *     _RtlpHpSegMgrAllocate@12 @ 0x4B37BE2B (_RtlpHpSegMgrAllocate@12.c)
 *     _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1 (_RtlpHpSegMgrRelease@12.c)
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 * Callees:
 *     _RtlpHpHeapCheckCommitLimit@16 @ 0x4B2E68BA (_RtlpHpHeapCheckCommitLimit@16.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpAllocVA@28 @ 0x4B377E59 (_RtlpHpAllocVA@28.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 *     _RtlpHpSegMgrCommitComplete@24 @ 0x4B37C1CE (_RtlpHpSegMgrCommitComplete@24.c)
 *     _RtlpHpSegMgrCommitInitiate@24 @ 0x4B37C275 (_RtlpHpSegMgrCommitInitiate@24.c)
 */

int __fastcall RtlpHpSegMgrCommit(int a1, int a2, unsigned int a3, int Size, int Size_4, int a6, char a7)
{
  int v8; // edi
  unsigned int v9; // esi
  NTSTATUS v10; // edi
  _WORD *v11; // edx
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // ecx
  ULONG v16; // edi
  NTSTATUS v17; // eax
  int v18; // ecx
  size_t v20; // [esp-4h] [ebp-4Ch]
  _BYTE BaseAddress[5]; // [esp+Fh] [ebp-39h] BYREF
  _WORD *v22; // [esp+14h] [ebp-34h] BYREF
  _DWORD *v23; // [esp+18h] [ebp-30h]
  ULONG_PTR RegionSize; // [esp+1Ch] [ebp-2Ch] BYREF
  _RTL_SRWLOCK SRWLock; // [esp+24h] [ebp-24h] BYREF
  _DWORD *v26; // [esp+28h] [ebp-20h]
  _DWORD *MemoryInformation; // [esp+2Ch] [ebp-1Ch] BYREF
  int v28; // [esp+30h] [ebp-18h]
  int Sizea; // [esp+54h] [ebp+Ch]

  SRWLock.0 = 0;
  v23 = (_DWORD *)a2;
  v8 = Size_4;
  v9 = a6 & 0xBFFFFFFF;
  BaseAddress[0] = 0;
  HIDWORD(RegionSize) = a6 & 0x40000000;
  if ( Size_4 > 0 )
  {
    if ( !RtlpHpHeapCheckCommitLimit(
            Size_4 << 12,
            (*(_DWORD *)(*(_DWORD *)(a1 + 36) + 80) + *(_DWORD *)(*(_DWORD *)(a1 + 36) + 132)) << 12,
            *(_DWORD *)(a1 + 36),
            (int *)(*(_DWORD *)(a1 + 36) + 24)) )
      return -1073741523;
    a2 = (int)v23;
  }
  if ( (*(_BYTE *)(a1 + 9) & 7) != 0 )
  {
    RtlpHpQueryVA(a2 & 0xFFE00000, &v22, 0, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
    v11 = &v22[a3 >> 9];
  }
  else
  {
    v11 = 0;
  }
  v12 = &v23[1024 * a3];
  v22 = v11;
  v13 = Size << 12;
  v26 = v12;
  for ( Sizea = Size << 12; ; v13 = Sizea )
  {
    *(_DWORD *)&BaseAddress[1] = v12;
    LODWORD(RegionSize) = v13;
    if ( !v11 )
      goto LABEL_14;
    v14 = RtlpHpSegMgrCommitInitiate(v8, a7, &SRWLock, (int)BaseAddress);
    if ( v14 == -1073741568 )
      break;
    if ( v14 == -1073741566 )
    {
      *(_DWORD *)&BaseAddress[1] &= 0xFFE00000;
      LODWORD(RegionSize) = 0x200000;
      if ( v8 <= 0 )
        goto LABEL_27;
      v9 |= 0x20000000u;
    }
LABEL_14:
    if ( v8 <= 0 )
    {
LABEL_27:
      v10 = RtlpHpFreeVA((PVOID *)&BaseAddress[1], &RegionSize, v9, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
      goto LABEL_28;
    }
    if ( HIDWORD(RegionSize) && (v9 & 0x20000000) == 0 )
      v9 |= 0x40000000u;
    v15 = *(_DWORD **)(a1 + 36);
    v23 = v15;
    v16 = (v15[3] & 0x40000000) != 0 ? 64 : 4;
    if ( (v15[3] & 0x40000000) != 0
      && (NtQueryVirtualMemory(
            (HANDLE)0xFFFFFFFF,
            v15,
            MemoryRegionInformation,
            &MemoryInformation,
            0x1CuLL,
            (PSIZE_T)HIDWORD(v20)) < 0
       || (v28 & 0x60) == 0
       || MemoryInformation != v23) )
    {
      RtlpLogHeapFailure(0, (int)v23, 1, v28, 0, 0);
      v16 = 4;
    }
    v17 = RtlpHpAllocVA(
            (PVOID *)&BaseAddress[1],
            (int *)&RegionSize,
            0,
            v9,
            v16,
            *(_DWORD *)(a1 + 28),
            *(_DWORD *)(a1 + 32));
    v10 = v17;
    if ( HIDWORD(RegionSize) && v17 >= 0 && (v9 & 0x40000000) == 0 )
    {
      LODWORD(v20) = Sizea;
      memset(*(void **)&BaseAddress[1], 0, v20);
    }
LABEL_28:
    if ( !v22 )
      return v10;
    v18 = 0x4000;
    if ( (*v22 & 0x4000) != 0 && v10 >= 0 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 16) + 4), 2 * (Size_4 > 0) - 1);
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 16)), Size_4);
    }
    RtlpHpSegMgrCommitComplete(Size_4, v10 >= 0, &SRWLock, v18);
    if ( (v9 & 0x20000000) == 0 || v10 >= 0 || (a7 & 2) != 0 )
      return v10;
    v8 = Size_4;
    v11 = v22;
    v9 &= ~0x20000000u;
    v12 = v26;
    a7 |= 1u;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 16)), v8);
  if ( HIDWORD(RegionSize) )
  {
    LODWORD(v20) = Sizea;
    memset(*(void **)&BaseAddress[1], 0, v20);
  }
  return 0;
}
