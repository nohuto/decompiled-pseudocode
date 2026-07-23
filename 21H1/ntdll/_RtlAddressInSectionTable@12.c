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

/*
 * Hex-Rays decompilation failed for _RtlAddressInSectionTable@12 @ 0x4B2B95F0
 * Reason: Hex-Rays returned no pseudocode for 0x4B2B95F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2B95F0: mov     edi, edi
 * 000000004B2B95F2: push    ebp; BaseOfImage
 * 000000004B2B95F3: mov     ebp, esp
 * 000000004B2B95F5: push    [ebp+VirtualAddress]; NtHeaders
 * 000000004B2B95F8: mov     ecx, [ebp+NtHeaders]
 * 000000004B2B95FB: call    _RtlSectionTableFromVirtualAddress@12; RtlSectionTableFromVirtualAddress(x,x,x)
 * 000000004B2B9600: mov     ecx, eax
 * 000000004B2B9602: test    ecx, ecx
 * 000000004B2B9604: jz      short loc_4B2B9616
 * 000000004B2B9606: mov     eax, [ecx+14h]
 * 000000004B2B9609: sub     eax, [ecx+0Ch]
 * 000000004B2B960C: add     eax, [ebp+BaseOfImage]
 * 000000004B2B960F: add     eax, [ebp+VirtualAddress]
 * 000000004B2B9612: pop     ebp
 * 000000004B2B9613: retn    0Ch
 * 000000004B2B9616: xor     eax, eax
 * 000000004B2B9618: jmp     short loc_4B2B9612
 */
