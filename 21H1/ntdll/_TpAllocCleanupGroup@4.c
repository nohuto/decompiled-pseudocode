/*
 * XREFs of _TpAllocCleanupGroup@4 @ 0x4B2EC860
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TpAllocCleanupGroup@4 @ 0x4B2EC860 (_TpAllocCleanupGroup@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpAllocCleanupGroup(_DWORD *a1)
{
  _DWORD *Heap; // ecx
  int result; // eax
  int v3; // [esp+18h] [ebp-1Ch]

  if ( !a1 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  *a1 = 0;
  Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag | 8, 56);
  if ( Heap )
  {
    *Heap = 1;
    Heap[1] = 0;
    Heap[2] = 0;
    Heap[10] = 0;
    Heap[4] = Heap + 3;
    Heap[3] = Heap + 3;
    Heap[12] = Heap + 11;
    Heap[11] = Heap + 11;
    Heap[6] = 0;
    Heap[7] = 0;
    Heap[8] = 0;
    Heap[9] = 0;
    result = 0;
    v3 = 0;
    *a1 = Heap;
  }
  else
  {
    result = -1073741801;
    v3 = -1073741801;
  }
  if ( result < 0 )
  {
    if ( Heap )
    {
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag, (int)Heap);
      return v3;
    }
  }
  return result;
}
