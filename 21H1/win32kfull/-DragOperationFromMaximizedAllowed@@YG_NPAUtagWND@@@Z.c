/*
 * XREFs of ?DragOperationFromMaximizedAllowed@@YG_NPAUtagWND@@@Z @ 0x1856D5
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z @ 0x1857B4 (-WindowArrangementApplicable@@YGHPAUtagWND@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?DragOperationFromMaximizedAllowed@@YG_NPAUtagWND@@@Z @ 0x1856D5
 * Reason: Hex-Rays returned no pseudocode for 0x1856D5
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001856D5: call    ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z; WindowArrangementApplicable(tagWND *)
 * 00000000001856DA: test    eax, eax
 * 00000000001856DC: jz      short loc_1856EE
 * 00000000001856DE: mov     eax, dword_26901C
 * 00000000001856E3: test    al, 1
 * 00000000001856E5: jz      short loc_1856EE
 * 00000000001856E7: test    al, 2
 * 00000000001856E9: jz      short loc_1856EE
 * 00000000001856EB: mov     al, 1
 * 00000000001856ED: retn
 * 00000000001856EE: xor     al, al
 * 00000000001856F0: retn
 */
