/*
 * XREFs of _RtlAllocateActivationContextStack@4 @ 0x4B2E48C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInitializeActivationContextStack@4 @ 0x4B2E4963 (_RtlpInitializeActivationContextStack@4.c)
 */

int __userpurge RtlAllocateActivationContextStack@<eax>(int a1@<edi>, _DWORD *a2)
{
  PVOID Heap; // eax
  PVOID v3; // edi
  SIZE_T v5; // [esp-8h] [ebp-Ch]

  if ( *a2 )
    return 0;
  HIDWORD(v5) = a1;
  LODWORD(v5) = 24;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  v3 = Heap;
  if ( !Heap )
    return -1073741801;
  RtlpInitializeActivationContextStack(Heap);
  *a2 = v3;
  return 0;
}
