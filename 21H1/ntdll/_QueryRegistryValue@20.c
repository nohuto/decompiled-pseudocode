/*
 * XREFs of _QueryRegistryValue@20 @ 0x4B38B5D1
 * Callers:
 *     _GetOverlayRootFolder@12 @ 0x4B2D1DAC (_GetOverlayRootFolder@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall QueryRegistryValue(int a1, int a2, _DWORD *a3, void *a4, size_t *a5)
{
  int v6; // esi
  _DWORD *Heap; // edi
  int ValueKey; // esi
  size_t v9; // eax
  int v12; // [esp+14h] [ebp-4h] BYREF

  v12 = 0;
  if ( !a5 )
    return -1073741811;
  v6 = *a5 + 12;
  Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v6);
  if ( !Heap )
    return -1073741670;
  ValueKey = NtQueryValueKey(a1, a2, 2, (int)Heap, v6, (int)&v12);
  if ( ValueKey < 0 )
    goto LABEL_13;
  v9 = Heap[2];
  if ( v9 )
  {
    if ( v9 > *a5 )
    {
LABEL_15:
      ValueKey = -1073741789;
      *a5 = Heap[2];
      goto LABEL_16;
    }
    *a5 = v9;
    if ( a4 )
      memcpy(a4, Heap + 3, v9);
    if ( a3 )
      *a3 = Heap[1];
LABEL_13:
    if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
      goto LABEL_16;
    goto LABEL_15;
  }
  ValueKey = -1073741811;
LABEL_16:
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return ValueKey;
}
