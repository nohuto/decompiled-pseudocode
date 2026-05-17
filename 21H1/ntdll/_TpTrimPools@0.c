/*
 * XREFs of _TpTrimPools@0 @ 0x4B383ED0
 * Callers:
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlSleepConditionVariableSRW@16 @ 0x4B2C2180 (_RtlSleepConditionVariableSRW@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtWaitForMultipleObjects@20 @ 0x4B2F2F30 (_NtWaitForMultipleObjects@20.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

signed __int32 __stdcall TpTrimPools()
{
  volatile signed __int32 *i; // eax
  volatile signed __int32 *v1; // edi
  int v2; // ebx
  unsigned int v3; // esi
  int v4; // eax
  int *v5; // ebx
  int v6; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  _DWORD *v12; // eax
  unsigned int v13; // esi
  unsigned int **v14; // edx
  unsigned int *v15; // ecx
  unsigned int *v16; // eax
  unsigned int v17; // ecx
  int v18; // ebx
  unsigned int v19; // edi
  int v20; // eax
  int *v21; // edi
  int v22; // ebx
  char v24; // [esp+13h] [ebp-2Dh]
  int v25; // [esp+14h] [ebp-2Ch]
  int Heap; // [esp+18h] [ebp-28h]
  int v27; // [esp+1Ch] [ebp-24h] BYREF
  unsigned int v28; // [esp+20h] [ebp-20h]
  int v29; // [esp+24h] [ebp-1Ch]
  volatile signed __int32 *v30; // [esp+28h] [ebp-18h]
  unsigned int v31; // [esp+2Ch] [ebp-14h]
  volatile signed __int32 *v32; // [esp+30h] [ebp-10h]
  volatile signed __int32 *v33; // [esp+34h] [ebp-Ch]
  _DWORD v34[2]; // [esp+38h] [ebp-8h] BYREF

  v34[1] = -1;
  v34[0] = -1000000;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  for ( i = (volatile signed __int32 *)TppPoolpList; i != (volatile signed __int32 *)&TppPoolpList; i = v33 )
  {
    v1 = i;
    v33 = (volatile signed __int32 *)*i;
    v30 = i - 2;
    RtlAcquireSRWLockShared(i - 2);
    if ( *((_BYTE *)v1 - 3) )
    {
      RtlReleaseSRWLockShared(v30);
      continue;
    }
    v32 = v1 - 47;
    RtlAcquireSRWLockExclusive(v1 - 47);
    v27 = 0;
    v24 = 1;
    if ( ZwSetInformationWorkerFactory(*((_DWORD *)v1 - 49), 12, (int)&v27, 4) < 0 || !v27 )
      goto LABEL_40;
    v2 = 0;
    v3 = *((_DWORD *)v1 + 9) ^ (*((_DWORD *)v1 + 9) ^ (2 * v27)) & 0xFFE;
    for ( *((_DWORD *)v1 + 9) = v3; ((v3 >> 11) & 0xFFE) < (v3 & 0xFFE); v2 = v4 )
    {
      if ( v2 == 258 )
        break;
      v4 = RtlSleepConditionVariableSRW(v1 + 11, v1 - 47, (int)v34, 0);
      v3 = *((_DWORD *)v1 + 9);
    }
    if ( (v3 & 0x7FF000) == 0 )
    {
      *((_DWORD *)v1 + 9) = v3 & 0xFFFFF001;
LABEL_40:
      RtlReleaseSRWLockExclusive(v32);
      RtlReleaseSRWLockShared(v30);
      continue;
    }
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 4 * ((v3 >> 12) & 0x7FF));
    v5 = (int *)(v1 + 12);
    if ( !Heap )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( (int *)*v5 == v5 )
          break;
        v7 = *(_DWORD *)v6;
        if ( *(_DWORD *)(*(_DWORD *)v6 + 4) != v6 )
          goto LABEL_44;
        v8 = *(_DWORD **)(v6 + 4);
        if ( *v8 != v6 )
          goto LABEL_44;
        *v8 = v7;
        *(_DWORD *)(v7 + 4) = v8;
        NtClose(*(HANDLE *)(v6 + 8));
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v6);
      }
      *((_DWORD *)v1 + 9) &= 0xFF800001;
      goto LABEL_40;
    }
    v9 = RtlAllocateHeap(
           (int)NtCurrentPeb()->ProcessHeap,
           (TppHeapTag + 786432) | 8,
           4 * ((*((_DWORD *)v1 + 9) >> 12) & 0x7FF));
    v25 = v9;
    if ( v9 )
    {
      v13 = 0;
      v14 = (unsigned int **)v9;
      v29 = Heap - v9;
      while ( 1 )
      {
        v15 = (unsigned int *)*v5;
        if ( (int *)*v5 == v5 )
          break;
        *(unsigned int **)((char *)v14 + v29) = (unsigned int *)v15[2];
        v5 = (int *)(v1 + 12);
        *v14 = v15;
        v28 = *v15;
        if ( *(unsigned int **)(v28 + 4) != v15 || (v16 = (unsigned int *)v15[1], (unsigned int *)*v16 != v15) )
LABEL_44:
          __fastfail(3u);
        v17 = v28;
        ++v13;
        *v16 = v28;
        ++v14;
        *(_DWORD *)(v17 + 4) = v16;
      }
      *((_DWORD *)v1 + 9) &= 0xFF800001;
      RtlReleaseSRWLockExclusive(v1 - 47);
      RtlReleaseSRWLockShared(v1 - 2);
      v28 = 0;
      v18 = Heap;
      v19 = 0;
      v24 = 0;
      v31 = v13 >> 6;
      do
      {
        if ( v19 >= v13 )
          break;
        v20 = v19 + 64 > v13 ? v13 & 0x3F : 64;
        if ( NtWaitForMultipleObjects(v20, v18, 0, 0, (int)v34) == 258 )
          break;
        v19 += 64;
        v18 += 256;
        ++v28;
      }
      while ( v28 <= v31 );
      if ( v13 )
      {
        v21 = (int *)v25;
        v22 = v29;
        do
        {
          NtClose(*(HANDLE *)((char *)v21 + v22));
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v21++);
          --v13;
        }
        while ( v13 );
      }
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v25);
    }
    else
    {
      while ( 1 )
      {
        v10 = *v5;
        if ( (int *)*v5 == v5 )
          break;
        v11 = *(_DWORD *)v10;
        if ( *(_DWORD *)(*(_DWORD *)v10 + 4) != v10 )
          goto LABEL_44;
        v12 = *(_DWORD **)(v10 + 4);
        if ( *v12 != v10 )
          goto LABEL_44;
        *v12 = v11;
        *(_DWORD *)(v11 + 4) = v12;
        NtClose(*(HANDLE *)(v10 + 8));
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v10);
      }
      *((_DWORD *)v1 + 9) &= 0xFF800001;
    }
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    if ( v24 )
      goto LABEL_40;
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
