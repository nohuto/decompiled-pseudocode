/*
 * XREFs of ExInitializeSessionHeapManager @ 0x14039D714
 * Callers:
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 * Callees:
 *     ExCleanupSessionHeapManager @ 0x140389960 (ExCleanupSessionHeapManager.c)
 *     ExCreateHeap @ 0x14039D898 (ExCreateHeap.c)
 *     RtlHpHeapManagerStart @ 0x14039D8D8 (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x14039DE8C (RtlHpHeapManagerInitialize.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiSessionPoolTrackTable @ 0x140622B50 (MiSessionPoolTrackTable.c)
 *     MiSessionPoolTrackTableSize @ 0x1407D5058 (MiSessionPoolTrackTableSize.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExInitializeSessionHeapManager(int a1, int a2)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v5; // rbx
  int v6; // edi
  __int64 v7; // rax
  __int128 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+50h] [rbp-10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+30h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38F0uLL, 0x65537048u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38F0uLL);
    v12 = 0x500010200LL;
    RtlHpHeapManagerInitialize(v5, &v12);
    v9 = 0LL;
    LOBYTE(v9) = 4;
    *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672) = v5;
    v5[909] = v9;
    v6 = RtlHpHeapManagerStart((_DWORD)v5, 2, a1, a2 - a1, 0);
    if ( v6 >= 0 )
    {
      v10 = v5[909];
      v6 = ExCreateHeap(&v10, 0LL, v5 + 910);
      if ( v6 >= 0 )
      {
        v11 = v5[909];
        v6 = ExCreateHeap(&v11, 0LL, (char *)v5 + 14568);
        if ( v6 >= 0 )
        {
          v7 = *((_QWORD *)v5 + 1821);
          *(_DWORD *)(v7 + 816) |= 2u;
          *(_BYTE *)(v7 + 269) |= 8u;
          *(_BYTE *)(v7 + 461) |= 8u;
          if ( !ExpSessionPoolTrackTable )
          {
            ExpSessionPoolTrackTable = MiSessionPoolTrackTable();
            ExpSessionPoolTrackTableSize = MiSessionPoolTrackTableSize();
            ExpSessionPoolTrackTableMask = ExpSessionPoolTrackTableSize - 1;
          }
          v5 = 0LL;
          v6 = 0;
        }
      }
    }
    if ( v5 )
      ExCleanupSessionHeapManager();
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
