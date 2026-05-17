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

void *__fastcall RtlpHpLargeAlloc(int a1, int a2, size_t Size, char a4)
{
  void *v5; // edi
  _DWORD *v6; // ebx
  size_t v7; // edx
  int v8; // edi
  bool v9; // zf
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int v19; // edi
  unsigned int v20; // eax
  int v21; // eax
  int v23; // [esp-8h] [ebp-78h]
  int v24; // [esp-4h] [ebp-74h]
  void *v25; // [esp+10h] [ebp-60h] BYREF
  int v26; // [esp+14h] [ebp-5Ch] BYREF
  int v27; // [esp+18h] [ebp-58h]
  int v28; // [esp+1Ch] [ebp-54h] BYREF
  size_t v29; // [esp+20h] [ebp-50h] BYREF
  void *v30; // [esp+24h] [ebp-4Ch]
  int v31; // [esp+28h] [ebp-48h]
  size_t v32; // [esp+2Ch] [ebp-44h]
  int *v33; // [esp+30h] [ebp-40h] BYREF
  int v34; // [esp+34h] [ebp-3Ch]
  int v35; // [esp+38h] [ebp-38h] BYREF
  int v36; // [esp+3Ch] [ebp-34h]
  int v37; // [esp+54h] [ebp-1Ch] BYREF
  int v38; // [esp+58h] [ebp-18h]
  int v39; // [esp+7Ch] [ebp+Ch]

  v34 = a2;
  v5 = 0;
  v25 = 0;
  v30 = 0;
  v6 = (_DWORD *)RtlpHpMetadataAlloc(0x14u, 0x14u, 0, *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  if ( v6 )
  {
    v7 = Size;
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    v6[4] = 0;
    v8 = 0;
    v9 = (*(_DWORD *)(a1 + 12) & 0x4000000) == 0;
    v27 = 0;
    if ( !v9 && 0x1FFFFF - ((Size - 1) & 0x1FFFFF) < Size >> 2 )
    {
      v8 = 1;
      v27 = 1;
    }
    while ( 1 )
    {
      v10 = 0;
      v31 = 0;
      if ( v8 )
      {
        v29 = 0x200000;
        v11 = v7 - ((v7 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        if ( BYTE1(*(_DWORD *)a1) < 2u && (v7 & 0xFFFFF) - 1 <= 0xFEFFF )
        {
          v10 = 1;
          v31 = 1;
        }
        v29 = 0;
        v11 = v7 + (v10 << 12);
      }
      v26 = v11;
      if ( v11 < v7 )
        goto LABEL_61;
      v12 = (*(_DWORD *)(a1 + 12) & 0x40000000) != 0 ? 64 : 4;
      if ( (*(_DWORD *)(a1 + 12) & 0x40000000) != 0
        && (NtQueryVirtualMemory(-1, a1, 3, (int)&v35, 28, 0) < 0 || (v36 & 0x60) == 0 || v35 != a1) )
      {
        RtlpLogHeapFailure(0, a1, 1, v36, 0, 0);
        v12 = 4;
      }
      if ( RtlpHpAllocVA(&v25, (size_t *)&v26, v29, 0x2000, v12, *(_DWORD *)a1, *(_DWORD *)(a1 + 4)) < 0 )
      {
        v25 = 0;
LABEL_61:
        v5 = v30;
LABEL_62:
        if ( v6 )
          RtlpHpMetadataFree(*(_DWORD *)a1, *(_DWORD *)(a1 + 4));
        goto LABEL_64;
      }
      RtlpHpQueryVA((int)v25, &v33, &v28, *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
      *v33 = a1;
      v13 = *(_DWORD *)(a1 + 80) + *(_DWORD *)(a1 + 132);
      v32 = (Size + 4095) >> 12;
      v29 = v32 << 12;
      if ( !RtlpHpHeapCheckCommitLimit(v32 << 12, v13 << 12, a1, (int *)(a1 + 24)) )
        goto LABEL_61;
      v28 = 4096;
      if ( v27 )
      {
        v28 = 536875008;
        v29 += 0x1FFFFF - ((v29 - 1) & 0x1FFFFF);
      }
      else if ( (a4 & 2) != 0 )
      {
        v28 = 1073745920;
      }
      v14 = (*(_DWORD *)(a1 + 12) & 0x40000000) != 0 ? 64 : 4;
      if ( (*(_DWORD *)(a1 + 12) & 0x40000000) != 0
        && (NtQueryVirtualMemory(-1, a1, 3, (int)&v37, 28, 0) < 0 || (v38 & 0x60) == 0 || v37 != a1) )
      {
        RtlpLogHeapFailure(0, a1, 1, v38, 0, 0);
        v14 = 4;
      }
      if ( RtlpHpAllocVA(&v25, &v29, 0, v28, v14, *(_DWORD *)a1, *(_DWORD *)(a1 + 4)) >= 0 )
        break;
      if ( !v27 )
        goto LABEL_61;
      v24 = *(_DWORD *)(a1 + 4);
      v8 = 0;
      v23 = *(_DWORD *)a1;
      v27 = 0;
      RtlpHpFreeVA((int *)&v25, &v26, 0x8000, v23, v24);
      v25 = 0;
      v7 = Size;
    }
    if ( v27 && (a4 & 2) != 0 )
      memset(v25, 0, Size);
    v15 = v6[4];
    v6[3] = v25;
    v16 = (2 * v31) | (v32 << 12) | v15 & 0xFFD;
    v6[4] = v16;
    _BitScanForward(&v17, v26);
    v6[4] = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(4 * v17)) & 0xFC;
    *((_WORD *)v6 + 6) = ((_WORD)v32 << 12) - v34;
    v39 = a4 & 1;
    if ( !v39 )
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 64));
    v18 = *(_DWORD *)(a1 + 68);
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    {
      if ( v18 )
        v18 ^= a1 + 68;
      else
        v18 = 0;
    }
    v19 = *(_BYTE *)(a1 + 72) & 1;
    LOBYTE(v29) = 0;
    if ( v18 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v25 < (*(_DWORD *)(v18 + 12) & 0xFFFF0000) )
        {
          v20 = *(_DWORD *)v18;
          if ( v19 )
          {
            if ( !v20 )
              goto LABEL_52;
            v20 ^= v18;
          }
          if ( !v20 )
          {
LABEL_52:
            LOBYTE(v29) = 0;
            break;
          }
        }
        else
        {
          v20 = *(_DWORD *)(v18 + 4);
          if ( v19 )
          {
            if ( !v20 )
              goto LABEL_46;
            v20 ^= v18;
          }
          if ( !v20 )
          {
LABEL_46:
            LOBYTE(v29) = 1;
            break;
          }
        }
        v18 = v20;
      }
    }
    RtlRbInsertNodeEx((int *)(a1 + 68), v18, v29, (int)v6);
    if ( !v39 )
      RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 64));
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 76), v26 / 4096);
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), v32);
    v5 = v25;
    v6 = 0;
    v25 = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v21 = (int)NtCurrentPeb()->SharedData + 558;
    else
      v21 = 2147353480;
    if ( *(_BYTE *)v21 )
    {
      RtlpHeapLogRangeReserve(a1, (int)v5, v26);
      goto LABEL_62;
    }
  }
  else
  {
LABEL_64:
    if ( v25 )
      RtlpHpFreeVA((int *)&v25, &v26, 0x8000, *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  }
  return v5;
}
