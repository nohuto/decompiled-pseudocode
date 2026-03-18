/*
 * XREFs of MiScrubNode @ 0x1405C5550
 * Callers:
 *     MiScrubMemoryWorker @ 0x140983B10 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiClaimPhysicalRun @ 0x14027738C (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x140278460 (MiPfnsWorthTrying.c)
 *     MiEmptyKernelStackCache @ 0x1405A54BC (MiEmptyKernelStackCache.c)
 *     MiMakePageBad @ 0x1405C4E28 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x1405C4F88 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x1405C573C (MiScrubPage.c)
 *     MiScrubNodeLargePages @ 0x14097E8C8 (MiScrubNodeLargePages.c)
 */

void __fastcall MiScrubNode(__int64 a1)
{
  __int64 v1; // r8
  union _SLIST_HEADER *v3; // r13
  __int64 v4; // rbp
  unsigned int *v5; // rcx
  unsigned int i; // r15d
  unsigned __int64 v7; // r12
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  char v11; // bl
  int v12; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 8);
  v12 = 0;
  v3 = *(union _SLIST_HEADER **)(*(_QWORD *)a1 + 48LL);
  v4 = *(_QWORD *)(a1 + 216) + 16 * (**(unsigned int **)(a1 + 216) + 1LL);
  MiScrubNodeLargePages(a1, v3, v1);
  v5 = *(unsigned int **)(a1 + 216);
  for ( i = 0; i < *v5; ++i )
  {
    if ( *(_DWORD *)(v4 + 8LL * i) == *(_DWORD *)(a1 + 8) )
    {
      v7 = *(_QWORD *)&v5[4 * i + 4];
      v8 = v7 + *(_QWORD *)&v5[4 * i + 6] - 1LL;
      v9 = 48 * v8 - 0x220000000000LL;
      while ( v8 >= v7 && v7 )
      {
        if ( MiScrubInterrupted(a1) )
          return;
        v12 = 0;
        v10 = MiPfnsWorthTrying((__int64)v3, v9, 1LL, 117440512, &v12);
        if ( v10 )
        {
          if ( v10 >= v8 - v7 + 1 )
            break;
          v9 += 48 - 48 * v10;
          v8 += 1 - v10;
        }
        else
        {
          if ( v12 )
            MiEmptyKernelStackCache(v3, 0);
          if ( !MiClaimPhysicalRun(
                  (__int64)v3,
                  v8,
                  1LL,
                  qword_140C50840,
                  a1 + 176,
                  117440512,
                  -1,
                  0LL,
                  *(unsigned __int8 *)(v9 + 34) >> 6,
                  0LL) )
          {
            v11 = 2;
            if ( (int)MiScrubPage(a1, v9, 0LL, 0LL) < 0 )
              v11 = 3;
            MiMakePageBad(v8, v11);
          }
        }
        --v8;
        v9 -= 48LL;
      }
    }
    v5 = *(unsigned int **)(a1 + 216);
  }
}
