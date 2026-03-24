/*
 * XREFs of MiReAllocateWorkingSetSwapSupport @ 0x14035CF20
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x14035BCDC (MmOutSwapVirtualAddresses.c)
 *     MmInSwapWorkingSet @ 0x14035C504 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x14035C7D0 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiAllocateWorkingSetSwapSupport @ 0x14035CF78 (MiAllocateWorkingSetSwapSupport.c)
 *     memmove @ 0x140413F40 (memmove.c)
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
