/*
 * XREFs of _RtlpGetHeapBlock@4 @ 0x4B35E746
 * Callers:
 *     _RtlpScanHeapAllocBlocks@0 @ 0x4B35EB37 (_RtlpScanHeapAllocBlocks@0.c)
 *     _RtlpScanProcessVirtualMemory@0 @ 0x4B35ECB4 (_RtlpScanProcessVirtualMemory@0.c)
 * Callees:
 *     _RtlpGetBlockInfo@8 @ 0x4B35E70A (_RtlpGetBlockInfo@8.c)
 */

int __fastcall RtlpGetHeapBlock(unsigned int a1)
{
  int BlockInfo; // ecx
  int v3; // edi
  _DWORD *v4; // ebx
  unsigned int v5; // edx

LABEL_1:
  BlockInfo = RtlpGetBlockInfo((_DWORD *)RtlpProcessMemoryMap, a1);
  if ( BlockInfo && *(_DWORD *)(BlockInfo + 4) != RtlpLeakHeapAddress )
  {
    v3 = 0;
    v4 = (_DWORD *)(BlockInfo + 24);
    while ( v3 < *(_DWORD *)(BlockInfo + 8) )
    {
      v5 = *(v4 - 1);
      if ( v5 <= a1 && v5 + *v4 > a1 )
      {
        if ( v5 != a1 )
        {
          a1 = *(v4 - 1);
          goto LABEL_1;
        }
        return BlockInfo + 20 * v3 + 12;
      }
      ++v3;
      v4 += 5;
    }
  }
  return 0;
}
