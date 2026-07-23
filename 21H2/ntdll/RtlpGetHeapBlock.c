/*
 * XREFs of RtlpGetHeapBlock @ 0x1800F7F18
 * Callers:
 *     RtlpScanHeapAllocBlocks @ 0x1800F846C (RtlpScanHeapAllocBlocks.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F86B0 (RtlpScanProcessVirtualMemory.c)
 * Callees:
 *     RtlpGetBlockInfo @ 0x1800F7ECC (RtlpGetBlockInfo.c)
 */

__int64 __fastcall RtlpGetHeapBlock(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 BlockInfo; // rax
  unsigned __int64 v4; // r10
  _QWORD *v5; // r8
  int v6; // r11d
  __int64 i; // rbx
  unsigned __int64 v8; // rdx

  v1 = RtlpLeakHeapAddress;
LABEL_2:
  BlockInfo = RtlpGetBlockInfo((_QWORD *)RtlpProcessMemoryMap, a1);
  if ( BlockInfo && *(_QWORD *)(BlockInfo + 8) != v1 )
  {
    v5 = (_QWORD *)(BlockInfo + 48);
    v6 = 0;
    for ( i = 0LL; i < *(int *)(BlockInfo + 16); ++i )
    {
      v8 = *(v5 - 1);
      if ( v8 <= v4 && v8 + *v5 > v4 )
      {
        if ( v8 != v4 )
        {
          a1 = *(v5 - 1);
          goto LABEL_2;
        }
        return BlockInfo + 8 * (5LL * v6 + 3);
      }
      ++v6;
      v5 += 5;
    }
  }
  return 0LL;
}
