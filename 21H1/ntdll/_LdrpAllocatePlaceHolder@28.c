/*
 * XREFs of _LdrpAllocatePlaceHolder@28 @ 0x4B2D0889
 * Callers:
 *     _LdrpFindOrPrepareLoadingModule@28 @ 0x4B2D2238 (_LdrpFindOrPrepareLoadingModule@28.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpAllocateModuleEntry@4 @ 0x4B2D0962 (_LdrpAllocateModuleEntry@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall LdrpAllocatePlaceHolder(unsigned __int16 *a1, int a2, int a3, int a4, int a5, int *a6, int a7)
{
  int v8; // esi
  int Heap; // esi
  int ModuleEntry; // ecx

  v8 = (NtdllBaseTag + 0x40000) | 8;
  *a6 = 0;
  Heap = RtlAllocateHeap(LdrpHeap, v8, *a1 + 110);
  if ( Heap )
  {
    *(_DWORD *)(Heap + 100) = -1;
    *(_DWORD *)(Heap + 16) = a3 | 0x8000;
    *(_DWORD *)(Heap + 8) = a2;
    *(_DWORD *)(Heap + 24) = a7;
    *(_DWORD *)(Heap + 28) = a5;
    *(_DWORD *)(Heap + 4) = Heap + 108;
    *(_WORD *)Heap = *a1;
    *(_WORD *)(Heap + 2) = *a1 + 2;
    memcpy((void *)(Heap + 108), *((const void **)a1 + 1), *a1);
    *(_WORD *)(*(_DWORD *)(Heap + 4) + 2 * (*a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(Heap);
    *a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 148) = a4;
      LdrpLogDllState(0, Heap, 5292);
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, Heap);
    }
  }
  return *a6 != 0 ? 0 : -1073741801;
}
