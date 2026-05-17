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

int __fastcall RtlpCheckDeviceName(const void **a1, unsigned int a2, bool *a3)
{
  int v3; // ebx
  _WORD *Heap; // edi
  unsigned int v5; // eax
  void *ProcessHeap; // [esp+8h] [ebp-Ch]

  v3 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (_WORD *)RtlAllocateHeap((int)ProcessHeap, 0, *(unsigned __int16 *)a1);
  if ( Heap )
  {
    *a3 = 1;
    memcpy(Heap, a1[1], *(unsigned __int16 *)a1);
    v5 = a2 >> 1;
    Heap[v5] = 46;
    Heap[v5 + 1] = 0;
    *a3 = RtlDoesFileExists_UEx(Heap, 1) == 0;
    RtlFreeHeap((int)ProcessHeap, 0, (int)Heap);
  }
  else
  {
    *a3 = 0;
    return -1073741801;
  }
  return v3;
}
