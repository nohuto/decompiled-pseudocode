/*
 * XREFs of ExInitializeSessionHeapManager @ 0x14036EEAC
 * Callers:
 *     MiSessionCreate @ 0x1407F3718 (MiSessionCreate.c)
 * Callees:
 *     ExCleanupSessionHeapManager @ 0x14036DBE4 (ExCleanupSessionHeapManager.c)
 *     RtlHpHeapManagerStart @ 0x14036EDD4 (RtlHpHeapManagerStart.c)
 *     ExCreateHeap @ 0x14036F5D4 (ExCreateHeap.c)
 *     RtlHpHeapManagerInitialize @ 0x14036FB38 (RtlHpHeapManagerInitialize.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiSessionPoolTrackTableSize @ 0x140864DB8 (MiSessionPoolTrackTableSize.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExInitializeSessionHeapManager(union _RTL_RUN_ONCE a1, __int64 a2)
{
  union _RTL_RUN_ONCE *PoolWithTag; // rax
  union _RTL_RUN_ONCE *v5; // rdi
  __int128 v6; // xmm0
  int v7; // ebx
  union _RTL_RUN_ONCE v8; // rax
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF

  PoolWithTag = (union _RTL_RUN_ONCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3900uLL, 0x65537048u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x3900uLL);
    v11 = 0x500010200LL;
    RtlHpHeapManagerInitialize(v5, &v11);
    v10 = 0LL;
    LOBYTE(v10) = 4;
    v6 = v10;
    *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 608) = v5;
    *(_OWORD *)&v5[1820].Ptr = v6;
    v7 = RtlHpHeapManagerStart(v5, 2, 2LL, a1, a2 - a1.Value, 0);
    if ( v7 < 0
      || (v10 = *(_OWORD *)&v5[1820].Ptr, v7 = ExCreateHeap(&v10, 0LL, &v5[1822]), v7 < 0)
      || (v10 = *(_OWORD *)&v5[1820].Ptr, v7 = ExCreateHeap(&v10, 0LL, &v5[1823]), v7 < 0) )
    {
      ExCleanupSessionHeapManager();
    }
    else
    {
      v8.Ptr = v5[1823].Ptr;
      *(_DWORD *)(v8.Value + 880) |= 2u;
      *(_BYTE *)(v8.Value + 333) |= 8u;
      *(_BYTE *)(v8.Value + 525) |= 8u;
      if ( !ExpSessionPoolTrackTableSize )
      {
        ExpSessionPoolTrackTableSize = MiSessionPoolTrackTableSize();
        ExpSessionPoolTrackTableMask = ExpSessionPoolTrackTableSize - 1;
      }
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
