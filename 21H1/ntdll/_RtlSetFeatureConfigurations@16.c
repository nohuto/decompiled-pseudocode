/*
 * XREFs of _RtlSetFeatureConfigurations@16 @ 0x4B369740
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _ZwSetSystemInformation@12 @ 0x4B2F4420 (_ZwSetSystemInformation@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlSetFeatureConfigurations(_DWORD *a1, int a2, void *Src, int a4)
{
  int v4; // edi
  _DWORD *Heap; // esi
  size_t v7; // [esp-4h] [ebp-18h]
  size_t Size; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  v9 = 16;
  v4 = RtlULongLongToUInt((int *)&Size, 32 * a4, (unsigned __int64)(unsigned int)a4 >> 27);
  if ( v4 >= 0 )
  {
    v4 = RtlULongPtrAdd(0x10u, Size, &v9);
    if ( v4 >= 0 )
    {
      Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v9);
      if ( Heap )
      {
        Heap[2] = a2;
        if ( a1 )
        {
          *Heap = *a1;
          Heap[1] = a1[1];
        }
        v7 = Size;
        Heap[3] = a4;
        memcpy(Heap + 4, Src, v7);
        v4 = ZwSetSystemInformation(210, (int)Heap, v9);
        if ( v4 >= 0 )
          v4 = 0;
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return v4;
}
