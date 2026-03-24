/*
 * XREFs of _MNClearCachedPopupSizes@4 @ 0x1AB7D1
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxMenuBarCompute@20 @ 0xB6974 (_xxxMenuBarCompute@20.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _MNRefreshUAHCachedSizes@4 @ 0x1AB841 (_MNRefreshUAHCachedSizes@4.c)
 */

/*
 * Hex-Rays decompilation failed for _MNClearCachedPopupSizes@4 @ 0x1AB7D1
 * Reason: Hex-Rays returned no pseudocode for 0x1AB7D1
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001AB7D1: mov     edi, edi
 * 00000000001AB7D3: push    ebp
 * 00000000001AB7D4: mov     ebp, esp
 * 00000000001AB7D6: push    ecx
 * 00000000001AB7D7: push    esi
 * 00000000001AB7D8: mov     esi, ecx
 * 00000000001AB7DA: xor     ecx, ecx
 * 00000000001AB7DC: mov     [ebp+var_4], ecx
 * 00000000001AB7DF: mov     eax, [esi+14h]
 * 00000000001AB7E2: mov     [esi+24h], ecx
 * 00000000001AB7E5: mov     [esi+28h], ecx
 * 00000000001AB7E8: cmp     [eax+18h], ecx
 * 00000000001AB7EB: jbe     short loc_1AB837
 * 00000000001AB7ED: push    ebx
 * 00000000001AB7EE: push    edi
 * 00000000001AB7EF: mov     ebx, ecx
 * 00000000001AB7F1: mov     eax, [esi+38h]
 * 00000000001AB7F4: push    8
 * 00000000001AB7F6: mov     eax, [ebx+eax]
 * 00000000001AB7F9: mov     dword ptr [eax+38h], 7FFFFFFFh
 * 00000000001AB800: mov     eax, [esi+38h]
 * 00000000001AB803: mov     eax, [ebx+eax]
 * 00000000001AB806: mov     [eax+3Ch], ecx
 * 00000000001AB809: mov     eax, [esi+38h]
 * 00000000001AB80C: pop     ecx
 * 00000000001AB80D: push    0
 * 00000000001AB80F: mov     eax, [ebx+eax]
 * 00000000001AB812: or      dword ptr [eax+44h], 0FFFFFFFFh
 * 00000000001AB816: xor     eax, eax
 * 00000000001AB818: mov     edi, [esi+38h]
 * 00000000001AB81B: add     edi, 24h ; '$'
 * 00000000001AB81E: add     edi, ebx
 * 00000000001AB820: add     ebx, 50h ; 'P'
 * 00000000001AB823: rep stosd
 * 00000000001AB825: mov     ecx, [ebp+var_4]
 * 00000000001AB828: mov     eax, [esi+14h]
 * 00000000001AB82B: inc     ecx
 * 00000000001AB82C: mov     [ebp+var_4], ecx
 * 00000000001AB82F: cmp     ecx, [eax+18h]
 * 00000000001AB832: pop     ecx
 * 00000000001AB833: jb      short loc_1AB7F1
 * 00000000001AB835: pop     edi
 * 00000000001AB836: pop     ebx
 * 00000000001AB837: mov     ecx, esi
 * 00000000001AB839: call    _MNRefreshUAHCachedSizes@4; MNRefreshUAHCachedSizes(x)
 * 00000000001AB83E: pop     esi
 * 00000000001AB83F: leave
 * 00000000001AB840: retn
 */
