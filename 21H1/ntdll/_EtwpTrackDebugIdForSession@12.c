/*
 * XREFs of _EtwpTrackDebugIdForSession@12 @ 0x4B2F1EA8
 * Callers:
 *     _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF (_EtwpProviderArrivalCallback@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ULongAdd@12 @ 0x4B2E454E (_ULongAdd@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

int __fastcall EtwpTrackDebugIdForSession(int a1, void *a2, int Size)
{
  _DWORD *v3; // edi
  _DWORD *i; // esi
  _DWORD *Heap; // esi
  int v6; // eax
  void *v8; // [esp-8h] [ebp-20h]
  SIZE_T v9; // [esp-4h] [ebp-1Ch]
  SIZE_T v10; // [esp-4h] [ebp-1Ch]
  size_t v11; // [esp-4h] [ebp-1Ch]
  ULONG *v12; // [esp+4h] [ebp-14h]
  ULONG ulAugend; // [esp+10h] [ebp-8h] BYREF
  void *Src; // [esp+14h] [ebp-4h]

  Src = a2;
  v3 = (_DWORD *)(a1 + 332);
  for ( i = *(_DWORD **)(a1 + 332); i != v3; i = (_DWORD *)*i )
  {
    if ( i[3] == Size )
    {
      LODWORD(v9) = Size;
      if ( (unsigned int)RtlCompareMemory(i + 4, a2, v9) == Size )
        return 183;
      a2 = Src;
    }
  }
  if ( ULongAdd((ULONG)&ulAugend, HIDWORD(v9), v12) < 0 )
    return 534;
  LODWORD(v10) = ulAugend;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
  if ( !Heap )
    return 14;
  LODWORD(v11) = Size;
  v8 = Src;
  Heap[3] = Size;
  memcpy(Heap + 4, v8, v11);
  v6 = *v3;
  if ( *(_DWORD **)(*v3 + 4) != v3 )
    __fastfail(3u);
  *Heap = v6;
  Heap[1] = v3;
  *(_DWORD *)(v6 + 4) = Heap;
  *v3 = Heap;
  *(_DWORD *)(a1 + 220) |= 0x10u;
  return 0;
}
