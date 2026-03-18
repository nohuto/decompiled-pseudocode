/*
 * XREFs of PopEtEnergyTrackerCleanup @ 0x1408F51D4
 * Callers:
 *     PopEtEnergyTrackerDelete @ 0x1408F53A0 (PopEtEnergyTrackerDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopEtAggregateKeyCleanup @ 0x1406678B8 (PopEtAggregateKeyCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406B6B38 (PopEtEnergyTrackerCleanupAggregates.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rcx
  __int64 *v11; // rbp
  __int64 *v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rsi
  __int64 *i; // rcx
  void *v16; // rcx

  PopAcquireRwLockExclusive(PopEtGlobals + 16);
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  PopReleaseRwLock(PopEtGlobals + 16);
  PopEtEnergyTrackerCleanupAggregates(a1, v4, v5, v6);
  v10 = *(void **)(a1 + 56);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x54456F50u);
  v11 = *(__int64 **)(a1 + 72);
  v12 = v11;
  while ( 1 )
  {
    if ( !v12 )
      goto LABEL_11;
    v13 = *v12;
    if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v13 = *v12;
    if ( (v13 & 1) != 0 )
    {
LABEL_11:
      v7 = v11 + 1;
      v8 = *(_QWORD *)(a1 + 72) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 68) >> 5);
      while ( 1 )
      {
        if ( (unsigned __int64)v7 >= v8 )
        {
          v13 = 0LL;
          goto LABEL_16;
        }
        if ( (*v7 & 1) == 0 )
          break;
        ++v7;
      }
      v12 = (__int64 *)*v7;
      v11 = v7;
      v13 = *v7;
    }
    else
    {
      v12 = (__int64 *)v13;
    }
LABEL_16:
    if ( !v13 )
      break;
    v14 = v12;
    for ( i = v11; (*i & 1) == 0; i = (__int64 *)*i )
    {
      if ( (__int64 *)*i == v12 )
      {
        *i = *v12;
        --*(_DWORD *)(a1 + 64);
        *v12 |= 0x8000000000000002uLL;
        v12 = i;
        goto LABEL_24;
      }
    }
    v14 = 0LL;
LABEL_24:
    PopEtAggregateKeyCleanup(v14 + 2, (__int64)v7, v8, v9);
    ExFreePoolWithTag(v14, 0x54456F50u);
  }
  v16 = *(void **)(a1 + 72);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x54456F50u);
  return PopEtAggregateKeyCleanup((__int64 *)(a1 + 96), (__int64)v7, v8, v9);
}
