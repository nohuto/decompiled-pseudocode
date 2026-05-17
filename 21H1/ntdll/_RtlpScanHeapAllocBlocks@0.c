/*
 * XREFs of _RtlpScanHeapAllocBlocks@0 @ 0x4B35EB37
 * Callers:
 *     _RtlpScanProcessVirtualMemory@0 @ 0x4B35ECB4 (_RtlpScanProcessVirtualMemory@0.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpDumpEntryInfo@8 @ 0x4B35E6BD (_RtlpDumpEntryInfo@8.c)
 *     _RtlpGetBlockInfo@8 @ 0x4B35E70A (_RtlpGetBlockInfo@8.c)
 *     _RtlpGetHeapBlock@4 @ 0x4B35E746 (_RtlpGetHeapBlock@4.c)
 */

char __stdcall RtlpScanHeapAllocBlocks()
{
  int *v0; // esi
  int *v1; // eax
  unsigned int *v2; // ecx
  int *v3; // ebx
  unsigned int i; // eax
  int HeapBlock; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edx
  _DWORD *v10; // eax
  bool v11; // zf
  unsigned int *v12; // edi
  int *v13; // edi
  int v14; // esi
  unsigned int v15; // ebx
  int BlockInfo; // eax
  int v17; // eax
  int *v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+10h] [ebp-4h]

  v0 = (int *)RtlpBusyList;
  while ( v0 != &RtlpBusyList )
  {
    v1 = v0 + 2;
    v2 = (unsigned int *)v0[2];
    v3 = v0;
    v0 = (int *)*v0;
    v19 = v1;
    for ( i = (unsigned int)v2 + v3[3]; ; i = *v19 + v3[3] )
    {
      v12 = v2 + 1;
      if ( (unsigned int)(v2 + 1) > i )
        break;
      HeapBlock = RtlpGetHeapBlock(*v2);
      v6 = (_DWORD *)HeapBlock;
      if ( HeapBlock )
      {
        v7 = *(_DWORD *)(HeapBlock + 16);
        if ( !v7 )
        {
          v8 = *v6;
          if ( *(_DWORD **)(*v6 + 4) != v6
            || (v9 = (_DWORD *)v6[1], (_DWORD *)*v9 != v6)
            || (*v9 = v8,
                *(_DWORD *)(v8 + 4) = v9,
                v10 = (_DWORD *)dword_4B3A47E4,
                *(int **)dword_4B3A47E4 != &RtlpBusyList) )
          {
            __fastfail(3u);
          }
          *v6 = &RtlpBusyList;
          v6[1] = v10;
          *v10 = v6;
          dword_4B3A47E4 = (int)v6;
          v7 = v6[4];
        }
        v11 = v6[2] == 0;
        v6[4] = v7 + 1;
        if ( v11 )
          __debugbreak();
      }
      v2 = v12;
    }
  }
  v13 = (int *)RtlpLeakList;
  if ( (int *)RtlpLeakList != &RtlpLeakList )
  {
    v14 = RtlpLeaksCount;
    do
    {
      v15 = v13[2];
      BlockInfo = RtlpGetBlockInfo((_DWORD *)RtlpProcessMemoryMap, v15);
      v20 = BlockInfo;
      if ( BlockInfo )
      {
        if ( dword_4B3A4898 )
        {
          v17 = RtlSizeHeap(*(_DWORD *)(BlockInfo + 4), 0, v15);
          dword_4B3A4898(dword_4B3A4898, 0, *(_DWORD *)(v20 + 4), v13[2], v17, 0, 0);
        }
        else
        {
          if ( !v14 )
          {
            DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
            DbgPrint("Entry     Heap              Size       \n");
            DbgPrint("---------------------------------------\n");
            v15 = v13[2];
            BlockInfo = v20;
          }
          RtlpDumpEntryInfo(*(_DWORD *)(BlockInfo + 4), v15);
        }
        v14 = ++RtlpLeaksCount;
      }
      v13 = (int *)*v13;
    }
    while ( v13 != &RtlpLeakList );
  }
  if ( dword_4B3A4898 )
    dword_4B3A4898(dword_4B3A4898, 0, 0, 0, 0, 0, 0);
  return 1;
}
