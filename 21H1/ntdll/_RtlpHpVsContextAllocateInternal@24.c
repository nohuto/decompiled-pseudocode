/*
 * XREFs of _RtlpHpVsContextAllocateInternal@24 @ 0x4B37F180
 * Callers:
 *     _RtlpHpVsContextAllocate@16 @ 0x4B37F139 (_RtlpHpVsContextAllocate@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpVsCalculateChunkRequiredSize@8 @ 0x4B37E7E3 (_RtlpHpVsCalculateChunkRequiredSize@8.c)
 *     _RtlpHpVsChunkSetUnusedBytes@16 @ 0x4B37ED34 (_RtlpHpVsChunkSetUnusedBytes@16.c)
 *     _RtlpHpVsChunkSplit@24 @ 0x4B37EE0F (_RtlpHpVsChunkSplit@24.c)
 *     _RtlpHpVsContextAddSubsegment@8 @ 0x4B37F0C2 (_RtlpHpVsContextAddSubsegment@8.c)
 *     _RtlpHpVsSubsegmentCreate@12 @ 0x4B37FDB3 (_RtlpHpVsSubsegmentCreate@12.c)
 */

void *__fastcall RtlpHpVsContextAllocateInternal(int a1, size_t a2, int a3, int a4, int a5, _DWORD *a6)
{
  unsigned int v7; // eax
  int v8; // edi
  bool v9; // zf
  _DWORD *v10; // edi
  unsigned int v11; // esi
  _DWORD *v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // eax
  int v15; // esi
  int v16; // eax
  _DWORD *v17; // edi
  unsigned int v18; // ebx
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edx
  void *v24; // edi
  int v25; // eax
  unsigned int v26; // edx
  _DWORD *v27; // ebx
  unsigned int v28; // eax
  int v29; // esi
  int v31; // [esp-4h] [ebp-2Ch]
  unsigned int v33; // [esp+10h] [ebp-18h]
  int v34; // [esp+14h] [ebp-14h]
  unsigned int v36; // [esp+20h] [ebp-8h]
  unsigned int v37; // [esp+24h] [ebp-4h]

  v7 = RtlpHpVsCalculateChunkRequiredSize(a2, &a3);
  v37 = v7;
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
    v37 = ++v7;
  v8 = a5;
  v33 = (unsigned __int16)(2 * v7);
  if ( !*a6 )
  {
    v9 = (a4 & 1) == 0;
    *a6 = 1;
    if ( v9 )
    {
      *(_DWORD *)v8 = 0;
      v10 = (_DWORD *)(v8 + 4);
      *v10 = 0;
      v10[1] = 0;
      v8 = a5;
      *(_DWORD *)(a5 + 4) = a1;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
    }
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    {
      if ( v11 )
        v11 ^= a1 + 8;
      else
        v11 = 0;
    }
    v12 = 0;
    v36 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        v13 = (unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)(v11 - 4) ^ *(unsigned __int16 *)(v11 - 4);
        if ( v33 < v13 )
          break;
        if ( v33 <= v13 )
          goto LABEL_20;
        v14 = *(_DWORD *)(v11 + 4);
        if ( (*(_BYTE *)(a1 + 12) & 1) == 0 || !v14 )
        {
          v12 = (_DWORD *)v36;
LABEL_17:
          v11 = v14;
          goto LABEL_18;
        }
        v12 = (_DWORD *)v36;
        v11 ^= v14;
LABEL_18:
        if ( !v11 )
          goto LABEL_19;
      }
      v12 = (_DWORD *)v11;
      v14 = *(_DWORD *)v11;
      v36 = v11;
      if ( (*(_BYTE *)(a1 + 12) & 1) != 0 && v14 )
      {
        v11 ^= v14;
        goto LABEL_18;
      }
      goto LABEL_17;
    }
LABEL_19:
    v11 = (unsigned int)v12;
LABEL_20:
    if ( v11 )
      break;
    v15 = a4 & 1;
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int32 **)(v8 + 4));
      *(_DWORD *)(v8 + 4) &= v15;
    }
    v31 = a4;
    *a6 = 0;
    v16 = RtlpHpVsSubsegmentCreate(v31);
    v34 = v16;
    if ( !v16 )
      return 0;
    *a6 = 1;
    if ( !v15 )
    {
      *(_DWORD *)v8 = 0;
      v17 = (_DWORD *)(v8 + 4);
      *v17 = 0;
      v17[1] = 0;
      v8 = a5;
      *(_DWORD *)(a5 + 4) = a1;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
      v16 = v34;
    }
    RtlpHpVsContextAddSubsegment(a1, v16);
  }
  v18 = v11 - 4;
  v19 = v11 - 4;
  if ( (((v11 - 4) ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v11 - 4)) & 0x80000000) != 0 )
  {
    v20 = (unsigned __int8)(*(_BYTE *)v11 ^ v18 ^ RtlpHpHeapGlobals);
    goto LABEL_38;
  }
  v21 = (((v11 - 4) ^ RtlpHpHeapGlobals ^ *(_DWORD *)(v11 - 4)) >> 16) & 0x7FFF;
  if ( v21 )
  {
    v19 = v18 - 8 * v21;
    if ( ((v19 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v19) & 0x80000000) != 0 )
    {
LABEL_36:
      v20 = (unsigned __int8)(v19 ^ RtlpHpHeapGlobals ^ *(_BYTE *)(v19 + 4));
      goto LABEL_38;
    }
    v22 = ((v19 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v19) >> 16) & 0x7FFF;
    if ( v22 )
    {
      v19 += -8 * v22;
      goto LABEL_36;
    }
  }
  v20 = 0;
LABEL_38:
  v23 = (v19 - (v20 << 12)) & 0xFFFFF000;
  if ( (((unsigned __int16)(*(_WORD *)(v23 + 20) ^ *(_WORD *)(v23 + 22)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), v23, v11 - 4, 0, 0);
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
  {
    v25 = v37;
    if ( (((_WORD)v18 + 16) & 0xFFF) != 0 )
      v25 = v37 - 1;
  }
  else
  {
    v25 = v37;
  }
  if ( !RtlpHpVsChunkSplit(a1, v23, (unsigned int *)(v11 - 4), v25, a4, v8) )
    return 0;
  v24 = (void *)(v18 + 8);
  v26 = 8 * (((v18 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v18) >> 1) & 0x7FFF) - 8;
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
  {
    v27 = (_DWORD *)(v18 + 16);
    if ( ((unsigned __int16)v27 & 0xFFF) == 0 )
    {
      v24 = v27;
      v26 -= 8;
    }
  }
  v28 = *(_DWORD *)v11;
  if ( a2 >= v26 )
  {
    *(_DWORD *)v11 = v28 & 0xFFFFFEFF;
  }
  else
  {
    *(_DWORD *)v11 = v28 | 0x100;
    RtlpHpVsChunkSetUnusedBytes((int)v24, v26, v26 - a2, 0x7FFF);
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) == 0 )
    {
      v29 = a5;
      RtlReleaseSRWLockExclusive(*(volatile signed __int32 **)(a5 + 4));
      *(_DWORD *)(v29 + 4) = 0;
    }
    *a6 = 0;
    memset(v24, 0, a2);
  }
  return v24;
}
