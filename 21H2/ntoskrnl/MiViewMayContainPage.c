/*
 * XREFs of MiViewMayContainPage @ 0x1402FA6CC
 * Callers:
 *     MiTrimSection @ 0x1402FA430 (MiTrimSection.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiEndingOffsetWithLock @ 0x1403274E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void *__fastcall MiViewMayContainPage(__int64 a1, char a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v9; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  int v17; // edx
  unsigned __int8 v18; // al
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rsi
  PVOID Pool; // rax
  void *v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // [rsp+60h] [rbp+18h]

  v5 = *(_QWORD *)(a3 + 16);
  v6 = -1;
  v7 = 0LL;
  v9 = a3;
  if ( (v5 & 3) != 0 )
  {
    switch ( v5 & 3 )
    {
      case 1uLL:
        v7 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        v17 = a2 & 0x20;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
        {
          if ( v17 && (*(_DWORD *)(a3 - 48) & 0x280) != 0x200 )
            return 0LL;
          v12 = MiStartingOffset(*(_QWORD *)(a3 - 24), *(_QWORD *)(a3 - 16), 0xFFFFFFFFLL);
          v18 = *(_BYTE *)(v9 - 64);
          a3 = *(unsigned int *)(v9 - 72);
          v15 = v12
              + (((*(unsigned int *)(v9 - 68) | ((unsigned __int64)*(unsigned __int8 *)(v9 - 63) << 32))
                - (a3 | ((unsigned __int64)v18 << 32))
                + 1) << 12);
          goto LABEL_14;
        }
        if ( !v17 )
        {
          v18 = *(_BYTE *)(a3 - 64);
          v12 = 0LL;
          LODWORD(a3) = *(_DWORD *)(a3 - 72);
          v15 = 0LL;
LABEL_14:
          v5 = ((unsigned int)a3 | ((unsigned __int64)v18 << 32)) << 12;
          goto LABEL_5;
        }
        break;
      case 2uLL:
        v5 &= ~2uLL;
        if ( *(_DWORD *)(a3 + 24) != -1 )
          v6 = *(_DWORD *)(a3 + 24);
        v12 = *(_QWORD *)(a3 - 48) << 12;
        v15 = v12 + *(_QWORD *)(a3 - 40);
        goto LABEL_5;
      case 3uLL:
        v5 &= 0xFFFFFFFFFFFFFFFCuLL;
        v6 = *(_DWORD *)(a3 + 32);
        v15 = *(_QWORD *)(a3 + 24) - v5 + 1;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v24 = a1 + 128;
          if ( (unsigned int)MiGetSystemRegionType(v5) != 1 )
            v6 = -2;
          while ( v24 )
          {
            v27 = MiStartingOffset(v24, *(_QWORD *)(v24 + 8), v6);
            if ( a4 < MiEndingOffsetWithLock(v24) && a4 >= v27 )
            {
              v25 = *(_QWORD *)(v24 + 8);
              v26 = v25 + 8 * ((a4 - v27) >> 12);
              if ( v26 < v25 + 8 * (unsigned __int64)*(unsigned int *)(v24 + 44)
                && ((*(_BYTE *)(v24 + 34) & 2) == 0 || (*(_DWORD *)(a1 + 56) & 0x4000000) == 0) )
              {
                v5 += (__int64)(v26 - *(_QWORD *)(a1 + 136)) >> 3 << 12;
                goto LABEL_45;
              }
              return 0LL;
            }
            v24 = *(_QWORD *)(v24 + 16);
          }
          return 0LL;
        }
LABEL_45:
        v12 = 0LL;
        goto LABEL_5;
    }
    return 0LL;
  }
  v11 = *(_QWORD *)(a3 + 32);
  v12 = 4 * (v11 & 0xFFFFFFFFFFFF0000uLL);
  v13 = v11 & 0x3F;
  if ( v13 )
    v14 = (unsigned __int64)v13 << 12;
  else
    v14 = 0x40000LL;
  v15 = v12 + v14;
  if ( !v5 )
    return 0LL;
LABEL_5:
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v19 = 0LL;
    v20 = v5 + 4096;
  }
  else
  {
    if ( a4 >= v15 || a5 <= v12 )
      return 0LL;
    v19 = v12;
    if ( a4 >= v12 )
    {
      v19 = a4;
      v5 += a4 - v12;
    }
    v23 = a5 - v19;
    if ( a5 > v15 )
      v23 = v15 - v19;
    v20 = v5 + v23;
  }
  Pool = MiAllocatePool(64, 0x30uLL, 0x6156694Du);
  v22 = Pool;
  if ( Pool )
  {
    *((_QWORD *)Pool + 2) = v5;
    *((_QWORD *)Pool + 3) = v20;
    *((_QWORD *)Pool + 1) = v7;
    *((_QWORD *)Pool + 4) = v19;
    *((_DWORD *)Pool + 10) = v6;
    *((_DWORD *)Pool + 11) = *(_DWORD *)(v9 + 16) & 3;
    if ( v7 )
    {
      if ( !(unsigned __int8)ObReferenceObjectSafeWithTag(v7, 1953261124LL) )
      {
        ExFreePoolWithTag(v22, 0);
        return 0LL;
      }
    }
  }
  return v22;
}
