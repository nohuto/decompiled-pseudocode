/*
 * XREFs of ?MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1856F1
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z @ 0x1857B4 (-WindowArrangementApplicable@@YGHPAUtagWND@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1856F1
 * Reason: Hex-Rays returned no pseudocode for 0x1856F1
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001856F1: call    ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z; WindowArrangementApplicable(tagWND *)
 * 00000000001856F6: test    eax, eax
 * 00000000001856F8: jz      short loc_18570A
 * 00000000001856FA: mov     eax, dword_26901C
 * 00000000001856FF: test    al, 1
 * 0000000000185701: jz      short loc_18570A
 * 0000000000185703: test    al, 8
 * 0000000000185705: jz      short loc_18570A
 * 0000000000185707: mov     al, 1
 * 0000000000185709: retn
 * 000000000018570A: xor     al, al
 * 000000000018570C: retn
 */
