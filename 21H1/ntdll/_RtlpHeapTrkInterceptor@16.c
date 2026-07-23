/*
 * XREFs of _RtlpHeapTrkInterceptor@16 @ 0x4B3648D0
 * Callers:
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 * Callees:
 *     _NtQueryPerformanceCounter@8 @ 0x4B2F2C90 (_NtQueryPerformanceCounter@8.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     RtlpHeapTrkTrackAdd @ 0x4B364DEB (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x4B364E7D (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x4B364F2B (RtlpHeapTrkTrackRemoveHeap.c)
 */

int __stdcall RtlpHeapTrkInterceptor(PVOID a1, unsigned int a2, int a3, int a4)
{
  void *v4; // ebx
  unsigned int v5; // edi
  signed __int32 v6; // esi
  unsigned int v7; // ebx
  int v8; // edi
  unsigned int v9; // esi
  signed __int64 v10; // rax
  signed __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // edx
  volatile signed __int64 *v14; // eax
  unsigned int v15; // esi
  signed __int64 v16; // rax
  int v17; // ebx
  bool v18; // zf
  int v19; // edi
  unsigned int v20; // esi
  signed __int64 v21; // rax
  signed __int64 v22; // rax
  unsigned int v23; // esi
  LARGE_INTEGER PerformanceCounter; // [esp+8h] [ebp-20h] BYREF
  LARGE_INTEGER v26; // [esp+10h] [ebp-18h] BYREF
  unsigned int v27; // [esp+18h] [ebp-10h]
  unsigned __int32 v28; // [esp+1Ch] [ebp-Ch]
  unsigned int v29; // [esp+20h] [ebp-8h]
  unsigned int v30; // [esp+24h] [ebp-4h]

  v4 = a1;
  if ( a1 == HeapHandle || dword_4B3A6DAC == 1 )
    return 0;
  if ( a3 == 2 )
  {
LABEL_11:
    if ( a2 )
    {
      v5 = (a2 >> 3) | 0xE0000000;
      v29 = v5;
      if ( dword_4B3A6C60 == 1 )
      {
        RtlpHeapTrkTrackAdd(a1, v5);
      }
      else if ( dword_4B3A6C60 == 2 )
      {
        v28 = **(_DWORD **)dword_4B3A6958;
        v30 = MEMORY[0x7FFE0004];
        if ( MEMORY[0x7FFE0004] < 0x1000000u )
        {
          while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
            _mm_pause();
          v5 = v29;
          v4 = a1;
          v6 = v30 * (MEMORY[0x7FFE0324] << 8) + ((v30 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
        }
        else
        {
          v6 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
        }
        if ( v6 - v28 >= 0x3E8
          && _InterlockedCompareExchange(*(volatile signed __int32 **)dword_4B3A6958, v6, v28) == v28 )
        {
          v7 = PerformanceFrequency.QuadPart / 100;
          v28 = (unsigned __int64)(PerformanceFrequency.QuadPart / 100) >> 32;
          v30 = v7;
          v8 = *(_DWORD *)dword_4B3A6958 + 8;
          do
          {
            v9 = *(_DWORD *)v8;
            LODWORD(v10) = *(_DWORD *)v8;
            v27 = *(_DWORD *)(v8 + 4);
            HIDWORD(v10) = v27;
            v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, __SPAIR64__(v28, v7), v10);
            v7 = v30;
          }
          while ( v11 != __PAIR64__(v27, v9) );
          v5 = v29;
          v4 = a1;
        }
        if ( *(__int64 *)(*(_DWORD *)dword_4B3A6958 + 8) <= 0 )
        {
          LODWORD(v22) = *(_DWORD *)dword_4B3A6958 + 24;
          v30 = v22;
          do
          {
            do
            {
              v23 = *(_DWORD *)v22;
              v27 = *(_DWORD *)(v22 + 4);
              v22 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v30,
                      __PAIR64__(v27, v23) + 1,
                      __SPAIR64__(v27, v23));
              v18 = (_DWORD)v22 == v23;
              LODWORD(v22) = v30;
            }
            while ( !v18 );
          }
          while ( HIDWORD(v22) != v27 );
        }
        else
        {
          NtQueryPerformanceCounter(&PerformanceCounter, 0);
          RtlpHeapTrkTrackAdd(v4, v5);
          NtQueryPerformanceCounter(&v26, 0);
          v26.QuadPart -= PerformanceCounter.QuadPart;
          v12 = ~v26.LowPart;
          v13 = ~v26.HighPart;
          v29 = ~v26.LowPart;
          v14 = (volatile signed __int64 *)(*(_DWORD *)dword_4B3A6958 + 8);
          v28 = ~v26.HighPart;
          v30 = (unsigned int)v14;
          do
          {
            do
            {
              v15 = *(_DWORD *)v14;
              v27 = *((_DWORD *)v14 + 1);
              v16 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v30,
                      __PAIR64__(v27, v12) + __PAIR64__(v13, v15),
                      __SPAIR64__(v27, v15));
              v17 = HIDWORD(v16);
              v12 = v29;
              v18 = (_DWORD)v16 == v15;
              v14 = (volatile signed __int64 *)v30;
              v13 = v28;
            }
            while ( !v18 );
          }
          while ( v17 != v27 );
          v19 = *(_DWORD *)dword_4B3A6958 + 16;
          do
          {
            v20 = *(_DWORD *)v19;
            v27 = *(_DWORD *)(v19 + 4);
            v21 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v19,
                    __PAIR64__(v27, v20) + 1,
                    __SPAIR64__(v27, v20));
          }
          while ( v21 != __PAIR64__(v27, v20) );
        }
      }
    }
    return 0;
  }
  if ( a3 != 3 && a3 != 5 )
  {
    if ( a3 != 6 )
    {
      if ( a3 == 8 )
        RtlpHeapTrkTrackRemoveHeap(a1);
      return 0;
    }
    goto LABEL_11;
  }
  if ( a2 )
    RtlpHeapTrkTrackRemove(a1, (a2 >> 3) | 0xE0000000);
  return 0;
}
