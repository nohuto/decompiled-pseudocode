/*
 * XREFs of ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PAXPAU_IMAGE_NT_HEADERS@@PAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x4B33E2CD
 * Callers:
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 * Callees:
 *     _RtlAddressInSectionTable@12 @ 0x4B2B95F0 (_RtlAddressInSectionTable@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ImportTablepInsertModuleSorted@8 @ 0x4B33E4EE (_ImportTablepInsertModuleSorted@8.c)
 */

int __fastcall InsertModuleFunctions<_IMAGE_THUNK_DATA32,unsigned long,2147483648>(int a1, int a2, int a3, int *a4)
{
  int *v5; // esi
  int v6; // eax
  int v7; // edi
  _DWORD *Heap; // eax

  v5 = (int *)RtlAddressInSectionTable(a3, a2, *a4);
  if ( v5 )
  {
    while ( *v5 )
    {
      if ( *v5 >= 0 )
      {
        v6 = RtlAddressInSectionTable(a3, a2, *v5);
        if ( !v6 )
          return -1073741685;
        v7 = v6 + 2;
        if ( v6 == -2 )
          return -1073741685;
        Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 8);
        if ( !Heap )
          return -1073741801;
        *Heap = 0;
        Heap[1] = v7;
        ImportTablepInsertModuleSorted(Heap, a1 + 8);
      }
      if ( !++v5 )
        return 0;
    }
  }
  return 0;
}
