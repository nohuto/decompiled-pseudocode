/*
 * XREFs of _RtlpHpVsContextGrowInPlace@20 @ 0x4B37F6C2
 * Callers:
 *     _RtlpHpSegReAlloc@16 @ 0x4B37D316 (_RtlpHpSegReAlloc@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpVsCalculateChunkRequiredSize@8 @ 0x4B37E7E3 (_RtlpHpVsCalculateChunkRequiredSize@8.c)
 *     _RtlpHpVsChunkSetUnusedBytes@16 @ 0x4B37ED34 (_RtlpHpVsChunkSetUnusedBytes@16.c)
 *     _RtlpHpVsChunkSplit@24 @ 0x4B37EE0F (_RtlpHpVsChunkSplit@24.c)
 */

int __fastcall RtlpHpVsContextGrowInPlace(int a1, int a2, int a3, int a4, char a5)
{
  int v5; // ebx
  int v6; // edi
  unsigned __int16 v7; // ax
  int v8; // esi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // esi
  int v18; // eax
  unsigned int v19; // edx
  int v20; // edx
  int v22; // [esp+Ch] [ebp-28h] BYREF
  PRTL_SRWLOCK v23; // [esp+10h] [ebp-24h]
  int v24; // [esp+14h] [ebp-20h]
  int v25; // [esp+18h] [ebp-1Ch]
  unsigned int v26; // [esp+1Ch] [ebp-18h]
  int v27; // [esp+20h] [ebp-14h] BYREF
  unsigned int v28; // [esp+24h] [ebp-10h]
  int v29; // [esp+28h] [ebp-Ch]
  int v30; // [esp+2Ch] [ebp-8h]
  PRTL_SRWLOCK SRWLock; // [esp+30h] [ebp-4h]

  v5 = a3;
  v30 = a2;
  v6 = a3 - 8;
  SRWLock = (PRTL_SRWLOCK)a1;
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
    return 0;
  v7 = *(_WORD *)(a2 + 20);
  v29 = v7;
  if ( (((unsigned __int16)(v7 ^ *(_WORD *)(a2 + 22)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, (unsigned int)SRWLock ^ *(_DWORD *)(a1 + 128), a2, 0, 0, 0);
    return 0;
  }
  v8 = *(_DWORD *)v6 ^ v6 ^ RtlpHpHeapGlobals;
  if ( v8 >= 0 )
  {
    RtlpLogHeapFailure(8, (unsigned int)SRWLock ^ *(_DWORD *)(a1 + 128), a3, a3 - 8, 0, 0);
    return 0;
  }
  v27 = *(_DWORD *)(a4 + 16);
  v25 = *(_DWORD *)(a4 + 12);
  v9 = RtlpHpVsCalculateChunkRequiredSize(v25, &v27);
  v10 = (unsigned __int16)v8 >> 1;
  v26 = v10;
  if ( v10 <= v9 && (v9 -= v10, (v28 = v9) != 0) )
  {
    v27 = a5 & 1;
    v29 = (unsigned __int16)v29;
    if ( (a5 & 1) != 0 )
    {
      v11 = v30;
    }
    else
    {
      v22 = 0;
      v24 = 0;
      v23 = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
      v11 = v30;
      v6 = a3 - 8;
      v29 = *(unsigned __int16 *)(v30 + 20);
    }
    v12 = v6 + 8 * v26;
    if ( v12 >= v11 + 8 * ((unsigned int)(unsigned __int16)v29 + 3)
      || (v13 = v12 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v12, v13 < 0)
      || (unsigned __int16)v13 >> 1 < v28
      || (v14 = RtlpHpVsChunkSplit((int)SRWLock, v11, (unsigned int *)(v6 + 8 * v26), v28, a5, (int)&v22)) == 0 )
    {
      v5 = 0;
      if ( v27 )
        return v5;
      RtlReleaseSRWLockExclusive(v23);
      return 0;
    }
    v15 = v30;
    *(_DWORD *)v6 ^= (*(_DWORD *)v6 ^ v6 ^ RtlpHpHeapGlobals ^ (v8 + 2 * v14)) & 0xFFFE;
    v16 = ((v6 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v6) >> 1) & 0x7FFF;
    v17 = v6 + 8 * v16;
    if ( v17 < v15 + 8 * ((unsigned int)*(unsigned __int16 *)(v15 + 20) + 3) )
      *(_DWORD *)v17 ^= (v17 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v17 ^ (v16 << 16)) & 0x7FFF0000;
    v18 = *(_DWORD *)(v6 + 4);
    v19 = 8 * v16 - 8;
    if ( *(_DWORD *)(a4 + 12) >= v19 )
    {
      *(_DWORD *)(v6 + 4) = v18 & 0xFFFFFEFF;
    }
    else
    {
      *(_DWORD *)(v6 + 4) = v18 | 0x100;
      RtlpHpVsChunkSetUnusedBytes(a3, v19, v19 - *(_DWORD *)(a4 + 12), a4);
    }
    if ( !v27 )
      RtlReleaseSRWLockExclusive(v23);
  }
  else
  {
    v20 = 8 * v10 - 8;
    if ( v20 == v25 )
      *(_DWORD *)(v6 + 4) &= ~0x100u;
    else
      RtlpHpVsChunkSetUnusedBytes(a3, v20, v20 - v25, v9);
  }
  return v5;
}
