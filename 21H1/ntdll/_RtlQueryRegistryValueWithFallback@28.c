/*
 * XREFs of _RtlQueryRegistryValueWithFallback@28 @ 0x4B3511F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlQueryRegistryValueWithFallback(int a1, int a2, int a3, int a4, _DWORD *a5, void *a6, _DWORD *a7)
{
  int ValueKey; // esi
  _DWORD *Heap; // edi
  _BYTE v10[4]; // [esp+4h] [ebp-8h] BYREF
  int v11; // [esp+8h] [ebp-4h] BYREF

  if ( !a1 && !a2 )
    return -1073741811;
  v11 = 16;
  ValueKey = RtlULongPtrAdd(0x10u, a4, &v11);
  if ( ValueKey >= 0 )
  {
    Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v11);
    if ( !Heap )
      return -1073741801;
    ValueKey = -1073741772;
    if ( !a1 || (ValueKey = ZwQueryValueKey(a1, a3, 2, (int)Heap, v11, (int)v10), ValueKey == -1073741772) )
    {
      if ( !a2 )
      {
LABEL_17:
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
        return ValueKey;
      }
      ValueKey = ZwQueryValueKey(a2, a3, 2, (int)Heap, v11, (int)v10);
    }
    if ( ValueKey >= 0 || ValueKey == -2147483643 )
    {
      *a7 = Heap[2];
      if ( a5 )
        *a5 = Heap[1];
      if ( ValueKey >= 0 )
        memcpy(a6, Heap + 3, Heap[2]);
    }
    goto LABEL_17;
  }
  return ValueKey;
}
