/*
 * XREFs of TppPoolUpdateNodeRelation @ 0x18006339C
 * Callers:
 *     TpAllocPoolInternal @ 0x180062D34 (TpAllocPoolInternal.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180111F70 (TppAdjustRunningThreadGoalWithLock.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtQuerySystemInformationEx @ 0x1800A0230 (NtQuerySystemInformationEx.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall TppPoolUpdateNodeRelation(__int64 a1)
{
  char *Heap; // rbx
  NTSTATUS v3; // edi
  char *i; // rdx
  ULONG SystemInformationLength; // [rsp+48h] [rbp+10h] BYREF
  int InputBuffer; // [rsp+50h] [rbp+18h] BYREF

  InputBuffer = 1;
  SystemInformationLength = 80 * TppNumberNodes;
  Heap = (char *)RtlAllocateHeap(
                   NtCurrentPeb()->ProcessHeap,
                   (TppHeapTag + 786432) | 8,
                   (unsigned int)(80 * TppNumberNodes));
  if ( Heap )
  {
    v3 = NtQuerySystemInformationEx(
           SystemLogicalProcessorAndGroupInformation,
           &InputBuffer,
           4u,
           Heap,
           SystemInformationLength,
           &SystemInformationLength);
    if ( v3 >= 0 )
    {
      memset(*(void **)(a1 + 48), 0, 16LL * (unsigned int)TppNumberNodes);
      for ( i = Heap; i < &Heap[SystemInformationLength]; i += *((unsigned int *)i + 1) )
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *((unsigned int *)i + 2)) = *((_OWORD *)i + 2);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
