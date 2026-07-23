/*
 * XREFs of _RtlpExtendFrontEndUsageArray@8 @ 0x4B2B1C10
 * Callers:
 *     _RtlpActivateLowFragmentationHeap@4 @ 0x4B2AEDBA (_RtlpActivateLowFragmentationHeap@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __usercall RtlpExtendFrontEndUsageArray@<eax>(PVOID *HeapHandle@<ecx>, unsigned __int16 a2@<dx>, int a3@<edi>)
{
  char *Heap; // eax
  char *v6; // edi
  PVOID v7; // ecx
  int result; // eax
  SIZE_T v9; // [esp-8h] [ebp-10h]
  size_t v10; // [esp-8h] [ebp-10h]

  if ( a2 <= *((_WORD *)HeapHandle + 120) )
    return 0;
  HIDWORD(v9) = a3;
  LODWORD(v9) = 2 * a2;
  Heap = (char *)RtlAllocateHeap(HeapHandle, 0x80000Au, v9);
  v6 = Heap;
  if ( !Heap )
    return -1073741801;
  *(Heap - 1) = 1;
  v7 = HeapHandle[59];
  if ( v7 )
  {
    LODWORD(v10) = 2 * *((unsigned __int16 *)HeapHandle + 120);
    memcpy(Heap, v7, v10);
    RtlFreeHeap(HeapHandle, 2u, HeapHandle[59]);
  }
  HeapHandle[59] = v6;
  result = 0;
  *((_WORD *)HeapHandle + 120) = a2;
  return result;
}
