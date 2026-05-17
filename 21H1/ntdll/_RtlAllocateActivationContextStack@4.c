/*
 * XREFs of _RtlAllocateActivationContextStack@4 @ 0x4B2E48C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInitializeActivationContextStack@4 @ 0x4B2E4963 (_RtlpInitializeActivationContextStack@4.c)
 */

int __stdcall RtlAllocateActivationContextStack(int *a1)
{
  int Heap; // eax
  int v2; // edi

  if ( *a1 )
    return 0;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 24);
  v2 = Heap;
  if ( !Heap )
    return -1073741801;
  RtlpInitializeActivationContextStack(Heap);
  *a1 = v2;
  return 0;
}
