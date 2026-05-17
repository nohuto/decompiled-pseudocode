/*
 * XREFs of _RtlAddressInSectionTable@12 @ 0x4B2B95F0
 * Callers:
 *     _RtlpImageDirectoryEntryToData64@24 @ 0x4B2A7346 (_RtlpImageDirectoryEntryToData64@24.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PAXPAU_IMAGE_NT_HEADERS@@PAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x4B33E2CD (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SO.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PAXPAU_IMAGE_NT_HEADERS@@PAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x4B33E351 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YGJPAU_IMPORTTABLEP_IMPOR.c)
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 * Callees:
 *     _RtlSectionTableFromVirtualAddress@12 @ 0x4B2B9E97 (_RtlSectionTableFromVirtualAddress@12.c)
 */

int __stdcall RtlAddressInSectionTable(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = RtlSectionTableFromVirtualAddress(a3);
  if ( v3 )
    return a3 + a2 + *(_DWORD *)(v3 + 20) - *(_DWORD *)(v3 + 12);
  else
    return 0;
}
