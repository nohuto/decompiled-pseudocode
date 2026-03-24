/*
 * XREFs of ?SizeWithSnapAllowed@@YG_NPAUtagWND@@@Z @ 0x185784
 * Callers:
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z @ 0x1857B4 (-WindowArrangementApplicable@@YGHPAUtagWND@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?SizeWithSnapAllowed@@YG_NPAUtagWND@@@Z @ 0x185784
 * Reason: Hex-Rays returned no pseudocode for 0x185784
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000185784: call    ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z; WindowArrangementApplicable(tagWND *)
 * 0000000000185789: test    eax, eax
 * 000000000018578B: jz      short loc_18579D
 * 000000000018578D: mov     eax, dword_26901C
 * 0000000000185792: test    al, 1
 * 0000000000185794: jz      short loc_18579D
 * 0000000000185796: test    al, 4
 * 0000000000185798: jz      short loc_18579D
 * 000000000018579A: mov     al, 1
 * 000000000018579C: retn
 * 000000000018579D: xor     al, al
 * 000000000018579F: retn
 */
