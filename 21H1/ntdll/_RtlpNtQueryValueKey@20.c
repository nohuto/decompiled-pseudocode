/*
 * XREFs of _RtlpNtQueryValueKey@20 @ 0x4B36D280
 * Callers:
 *     _RtlInitializeRXact@12 @ 0x4B345820 (_RtlInitializeRXact@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlpNtQueryValueKey(int a1, _DWORD *a2, void *a3, int *a4, int a5)
{
  int v5; // eax
  _DWORD *Heap; // esi
  int ValueKey; // edi
  _WORD v9[4]; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-4h] BYREF

  v5 = 0;
  if ( a4 )
    v5 = *a4;
  v10 = v5 + 12;
  Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5 + 12);
  if ( !Heap )
    return -1073741670;
  v9[0] = 0;
  ValueKey = ZwQueryValueKey(a1, (int)v9, 2, (int)Heap, v10, (int)&v10);
  if ( ValueKey == -1073741772 )
  {
    ValueKey = 0;
    Heap[2] = 0;
    Heap[1] = 0;
  }
  if ( ValueKey >= 0 || ValueKey == -2147483643 )
  {
    if ( a4 )
      *a4 = Heap[2];
    if ( a2 )
      *a2 = Heap[1];
  }
  if ( ValueKey >= 0 )
  {
    if ( a3 )
      memcpy(a3, Heap + 3, Heap[2]);
  }
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return ValueKey;
}
