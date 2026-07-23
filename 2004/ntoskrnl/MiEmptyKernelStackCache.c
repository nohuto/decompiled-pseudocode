/*
 * XREFs of MiEmptyKernelStackCache @ 0x1403CCCA4
 * Callers:
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiScrubNode @ 0x14055EBAC (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1408CE4DC (MmRelocatePfnList.c)
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     MiDeleteCachedKernelStack @ 0x1402F33D4 (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 */

void MiEmptyKernelStackCache()
{
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 v2; // rcx
  unsigned int j; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  _SLIST_HEADER *v6; // rbp
  PSLIST_ENTRY v7; // rax

  if ( (MiFlags & 0x800) != 0 )
  {
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      Prcb = KeGetPrcb(i);
      if ( *(_QWORD *)(Prcb + 32520) )
      {
        v2 = _InterlockedExchange64((volatile __int64 *)(Prcb + 32520), 0LL);
        if ( v2 )
          MiDeleteCachedKernelStack(v2);
      }
    }
    for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
    {
      v4 = 2LL;
      v5 = 11LL * j;
      do
      {
        v6 = &SListHead[v5];
        while ( 1 )
        {
          v7 = RtlpInterlockedPopEntrySList(v6);
          if ( !v7 )
            break;
          MiDeleteCachedKernelStack((__int64)v7);
        }
        v5 += 2LL;
        --v4;
      }
      while ( v4 );
    }
  }
}
