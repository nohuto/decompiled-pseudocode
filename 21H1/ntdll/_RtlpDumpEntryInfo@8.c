/*
 * XREFs of _RtlpDumpEntryInfo@8 @ 0x4B35E6BD
 * Callers:
 *     _RtlpScanHeapAllocBlocks@0 @ 0x4B35EB37 (_RtlpScanHeapAllocBlocks@0.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 */

int __fastcall RtlpDumpEntryInfo(int a1, int a2)
{
  unsigned __int8 *v3; // esi
  int v4; // eax

  if ( *(_DWORD *)(a1 + 8) == -571548178 )
  {
    v3 = (unsigned __int8 *)a2;
  }
  else
  {
    v3 = (unsigned __int8 *)(a2 - 8);
    if ( *(_BYTE *)(a2 - 8 + 7) == 5 )
      v3 -= 8 * v3[6];
  }
  v4 = RtlSizeHeap(a1, 0, a2);
  DbgPrint("%p  %-16Ix  %Id", v3, a1, v4);
  return DbgPrint("\n");
}
