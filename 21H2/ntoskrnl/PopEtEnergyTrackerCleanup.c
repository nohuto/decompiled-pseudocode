/*
 * XREFs of PopEtEnergyTrackerCleanup @ 0x1408F29B4
 * Callers:
 *     PopEtEnergyTrackerDelete @ 0x1408F2B80 (PopEtEnergyTrackerDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14068F45C (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtAggregateKeyCleanup @ 0x14069936C (PopEtAggregateKeyCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  __int64 *v8; // rbp
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 *v11; // rsi
  __int64 *i; // rcx
  void *v13; // rcx

  PopAcquireRwLockExclusive(PopEtGlobals + 16);
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  PopReleaseRwLock(PopEtGlobals + 16);
  PopEtEnergyTrackerCleanupAggregates(a1);
  v7 = *(void **)(a1 + 56);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x54456F50u);
  v8 = *(__int64 **)(a1 + 72);
  v9 = v8;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_11;
    v10 = *v9;
    if ( (*v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v10 = *v9;
    if ( (v10 & 1) != 0 )
    {
LABEL_11:
      v4 = v8 + 1;
      v5 = *(_QWORD *)(a1 + 72) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 68) >> 5);
      while ( 1 )
      {
        if ( (unsigned __int64)v4 >= v5 )
        {
          v10 = 0LL;
          goto LABEL_16;
        }
        if ( (*v4 & 1) == 0 )
          break;
        ++v4;
      }
      v9 = (__int64 *)*v4;
      v8 = v4;
      v10 = *v4;
    }
    else
    {
      v9 = (__int64 *)v10;
    }
LABEL_16:
    if ( !v10 )
      break;
    v11 = v9;
    for ( i = v8; (*i & 1) == 0; i = (__int64 *)*i )
    {
      if ( (__int64 *)*i == v9 )
      {
        *i = *v9;
        --*(_DWORD *)(a1 + 64);
        *v9 |= 0x8000000000000002uLL;
        v9 = i;
        goto LABEL_24;
      }
    }
    v11 = 0LL;
LABEL_24:
    PopEtAggregateKeyCleanup(v11 + 2, (__int64)v4, v5, v6);
    ExFreePoolWithTag(v11, 0x54456F50u);
  }
  v13 = *(void **)(a1 + 72);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x54456F50u);
  return PopEtAggregateKeyCleanup((__int64 *)(a1 + 96), (__int64)v4, v5, v6);
}
