/*
 * XREFs of _RtlpAddHeapToUnprotectedList@4 @ 0x4B2E663D
 * Callers:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 *     _RtlpMoveHeapBetweenLists@16 @ 0x4B2A914A (_RtlpMoveHeapBetweenLists@16.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

void __thiscall RtlpAddHeapToUnprotectedList(int this)
{
  struct _PEB *v1; // esi
  unsigned int NumberOfHeaps; // ecx
  unsigned int v4; // ebx
  unsigned int MaximumNumberOfHeaps; // eax
  __int16 v6; // ax
  int v7; // eax
  void **Heap; // ecx
  SIZE_T v9; // [esp-4h] [ebp-14h]
  size_t v10; // [esp-4h] [ebp-14h]
  void **v11; // [esp+Ch] [ebp-4h]

  v1 = NtCurrentPeb();
  NumberOfHeaps = v1->NumberOfHeaps;
  v4 = NumberOfHeaps + (unsigned __int16)RtlpNumberOfProtectedHeaps;
  if ( v4 < 0xFFFE )
  {
    MaximumNumberOfHeaps = v1->MaximumNumberOfHeaps;
    if ( v4 == MaximumNumberOfHeaps )
    {
      v7 = 2 * MaximumNumberOfHeaps;
      v1->MaximumNumberOfHeaps = v7;
      LODWORD(v9) = 4 * v7;
      Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      v11 = Heap;
      if ( !Heap )
      {
        v1->MaximumNumberOfHeaps = v4;
        return;
      }
      LODWORD(v10) = 4 * v1->NumberOfHeaps;
      memcpy(Heap, v1->ProcessHeaps, v10);
      if ( (_UNKNOWN *)v1->ProcessHeaps != &RtlpProcessHeapsListBuffer )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1->ProcessHeaps);
      NumberOfHeaps = v1->NumberOfHeaps;
      v1->ProcessHeaps = v11;
    }
    v1->ProcessHeaps[NumberOfHeaps] = (void *)this;
    ++v1->NumberOfHeaps;
    v6 = v1->NumberOfHeaps;
    if ( *(_DWORD *)(this + 8) == -571548178 )
      *(_WORD *)(this + 20) = v6;
    else
      *(_WORD *)(this + 124) = v6;
  }
}
