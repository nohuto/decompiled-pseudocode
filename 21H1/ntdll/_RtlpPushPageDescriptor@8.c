/*
 * XREFs of _RtlpPushPageDescriptor@8 @ 0x4B35E9DA
 * Callers:
 *     _RtlpLeakCallbackRoutine@8 @ 0x4B35E8A0 (_RtlpLeakCallbackRoutine@8.c)
 *     _RtlpReadProcessHeaps@0 @ 0x4B35EAE4 (_RtlpReadProcessHeaps@0.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpGetBlockInfo@8 @ 0x4B35E70A (_RtlpGetBlockInfo@8.c)
 *     _RtlpSetBlockInfo@16 @ 0x4B35EDDC (_RtlpSetBlockInfo@16.c)
 */

char __fastcall RtlpPushPageDescriptor(int a1, int a2)
{
  const void *BlockInfo; // eax
  _DWORD *Heap; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  _DWORD *v11; // edx
  SIZE_T v12; // [esp-4h] [ebp-1Ch]
  size_t v13; // [esp-4h] [ebp-1Ch]

  BlockInfo = (const void *)RtlpGetBlockInfo((_DWORD *)RtlpProcessMemoryMap, a1 << 12);
  if ( BlockInfo )
  {
    DbgPrint("Conflicting descriptors %p\n", BlockInfo);
    return 0;
  }
  LODWORD(v12) = 20 * (RtlpLDNumBlocks - 1) + 32;
  Heap = RtlAllocateHeap(RtlpLeakHeap, 0, v12);
  if ( !Heap )
  {
    DbgPrint("Unable to allocate page descriptor\n");
    return 0;
  }
  v5 = RtlpLDNumBlocks;
  v6 = Heap + 3;
  v7 = RtlpCrtHeapAddress;
  Heap[2] = RtlpLDNumBlocks;
  *Heap = 2;
  Heap[1] = v7;
  LODWORD(v13) = 20 * v5;
  memcpy(Heap + 3, RtlpTempBlocks, v13);
  if ( v7 != RtlpLeakHeapAddress )
  {
    v8 = RtlpLDNumBlocks;
    v9 = 0;
    if ( RtlpLDNumBlocks > 0 )
    {
      v10 = RtlpPreviousStartAddress;
      do
      {
        v6[1] = v6;
        *v6 = v6;
        if ( v6[2] != v10 )
        {
          v11 = (_DWORD *)dword_4B3A47EC;
          if ( *(int **)dword_4B3A47EC != &RtlpLeakList )
            __fastfail(3u);
          *v6 = &RtlpLeakList;
          v6[1] = v11;
          *v11 = v6;
          dword_4B3A47EC = (int)v6;
          v10 = v6[2];
          v6[4] = 0;
          RtlpPreviousStartAddress = v10;
        }
        ++v9;
        v6 += 5;
      }
      while ( v9 < v8 );
    }
  }
  RtlpSetBlockInfo(a2 << 12, Heap);
  return 1;
}
