/*
 * XREFs of _RtlpHpLargeAlloc@16 @ 0x4B379D22
 * Callers:
 *     _RtlpHpAllocateHeapInternal@20 @ 0x4B3781B0 (_RtlpHpAllocateHeapInternal@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 *     _RtlpHpHeapCheckCommitLimit@16 @ 0x4B2E68BA (_RtlpHpHeapCheckCommitLimit@16.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHeapLogRangeReserve@12 @ 0x4B36D8FF (_RtlpHeapLogRangeReserve@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpAllocVA@28 @ 0x4B377E59 (_RtlpHpAllocVA@28.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 */

PVOID __fastcall RtlpHpLargeAlloc(_RTL_SRWLOCK *BaseAddress, int a2, size_t Size)
{
  PVOID v4; // edi
  _RTL_BALANCED_NODE *v5; // ebx
  unsigned int v6; // edx
  int v7; // edi
  bool v8; // zf
  int v9; // ecx
  unsigned int v10; // eax
  ULONG v11; // edi
  int v12; // edx
  ULONG v13; // edi
  _RTL_BALANCED_NODE *v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // edi
  unsigned int v19; // eax
  int v20; // eax
  int v22; // [esp-8h] [ebp-78h]
  size_t v23; // [esp-4h] [ebp-74h]
  int Value; // [esp-4h] [ebp-74h]
  PVOID BaseAddressa; // [esp+10h] [ebp-60h] BYREF
  ULONG_PTR RegionSize; // [esp+14h] [ebp-5Ch] BYREF
  int v27; // [esp+1Ch] [ebp-54h] BYREF
  BOOLEAN Right[4]; // [esp+20h] [ebp-50h] BYREF
  void *v29; // [esp+24h] [ebp-4Ch]
  int v30; // [esp+28h] [ebp-48h]
  unsigned int v31; // [esp+2Ch] [ebp-44h]
  _RTL_SRWLOCK **v32; // [esp+30h] [ebp-40h] BYREF
  int v33; // [esp+34h] [ebp-3Ch]
  _RTL_SRWLOCK *MemoryInformation; // [esp+38h] [ebp-38h] BYREF
  int v35; // [esp+3Ch] [ebp-34h]
  _RTL_SRWLOCK *v36; // [esp+54h] [ebp-1Ch] BYREF
  int v37; // [esp+58h] [ebp-18h]
  int Size_4; // [esp+7Ch] [ebp+Ch]

  v33 = a2;
  v4 = 0;
  BaseAddressa = 0;
  v29 = 0;
  v5 = (_RTL_BALANCED_NODE *)RtlpHpMetadataAlloc(0x14u, 0x14u, 0, BaseAddress->Value, BaseAddress[1].Value);
  if ( v5 )
  {
    v6 = Size;
    v5->Children[0] = 0;
    v5->Children[1] = 0;
    v5->ParentValue = 0;
    v5[1].Children[0] = 0;
    v5[1].Children[1] = 0;
    v7 = 0;
    v8 = (BaseAddress[3].Value & 0x4000000) == 0;
    HIDWORD(RegionSize) = 0;
    if ( !v8 && 0x1FFFFF - (((_DWORD)Size - 1) & 0x1FFFFFu) < (unsigned int)Size >> 2 )
    {
      v7 = 1;
      HIDWORD(RegionSize) = 1;
    }
    while ( 1 )
    {
      v9 = 0;
      v30 = 0;
      if ( v7 )
      {
        *(_DWORD *)Right = 0x200000;
        v10 = v6 - ((v6 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        if ( BYTE1(BaseAddress->Value) < 2u && (v6 & 0xFFFFF) - 1 <= 0xFEFFF )
        {
          v9 = 1;
          v30 = 1;
        }
        *(_DWORD *)Right = 0;
        v10 = v6 + (v9 << 12);
      }
      LODWORD(RegionSize) = v10;
      if ( v10 < v6 )
        goto LABEL_61;
      v11 = (BaseAddress[3].Value & 0x40000000) != 0 ? 64 : 4;
      if ( (BaseAddress[3].Value & 0x40000000) != 0
        && (NtQueryVirtualMemory(
              (HANDLE)0xFFFFFFFF,
              BaseAddress,
              MemoryRegionInformation,
              &MemoryInformation,
              0x1CuLL,
              (PSIZE_T)HIDWORD(v23)) < 0
         || (v35 & 0x60) == 0
         || MemoryInformation != BaseAddress) )
      {
        RtlpLogHeapFailure(0, (int)BaseAddress, 1, v35, 0, 0);
        v11 = 4;
      }
      if ( RtlpHpAllocVA(
             &BaseAddressa,
             (int *)&RegionSize,
             *(int *)Right,
             0x2000,
             v11,
             BaseAddress->Value,
             BaseAddress[1].Value) < 0 )
      {
        BaseAddressa = 0;
LABEL_61:
        v4 = v29;
LABEL_62:
        if ( v5 )
          RtlpHpMetadataFree(BaseAddress->Value, BaseAddress[1].Value);
        goto LABEL_64;
      }
      RtlpHpQueryVA((int)BaseAddressa, &v32, &v27, BaseAddress->Value, BaseAddress[1].Value);
      *v32 = BaseAddress;
      v12 = BaseAddress[20].Value + BaseAddress[33].Value;
      v31 = (unsigned int)(Size + 4095) >> 12;
      *(_DWORD *)Right = v31 << 12;
      if ( !RtlpHpHeapCheckCommitLimit(v31 << 12, v12 << 12, (int)BaseAddress, (int *)&BaseAddress[6]) )
        goto LABEL_61;
      v27 = 4096;
      if ( HIDWORD(RegionSize) )
      {
        v27 = 536875008;
        *(_DWORD *)Right += 0x1FFFFF - ((*(_DWORD *)Right - 1) & 0x1FFFFF);
      }
      else if ( (Size & 0x200000000LL) != 0 )
      {
        v27 = 1073745920;
      }
      v13 = (BaseAddress[3].Value & 0x40000000) != 0 ? 64 : 4;
      if ( (BaseAddress[3].Value & 0x40000000) != 0
        && (NtQueryVirtualMemory(
              (HANDLE)0xFFFFFFFF,
              BaseAddress,
              MemoryRegionInformation,
              &v36,
              0x1CuLL,
              (PSIZE_T)HIDWORD(v23)) < 0
         || (v37 & 0x60) == 0
         || v36 != BaseAddress) )
      {
        RtlpLogHeapFailure(0, (int)BaseAddress, 1, v37, 0, 0);
        v13 = 4;
      }
      if ( RtlpHpAllocVA(&BaseAddressa, (int *)Right, 0, v27, v13, BaseAddress->Value, BaseAddress[1].Value) >= 0 )
        break;
      if ( !HIDWORD(RegionSize) )
        goto LABEL_61;
      Value = BaseAddress[1].Value;
      v7 = 0;
      v22 = BaseAddress->Value;
      HIDWORD(RegionSize) = 0;
      RtlpHpFreeVA(&BaseAddressa, &RegionSize, 0x8000, v22, Value);
      BaseAddressa = 0;
      v6 = Size;
    }
    if ( HIDWORD(RegionSize) && (Size & 0x200000000LL) != 0 )
    {
      LODWORD(v23) = Size;
      memset(BaseAddressa, 0, v23);
    }
    v14 = v5[1].Children[1];
    v5[1].Children[0] = (_RTL_BALANCED_NODE *)BaseAddressa;
    v15 = (2 * v30) | (v31 << 12) | (unsigned __int16)v14 & 0xFFD;
    v5[1].Children[1] = (_RTL_BALANCED_NODE *)v15;
    _BitScanForward(&v16, RegionSize);
    v5[1].Children[1] = (_RTL_BALANCED_NODE *)(v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(4 * v16)) & 0xFC);
    LOWORD(v5[1].Children[0]) = ((_WORD)v31 << 12) - v33;
    Size_4 = BYTE4(Size) & 1;
    if ( !Size_4 )
      RtlAcquireSRWLockExclusive(BaseAddress + 16);
    v17 = BaseAddress[17].Value;
    if ( (*(_BYTE *)&BaseAddress[18].0 & 1) != 0 )
    {
      if ( v17 )
        v17 ^= (unsigned int)&BaseAddress[17];
      else
        v17 = 0;
    }
    v18 = *(_BYTE *)&BaseAddress[18].0 & 1;
    Right[0] = 0;
    if ( v17 )
    {
      while ( 1 )
      {
        if ( (unsigned int)BaseAddressa < (*(_DWORD *)(v17 + 12) & 0xFFFF0000) )
        {
          v19 = *(_DWORD *)v17;
          if ( v18 )
          {
            if ( !v19 )
              goto LABEL_52;
            v19 ^= v17;
          }
          if ( !v19 )
          {
LABEL_52:
            Right[0] = 0;
            break;
          }
        }
        else
        {
          v19 = *(_DWORD *)(v17 + 4);
          if ( v18 )
          {
            if ( !v19 )
              goto LABEL_46;
            v19 ^= v17;
          }
          if ( !v19 )
          {
LABEL_46:
            Right[0] = 1;
            break;
          }
        }
        v17 = v19;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)&BaseAddress[17], (PRTL_BALANCED_NODE)v17, Right[0], v5);
    if ( !Size_4 )
      RtlReleaseSRWLockExclusive(BaseAddress + 16);
    _InterlockedExchangeAdd((volatile signed __int32 *)&BaseAddress[19], (int)RegionSize / 4096);
    _InterlockedExchangeAdd((volatile signed __int32 *)&BaseAddress[20], v31);
    v4 = BaseAddressa;
    v5 = 0;
    BaseAddressa = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v20 = (int)NtCurrentPeb()->SharedData + 558;
    else
      v20 = 2147353480;
    if ( *(_BYTE *)v20 )
    {
      RtlpHeapLogRangeReserve((int)BaseAddress, (int)v4, RegionSize);
      goto LABEL_62;
    }
  }
  else
  {
LABEL_64:
    if ( BaseAddressa )
      RtlpHpFreeVA(&BaseAddressa, &RegionSize, 0x8000, BaseAddress->Value, BaseAddress[1].Value);
  }
  return v4;
}
