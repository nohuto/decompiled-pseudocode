/*
 * XREFs of _RtlComputeImportTableHash@12 @ 0x4B33E550
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PAXPAU_IMAGE_NT_HEADERS@@PAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x4B33E2CD (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SO.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PAXPAU_IMAGE_NT_HEADERS@@PAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x4B33E351 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPOR.c)
 *     _ImportTablepFreeModuleSorted@4 @ 0x4B33E3E2 (_ImportTablepFreeModuleSorted@4.c)
 *     _ImportTablepHashCanonicalLists@8 @ 0x4B33E432 (_ImportTablepHashCanonicalLists@8.c)
 *     _ImportTablepInsertModuleSorted@8 @ 0x4B33E4EE (_ImportTablepInsertModuleSorted@8.c)
 *     _RtlFlushSecureMemoryCache@8 @ 0x4B35E4D0 (_RtlFlushSecureMemoryCache@8.c)
 */

int __stdcall RtlComputeImportTableHash(int a1, _DWORD *a2, int a3)
{
  int v3; // esi
  int Section; // eax
  int v5; // esi
  int v6; // eax
  int *v7; // edi
  int v8; // ebx
  _DWORD *Heap; // esi
  int v10; // eax
  int inserted; // eax
  _DWORD v13[2]; // [esp+Ch] [ebp-24h] BYREF
  int v14; // [esp+14h] [ebp-1Ch] BYREF
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h] BYREF
  int *v17; // [esp+20h] [ebp-10h] BYREF
  int **v18; // [esp+24h] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+28h] [ebp-8h] BYREF
  unsigned int v20; // [esp+2Ch] [ebp-4h] BYREF

  Handle = (HANDLE)-1;
  v18 = 0;
  v20 = 0;
  v17 = 0;
  if ( a3 == 1 )
  {
    Section = NtCreateSection((int)&Handle, 983045, 0, 0, 2, 0x8000000, a1);
    if ( Handle == (HANDLE)-1 || Section < 0 )
    {
      v3 = -1073741816;
      goto LABEL_28;
    }
    v13[0] = 0;
    v13[1] = 0;
    v16 = 0;
    v5 = ZwMapViewOfSection((int)Handle, -1, (int)&v20, 0, 0, (int)v13, (int)&v16, 1, 0, 2);
    NtClose(Handle);
    if ( !v20 || v5 < 0 )
    {
      v3 = -1073741799;
      goto LABEL_28;
    }
    v6 = RtlpImageDirectoryEntryToDataEx(v20, 0, 1u, &v14, (int *)&v17);
    if ( v6 >= 0 )
    {
      v7 = v17;
    }
    else
    {
      if ( v6 != -1073741822 )
      {
        v3 = -1073741687;
        goto LABEL_28;
      }
      v7 = 0;
    }
    v8 = RtlImageNtHeader(v20);
    if ( v7 )
    {
      while ( v7[3] && v7[4] )
      {
        v15 = RtlAddressInSectionTable(v8, v20, v7[3]);
        if ( !v15 )
        {
          v3 = -1073741685;
          goto LABEL_28;
        }
        Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 12);
        if ( !Heap )
        {
          v3 = -1073741801;
          goto LABEL_28;
        }
        v10 = v15;
        Heap[2] = 0;
        *Heap = 0;
        Heap[1] = v10;
        ImportTablepInsertModuleSorted((int)Heap, &v18);
        if ( *(_WORD *)(v8 + 24) == 267 )
          inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>((int)Heap, v20, v8, v7);
        else
          inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(
                       (int)Heap,
                       v20,
                       v8,
                       v7);
        v3 = inserted;
        if ( inserted < 0 )
          goto LABEL_28;
        v7 += 5;
        if ( !v7 )
          break;
      }
    }
    v3 = ImportTablepHashCanonicalLists(v18, a2);
  }
  else
  {
    v3 = -1073741736;
  }
LABEL_28:
  ImportTablepFreeModuleSorted(v18);
  if ( v20 && NtUnmapViewOfSection(-1, v20) == -1073741755 && (unsigned __int8)RtlFlushSecureMemoryCache(v20, 0) )
    NtUnmapViewOfSection(-1, v20);
  return v3;
}
