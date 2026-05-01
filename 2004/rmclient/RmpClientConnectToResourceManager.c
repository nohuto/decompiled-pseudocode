/*
 * XREFs of RmpClientConnectToResourceManager @ 0x1800095B8
 * Callers:
 *     RmConnectToResourceManager @ 0x180009760 (RmConnectToResourceManager.c)
 * Callees:
 *     RmpClientConnectionAllocateState @ 0x18000950C (RmpClientConnectionAllocateState.c)
 *     RmpClientConnectionInitialize @ 0x18000963C (RmpClientConnectionInitialize.c)
 *     RmpClientConnectionCleanup @ 0x18000FA38 (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmpClientConnectToResourceManager(__int64 a1, _QWORD *a2)
{
  PVOID Heap; // rax
  void *v5; // rbx
  int Pointer; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x68uLL);
  v5 = Heap;
  if ( Heap )
  {
    RmpClientConnectionInitialize(Heap);
    Pointer = (unsigned int)RmpClientConnectionAllocateState(a1, (__int64)v5).Pointer;
    if ( Pointer >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
    {
      RmpClientConnectionCleanup(v5);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Pointer;
}
