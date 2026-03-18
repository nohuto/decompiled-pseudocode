/*
 * XREFs of PopEtEnergyTrackerCleanupAggregates @ 0x1406B6B38
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1406B5E14 (PopEtEnergyTrackerQuery.c)
 *     PopEtEnergyTrackerCleanup @ 0x1408F51D4 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     PopEtAggregateKeyCleanup @ 0x1406678B8 (PopEtAggregateKeyCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall PopEtEnergyTrackerCleanupAggregates(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 *v4; // rbp
  __int64 *v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 *v9; // rsi
  __int64 *i; // rcx

  v4 = *(unsigned __int64 **)(a1 + 56);
  v6 = (__int64 *)v4;
  while ( 1 )
  {
    if ( !v6 )
      goto LABEL_6;
    v7 = *v6;
    result = *v6 & 0x8000000000000002uLL;
    if ( result == 0x8000000000000002uLL )
    {
      result = MEMORY[0];
      v7 = *v6;
    }
    if ( (v7 & 1) == 0 )
    {
      v6 = (__int64 *)v7;
    }
    else
    {
LABEL_6:
      a2 = v4 + 1;
      result = *(_QWORD *)(a1 + 56);
      a3 = result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5);
      while ( (unsigned __int64)a2 < a3 )
      {
        result = *a2;
        if ( (*a2 & 1) == 0 )
        {
          v6 = (__int64 *)*a2;
          v4 = a2;
          v7 = *a2;
          goto LABEL_10;
        }
        ++a2;
      }
      v7 = 0LL;
    }
LABEL_10:
    if ( !v7 )
      return result;
    v9 = v6;
    for ( i = (__int64 *)v4; (*i & 1) == 0; i = (__int64 *)*i )
    {
      if ( (__int64 *)*i == v6 )
      {
        *i = *v6;
        --*(_DWORD *)(a1 + 48);
        *v6 |= 0x8000000000000002uLL;
        v6 = i;
        goto LABEL_15;
      }
    }
    v9 = 0LL;
LABEL_15:
    if ( v9 == (__int64 *)(a1 + 80) )
    {
      *(_DWORD *)(a1 + 636) &= ~4u;
      memset((void *)(a1 + 128), 0, 0x1C8uLL);
    }
    else
    {
      PopEtAggregateKeyCleanup(v9 + 2, (__int64)a2, a3, a4);
      ExFreePoolWithTag(v9, 0x54456F50u);
    }
  }
}
