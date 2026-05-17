/*
 * XREFs of RtlUnlockHeapManagerForCloning @ 0x1800F3218
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009BA70 (RtlCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D64B0 (RtlCloneUserProcess.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009DAA0 (ZwQueryVirtualMemory.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F4BC4 (RtlpUnlockHeapManagerForCloning.c)
 */

__int64 __fastcall RtlUnlockHeapManagerForCloning(unsigned int a1)
{
  struct _PEB *v2; // rdi
  void **ProcessHeaps; // r12
  unsigned int NumberOfHeaps; // ebx
  __int64 v5; // r14
  int v6; // r15d
  _DWORD *v7; // rcx
  int v9; // [rsp+58h] [rbp-50h]

  v2 = NtCurrentPeb();
  if ( a1 )
  {
    RtlpHpLfhPerfFlags &= ~0x40u;
    ProcessHeaps = v2->ProcessHeaps;
    NumberOfHeaps = v2->NumberOfHeaps;
    v5 = 0LL;
    v6 = 0;
    while ( (unsigned int)v5 < v2->NumberOfHeaps )
    {
      ZwQueryVirtualMemory();
      if ( v9 == 4096 && ((v7 = ProcessHeaps[v5], v7[38] == -285217025) || v7[4] == -571548178) )
        ProcessHeaps[v6++] = v7;
      else
        --NumberOfHeaps;
      v5 = (unsigned int)(v5 + 1);
    }
    v2->NumberOfHeaps = NumberOfHeaps;
  }
  return RtlpUnlockHeapManagerForCloning(a1, v2->NumberOfHeaps);
}
