/*
 * XREFs of MiReAllocateWorkingSetSwapSupport @ 0x1402CC874
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402CBE58 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402CC124 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1402D10EC (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiAllocateWorkingSetSwapSupport @ 0x1402CC8CC (MiAllocateWorkingSetSwapSupport.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall MiReAllocateWorkingSetSwapSupport(__int64 a1)
{
  __int64 WorkingSetSwapSupport; // rax
  __int64 v3; // rbx
  void *v4; // rcx

  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(*(_QWORD *)(a1 + 16));
  v3 = WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    v4 = *(void **)WorkingSetSwapSupport;
    *(_QWORD *)(WorkingSetSwapSupport + 16) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(WorkingSetSwapSupport + 24) = *(_QWORD *)(a1 + 24);
    memmove(v4, *(const void **)a1, 16LL * *(_QWORD *)(a1 + 16));
  }
  return v3;
}
