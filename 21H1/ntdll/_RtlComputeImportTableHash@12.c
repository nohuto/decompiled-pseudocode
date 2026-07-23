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

NTSTATUS __cdecl RtlComputeImportTableHash(HANDLE FileHandle, PCHAR Hash, ULONG ImportTableHashRevision)
{
  NTSTATUS v3; // esi
  NTSTATUS v4; // eax
  NTSTATUS v5; // esi
  NTSTATUS v6; // eax
  ULONG *v7; // edi
  PIMAGE_NT_HEADERS v8; // ebx
  _DWORD *Heap; // esi
  PVOID v10; // eax
  int inserted; // eax
  SIZE_T v13; // [esp-14h] [ebp-44h]
  SIZE_T v14; // [esp-4h] [ebp-34h]
  ULONG v15; // [esp+4h] [ebp-2Ch]
  SIZE_T CommitSize; // [esp+Ch] [ebp-24h] BYREF
  int v17; // [esp+14h] [ebp-1Ch] BYREF
  PVOID v18; // [esp+18h] [ebp-18h]
  int v19; // [esp+1Ch] [ebp-14h] BYREF
  int v20; // [esp+20h] [ebp-10h] BYREF
  PVOID v21; // [esp+24h] [ebp-Ch] BYREF
  HANDLE SectionHandle; // [esp+28h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+2Ch] [ebp-4h] BYREF

  SectionHandle = (HANDLE)-1;
  v21 = 0;
  BaseAddress = 0;
  v20 = 0;
  if ( ImportTableHashRevision == 1 )
  {
    v4 = NtCreateSection(&SectionHandle, 0xF0005u, 0, 0, 2u, 0x8000000u, FileHandle);
    if ( SectionHandle == (HANDLE)-1 || v4 < 0 )
    {
      v3 = -1073741816;
      goto LABEL_28;
    }
    CommitSize = 0LL;
    HIDWORD(v13) = &v19;
    LODWORD(v13) = &CommitSize;
    v19 = 0;
    v5 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFF,
           &BaseAddress,
           0LL,
           v13,
           (PLARGE_INTEGER)1,
           0,
           ViewUnmap,
           HIDWORD(v14),
           v15);
    NtClose(SectionHandle);
    if ( !BaseAddress || v5 < 0 )
    {
      v3 = -1073741799;
      goto LABEL_28;
    }
    v6 = RtlpImageDirectoryEntryToDataEx((unsigned int)BaseAddress, 0, 1u, (unsigned int *)&v17, &v20);
    if ( v6 >= 0 )
    {
      v7 = (ULONG *)v20;
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
    v8 = RtlImageNtHeader(BaseAddress);
    if ( v7 )
    {
      while ( v7[3] && v7[4] )
      {
        v18 = RtlAddressInSectionTable(v8, BaseAddress, v7[3]);
        if ( !v18 )
        {
          v3 = -1073741685;
          goto LABEL_28;
        }
        LODWORD(v14) = 12;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
        if ( !Heap )
        {
          v3 = -1073741801;
          goto LABEL_28;
        }
        v10 = v18;
        Heap[2] = 0;
        *Heap = 0;
        Heap[1] = v10;
        ImportTablepInsertModuleSorted((int)Heap, (int ***)&v21);
        if ( v8->OptionalHeader.Magic == 267 )
          inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>((int)Heap, BaseAddress, v8, v7);
        else
          inserted = InsertModuleFunctions<_IMAGE_THUNK_DATA64,unsigned __int64,-9223372036854775808>(
                       (int)Heap,
                       BaseAddress,
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
    v3 = ImportTablepHashCanonicalLists((int **)v21, Hash);
  }
  else
  {
    v3 = -1073741736;
  }
LABEL_28:
  ImportTablepFreeModuleSorted(v21);
  if ( BaseAddress )
  {
    if ( NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress) == -1073741755 )
    {
      LODWORD(v14) = 0;
      if ( RtlFlushSecureMemoryCache(BaseAddress, v14) )
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
    }
  }
  return v3;
}
