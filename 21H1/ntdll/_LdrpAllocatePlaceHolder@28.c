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
  ULONG v8; // esi
  _DWORD *Heap; // esi
  int ModuleEntry; // ecx
  SIZE_T v12; // [esp-4h] [ebp-18h]
  size_t v13; // [esp-4h] [ebp-18h]

  v8 = (NtdllBaseTag + 0x40000) | 8;
  *a6 = 0;
  LODWORD(v12) = *a1 + 110;
  Heap = RtlAllocateHeap(LdrpHeap, v8, v12);
  if ( Heap )
  {
    Heap[25] = -1;
    Heap[4] = a3 | 0x8000;
    Heap[2] = a2;
    Heap[6] = a7;
    Heap[7] = a5;
    Heap[1] = Heap + 27;
    *(_WORD *)Heap = *a1;
    *((_WORD *)Heap + 1) = *a1 + 2;
    LODWORD(v13) = *a1;
    memcpy(Heap + 27, *((const void **)a1 + 1), v13);
    *(_WORD *)(Heap[1] + 2 * (*a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(Heap);
    *a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 148) = a4;
      LdrpLogDllState(0, (int)Heap, 5292);
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, Heap);
    }
  }
  return *a6 != 0 ? 0 : -1073741801;
}
