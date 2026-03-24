/*
 * XREFs of ?WindowArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1857A0
 * Callers:
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z @ 0x1857B4 (-WindowArrangementApplicable@@YGHPAUtagWND@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?WindowArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1857A0
 * Reason: Hex-Rays returned no pseudocode for 0x1857A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001857A0: call    ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z; WindowArrangementApplicable(tagWND *)
 * 00000000001857A5: test    eax, eax
 * 00000000001857A7: jnz     short loc_1857AC
 * 00000000001857A9: xor     al, al
 * 00000000001857AB: retn
 * 00000000001857AC: mov     al, byte ptr dword_26901C
 * 00000000001857B1: and     al, 1
 * 00000000001857B3: retn
 */
