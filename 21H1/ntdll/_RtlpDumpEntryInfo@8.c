/*
 * XREFs of _RtlpDumpEntryInfo@8 @ 0x4B35E6BD
 * Callers:
 *     _RtlpScanHeapAllocBlocks@0 @ 0x4B35EB37 (_RtlpScanHeapAllocBlocks@0.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 */

int __fastcall RtlpDumpEntryInfo(_DWORD *HeapHandle, unsigned __int8 *BaseAddress)
{
  unsigned __int8 *v3; // esi
  int v4; // eax

  if ( HeapHandle[2] == -571548178 )
  {
    v3 = BaseAddress;
  }
  else
  {
    v3 = BaseAddress - 8;
    if ( *(BaseAddress - 1) == 5 )
      v3 -= 8 * v3[6];
  }
  v4 = RtlSizeHeap(HeapHandle, 0, BaseAddress);
  DbgPrint("%p  %-16Ix  %Id", v3, HeapHandle, v4);
  return DbgPrint("\n");
}
