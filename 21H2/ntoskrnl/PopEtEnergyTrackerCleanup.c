/*
 * XREFs of PopEtEnergyTrackerCleanup @ 0x14099A23C
 * Callers:
 *     PopEtEnergyTrackerDelete @ 0x14099A400 (PopEtEnergyTrackerDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopEtAggregateKeyCleanup @ 0x140674F0C (PopEtAggregateKeyCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406A894C (PopEtEnergyTrackerCleanupAggregates.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  void *v4; // rcx
  _QWORD **v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // rcx
  void *v8; // rcx
  _QWORD *v10; // rbp
  _QWORD *i; // rcx

  PopAcquireRwLockExclusive(PopEtGlobals + 16);
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  PopReleaseRwLock(PopEtGlobals + 16);
  PopEtEnergyTrackerCleanupAggregates(a1);
  v4 = *(void **)(a1 + 56);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54456F50u);
  v5 = *(_QWORD ***)(a1 + 72);
  v6 = (unsigned __int64)v5;
  while ( 1 )
  {
    v7 = (unsigned __int64 *)v6;
    if ( !v6 )
      break;
    v6 = *(_QWORD *)v6;
    if ( (v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = *v7;
    if ( (v6 & 1) != 0 )
      break;
LABEL_17:
    if ( !v6 )
      goto LABEL_14;
    v10 = (_QWORD *)v6;
    for ( i = v5; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == v6 )
      {
        *i = *(_QWORD *)v6;
        --*(_DWORD *)(a1 + 64);
        *(_QWORD *)v6 |= 0x8000000000000002uLL;
        v6 = (unsigned __int64)i;
        goto LABEL_24;
      }
    }
    v10 = 0LL;
LABEL_24:
    PopEtAggregateKeyCleanup(v10 + 2);
    ExFreePoolWithTag(v10, 0x54456F50u);
  }
  for ( ++v5; (unsigned __int64)v5 < *(_QWORD *)(a1 + 72) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 68) >> 5); ++v5 )
  {
    v6 = (unsigned __int64)*v5;
    if ( ((unsigned __int8)*v5 & 1) == 0 )
      goto LABEL_17;
  }
LABEL_14:
  v8 = *(void **)(a1 + 72);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54456F50u);
  return PopEtAggregateKeyCleanup((_QWORD *)(a1 + 96));
}
