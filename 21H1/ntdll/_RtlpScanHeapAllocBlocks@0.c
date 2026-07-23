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

char __fastcall RtlpScanHeapAllocBlocks(int a1, int *a2)
{
  int *v2; // esi
  int *v3; // eax
  unsigned int *v4; // ecx
  int *v5; // ebx
  unsigned int i; // eax
  int HeapBlock; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // edx
  _DWORD *v12; // eax
  bool v13; // zf
  unsigned int *v14; // edi
  int *v15; // edi
  int v16; // esi
  void *v17; // ebx
  int BlockInfo; // eax
  SIZE_T v19; // rax
  int *v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+10h] [ebp-4h]

  v2 = (int *)RtlpBusyList;
  while ( v2 != &RtlpBusyList )
  {
    v3 = v2 + 2;
    v4 = (unsigned int *)v2[2];
    v5 = v2;
    v2 = (int *)*v2;
    v21 = v3;
    for ( i = (unsigned int)v4 + v5[3]; ; i = *v21 + v5[3] )
    {
      v14 = v4 + 1;
      if ( (unsigned int)(v4 + 1) > i )
        break;
      HeapBlock = RtlpGetHeapBlock(*v4);
      v8 = (_DWORD *)HeapBlock;
      if ( HeapBlock )
      {
        v9 = *(_DWORD *)(HeapBlock + 16);
        if ( !v9 )
        {
          v10 = *v8;
          if ( *(_DWORD **)(*v8 + 4) != v8
            || (v11 = (_DWORD *)v8[1], (_DWORD *)*v11 != v8)
            || (*v11 = v10,
                *(_DWORD *)(v10 + 4) = v11,
                v12 = (_DWORD *)dword_4B3A47E4,
                *(int **)dword_4B3A47E4 != &RtlpBusyList) )
          {
            __fastfail(3u);
          }
          *v8 = &RtlpBusyList;
          v8[1] = v12;
          *v12 = v8;
          dword_4B3A47E4 = (int)v8;
          v9 = v8[4];
        }
        v13 = v8[2] == 0;
        v8[4] = v9 + 1;
        if ( v13 )
          __debugbreak();
      }
      a2 = v21;
      v4 = v14;
    }
  }
  v15 = (int *)RtlpLeakList;
  if ( (int *)RtlpLeakList != &RtlpLeakList )
  {
    v16 = RtlpLeaksCount;
    do
    {
      v17 = (void *)v15[2];
      BlockInfo = RtlpGetBlockInfo((_DWORD *)RtlpProcessMemoryMap, (unsigned int)v17);
      v22 = BlockInfo;
      if ( BlockInfo )
      {
        if ( dword_4B3A4898 )
        {
          v19 = RtlSizeHeap((PVOID)*(_DWORD *)(BlockInfo + 4), 0, v17);
          dword_4B3A4898(dword_4B3A4898, HIDWORD(v19), 0, *(_DWORD *)(v22 + 4), v15[2], v19, 0, 0);
        }
        else
        {
          if ( !v16 )
          {
            DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
            DbgPrint("Entry     Heap              Size       \n");
            DbgPrint("---------------------------------------\n");
            v17 = (void *)v15[2];
            BlockInfo = v22;
          }
          RtlpDumpEntryInfo(*(_DWORD **)(BlockInfo + 4), (unsigned __int8 *)v17);
        }
        v16 = ++RtlpLeaksCount;
      }
      v15 = (int *)*v15;
    }
    while ( v15 != &RtlpLeakList );
  }
  if ( dword_4B3A4898 )
    dword_4B3A4898(dword_4B3A4898, a2, 0, 0, 0, 0, 0, 0);
  return 1;
}
