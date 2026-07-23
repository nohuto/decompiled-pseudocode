/*
 * XREFs of _StringCbPrintfW @ 0x4B334D60
 * Callers:
 *     _LdrpReportError@12 @ 0x4B2E9F63 (_LdrpReportError@12.c)
 *     _EtwpGenerateFileName@12 @ 0x4B382A61 (_EtwpGenerateFileName@12.c)
 *     _RtlpGetVolumeHandle@8 @ 0x4B389B86 (_RtlpGetVolumeHandle@8.c)
 *     _RtlpQueryDiskSpacePolicy@8 @ 0x4B389C18 (_RtlpQueryDiskSpacePolicy@8.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x4B334D98 (StringVPrintfWorkerW.c)
 */

/*
 * Hex-Rays decompilation failed for _StringCbPrintfW @ 0x4B334D60
 * Reason: Hex-Rays returned no pseudocode for 0x4B334D60
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B334D60: mov     edi, edi
 * 000000004B334D62: push    ebp; pcchNewDestLength
 * 000000004B334D63: mov     ebp, esp
 * 000000004B334D65: mov     eax, dword ptr [ebp+cbDest]
 * 000000004B334D68: shr     eax, 1
 * 000000004B334D6A: mov     ecx, eax
 * 000000004B334D6C: neg     ecx
 * 000000004B334D6E: sbb     ecx, ecx
 * 000000004B334D70: and     ecx, 7FF8FFA9h
 * 000000004B334D76: add     ecx, 80070057h
 * 000000004B334D7C: test    eax, eax
 * 000000004B334D7E: jz      short loc_4B334D94
 * 000000004B334D80: lea     ecx, [ebp+pszFormat]
 * 000000004B334D83: mov     edx, eax
 * 000000004B334D85: push    ecx
 * 000000004B334D86: push    dword ptr [ebp+cbDest+4]; cchDest
 * 000000004B334D89: push    ecx; pszDest
 * 000000004B334D8A: mov     ecx, [ebp+pszDest]
 * 000000004B334D8D: call    StringVPrintfWorkerW
 * 000000004B334D92: mov     ecx, eax
 * 000000004B334D94: mov     eax, ecx
 * 000000004B334D96: pop     ebp
 * 000000004B334D97: retn
 */
