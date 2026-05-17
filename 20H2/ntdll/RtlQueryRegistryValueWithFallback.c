/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1800EE8E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x18009D390 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall RtlQueryRegistryValueWithFallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        void *a6,
        _DWORD *a7)
{
  _DWORD *Heap; // rdi
  int ValueKey; // ebx

  if ( !a1 && !a2 )
    return 3221225485LL;
  if ( a4 >= 0xFFFFFFF0 )
    return (unsigned int)-1073741675;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a4 + 16);
  if ( Heap )
  {
    ValueKey = -1073741772;
    if ( !a1 || (ValueKey = NtQueryValueKey(), ValueKey == -1073741772) )
    {
      if ( !a2 )
      {
LABEL_17:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
        return (unsigned int)ValueKey;
      }
      ValueKey = NtQueryValueKey();
    }
    if ( (int)(ValueKey + 0x80000000) < 0 || ValueKey == -2147483643 )
    {
      *a7 = Heap[2];
      if ( a5 )
        *a5 = Heap[1];
      if ( ValueKey >= 0 )
        memmove(a6, Heap + 3, (unsigned int)Heap[2]);
    }
    goto LABEL_17;
  }
  return (unsigned int)-1073741801;
}
