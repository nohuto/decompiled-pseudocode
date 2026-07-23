/*
 * XREFs of _RtlGetMultiTimePrecise@12 @ 0x4B3449D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlTryEndReadTickLock@12 @ 0x4B2DBBEF (_RtlTryEndReadTickLock@12.c)
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _RtlBeginReadTickLock@4 @ 0x4B2DBE26 (_RtlBeginReadTickLock@4.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 */

int __stdcall RtlGetMultiTimePrecise(unsigned int *a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  int v6; // edx
  int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // ebx
  LARGE_INTEGER v10; // rdi
  unsigned int *v11; // ecx
  unsigned int v12; // ebx
  int v13; // edx
  __int64 v14; // rdi
  unsigned int v15; // eax
  char v17; // [esp+13h] [ebp-55h]
  int v18; // [esp+14h] [ebp-54h]
  int v19; // [esp+18h] [ebp-50h]
  int v20; // [esp+1Ch] [ebp-4Ch]
  unsigned __int64 v21; // [esp+20h] [ebp-48h]
  unsigned __int64 v22; // [esp+28h] [ebp-40h]
  unsigned int v23; // [esp+2Ch] [ebp-3Ch]
  unsigned int v24; // [esp+30h] [ebp-38h]
  unsigned int v25; // [esp+34h] [ebp-34h]
  __int64 v26; // [esp+3Ch] [ebp-2Ch]
  unsigned int v27; // [esp+44h] [ebp-24h]
  unsigned int v28; // [esp+48h] [ebp-20h]
  __int64 v29; // [esp+50h] [ebp-18h]
  int v30; // [esp+58h] [ebp-10h]
  int TickLock; // [esp+5Ch] [ebp-Ch]
  LARGE_INTEGER PerformanceCounter; // [esp+60h] [ebp-8h] BYREF

  v22 = 0LL;
  v29 = 0LL;
  v21 = 0LL;
  v18 = 0;
  v20 = 0;
  v27 = 0;
  v26 = 0LL;
  v24 = 0;
  v25 = 0;
  v17 = 0;
  if ( a2 )
  {
    v3 = RtlpHypervisorSharedUserVa;
    v4 = a2 & 4;
    v19 = RtlpHypervisorSharedUserVa;
    v5 = a2 & 2;
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock((int *)0x7FFE0340);
      v30 = v6;
      if ( v4 )
      {
        v22 = MEMORY[0x7FFE0348];
        v24 = MEMORY[0x7FFE0358];
        v25 = MEMORY[0x7FFE035C];
        v17 = MEMORY[0x7FFE0368];
        v29 = MEMORY[0x7FFE0014];
      }
      if ( v5 && v3 )
      {
        v26 = MEMORY[0x7FFE03C7];
        do
        {
          do
          {
            v7 = MEMORY[0x7FFE03BC];
            v20 = MEMORY[0x7FFE03B8];
            v27 = MEMORY[0x7FFE03BC];
            v8 = *(_DWORD *)(v19 + 24);
            v9 = *(_DWORD *)(v19 + 28);
            v21 = __PAIR64__(v9, v8);
            RtlQueryPerformanceCounter(&PerformanceCounter);
          }
          while ( v8 != *(_DWORD *)(v19 + 24) );
        }
        while ( v9 != *(_DWORD *)(v19 + 28) || v20 != MEMORY[0x7FFE03B8] || v7 != MEMORY[0x7FFE03BC] );
        v5 = a2 & 2;
        v3 = v19;
        v4 = a2 & 4;
      }
      else
      {
        RtlQueryPerformanceCounter(&PerformanceCounter);
      }
      if ( RtlTryEndReadTickLock((int *)0x7FFE0340, TickLock, v30) )
        break;
      _mm_pause();
    }
    v10 = PerformanceCounter;
    v11 = a1;
    v12 = 0;
    if ( (a2 & 1) != 0 )
    {
      *a1 = PerformanceCounter.LowPart;
      v13 = 1;
      a1[1] = v10.HighPart;
      v18 = 1;
    }
    else
    {
      v13 = 0;
    }
    if ( (a2 & 2) != 0 && !v26 && v21 )
    {
      a1[2] = v21 + v10.LowPart - v20;
      v11 = a1;
      v13 = v18 | 2;
      v18 |= 2u;
      a1[3] = (v21 + v10.QuadPart - __PAIR64__(v27, v20)) >> 32;
    }
    if ( (a2 & 4) != 0 )
    {
      if ( v10.QuadPart <= v22 )
      {
        v15 = 0;
      }
      else
      {
        v14 = v10.QuadPart - v22 - 1;
        if ( v17 )
        {
          v11 = a1;
          v14 <<= v17;
        }
        v28 = v14 * v25;
        v23 = ((unsigned int)v14 * (unsigned __int64)v25) >> 32;
        if ( HIDWORD(v14) )
        {
          v12 = (__PAIR64__(
                   __PAIR64__(v23, v28) + HIDWORD(v14) * (unsigned __int64)v24 < __PAIR64__(v23, v28),
                   (__PAIR64__(v23, v28) + HIDWORD(v14) * (unsigned __int64)v24) >> 32)
               + v25 * (unsigned __int64)HIDWORD(v14)) >> 32;
          v15 = ((__PAIR64__(v23, v28) + HIDWORD(v14) * (unsigned __int64)v24) >> 32) + v25 * HIDWORD(v14);
        }
        else
        {
          v15 = (__PAIR64__(v23, v28) + (((unsigned int)v14 * (unsigned __int64)v24) >> 32)) >> 32;
        }
        v13 = v18;
      }
      v11[4] = v29 + v15;
      v13 |= 4u;
      v11[5] = (v29 + __PAIR64__(v12, v15)) >> 32;
    }
    *a3 = v13;
  }
  else
  {
    *a3 = 0;
  }
  return 0;
}
