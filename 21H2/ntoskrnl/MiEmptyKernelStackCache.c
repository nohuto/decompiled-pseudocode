/*
 * XREFs of MiEmptyKernelStackCache @ 0x1405A54BC
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiScrubNode @ 0x1405C5550 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140978C9C (MmRelocatePfnList.c)
 * Callees:
 *     MiPruneCachedStackList @ 0x1402690B4 (MiPruneCachedStackList.c)
 *     MiDeleteCachedKernelStack @ 0x140269118 (MiDeleteCachedKernelStack.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1405A50AC (MiDeleteCachedKernelShadowStack.c)
 */

__int64 __fastcall MiEmptyKernelStackCache(union _SLIST_HEADER *a1, int a2)
{
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int j; // edi
  __int64 v9; // r14
  union _SLIST_HEADER *v10; // rbx
  union _SLIST_HEADER *v11; // rbp
  union _SLIST_HEADER *v12; // rbx
  union _SLIST_HEADER *v13; // rbp
  struct _SLIST_ENTRY v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a2 || (byte_140C506CE & 1) == 0 )
  {
    result = (__int64)&MiSystemPartition;
    if ( a1 == (union _SLIST_HEADER *)&MiSystemPartition )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        result = KeGetPrcb(i);
        v6 = result;
        if ( *(_QWORD *)(result + 33352) )
        {
          v7 = _InterlockedExchange64((volatile __int64 *)(result + 33352), 0LL);
          if ( v7 )
            result = MiDeleteCachedKernelStack(v7);
        }
        if ( *(_QWORD *)(v6 + 38584) )
        {
          v15 = 0LL;
          v14 = 0LL;
          result = _InterlockedExchange64((volatile __int64 *)(v6 + 38584), 0LL);
          *(_QWORD *)&v15 = result;
          if ( result )
            result = (__int64)MiDeleteCachedKernelShadowStack(a1, &v14, 0);
        }
      }
    }
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      v9 = 24512LL * j;
      v10 = (union _SLIST_HEADER *)(v9 + a1[1].Alignment + 22976);
      v11 = v10 + 6;
      while ( v10 < v11 )
      {
        MiPruneCachedStackList((__int64)a1, v10, 0, 0);
        v10 += 2;
      }
      if ( a2 )
      {
        v12 = (union _SLIST_HEADER *)(v9 + a1[1].Alignment + 23072);
        v13 = v12 + 6;
        while ( v12 < v13 )
        {
          MiPruneCachedStackList((__int64)a1, v12, 0, 1);
          v12 += 2;
        }
      }
      result = (unsigned __int16)KeNumberNodes;
    }
  }
  return result;
}
