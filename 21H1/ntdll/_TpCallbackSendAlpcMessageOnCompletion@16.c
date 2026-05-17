/*
 * XREFs of _TpCallbackSendAlpcMessageOnCompletion@16 @ 0x4B2A72A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpCallbackSendAlpcMessageOnCompletion(int a1, int a2, int a3, unsigned __int16 *Src)
{
  int v4; // eax
  void *Heap; // eax
  size_t Size; // [esp+Ch] [ebp-4h]

  if ( !a1 || (v4 = *(_DWORD *)(a1 + 76)) == 0 || *(_DWORD *)(v4 + 168) != a2 || (*(_BYTE *)(a1 + 132) & 1) != 0 )
    TppRaiseInvalidParameter();
  Size = Src[1];
  Heap = (void *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, Size);
  *(_DWORD *)(a1 + 120) = Heap;
  if ( !Heap )
    return -1073741801;
  memcpy(Heap, Src, Size);
  *(_DWORD *)(a1 + 124) = a2;
  _InterlockedIncrement((volatile signed __int32 *)(*(_DWORD *)(a1 + 76) + 172));
  *(_DWORD *)(a1 + 132) |= 1u;
  *(_DWORD *)(a1 + 128) = a3 | 0x40000;
  return 0;
}
