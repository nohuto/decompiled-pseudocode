/*
 * XREFs of _RtlpCheckDeviceName@12 @ 0x4B32D58D
 * Callers:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlDoesFileExists_UEx@8 @ 0x4B2E3164 (_RtlDoesFileExists_UEx@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __userpurge RtlpCheckDeviceName@<eax>(unsigned int a1@<edx>, const void **a2@<ecx>, int a3@<esi>, bool *a4)
{
  int v4; // ebx
  PVOID Heap; // edi
  unsigned int v6; // eax
  size_t v8; // [esp-8h] [ebp-1Ch]
  SIZE_T v9; // [esp-4h] [ebp-18h]
  PVOID HeapHandle; // [esp+8h] [ebp-Ch]

  v4 = 0;
  LODWORD(v9) = *(unsigned __int16 *)a2;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(HeapHandle, 0, v9);
  if ( Heap )
  {
    HIDWORD(v8) = a3;
    *a4 = 1;
    LODWORD(v8) = *(unsigned __int16 *)a2;
    memcpy(Heap, a2[1], v8);
    v6 = a1 >> 1;
    *((_WORD *)Heap + v6) = 46;
    *((_WORD *)Heap + v6 + 1) = 0;
    *a4 = RtlDoesFileExists_UEx((PCWSTR)Heap, 1) == 0;
    RtlFreeHeap(HeapHandle, 0, Heap);
  }
  else
  {
    *a4 = 0;
    return -1073741801;
  }
  return v4;
}
