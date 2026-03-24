/*
 * XREFs of ?ForceHidePenCursor@Feedback@@YGXH@Z @ 0x148792
 * Callers:
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1AF830 (-DoHideInkCursorStart@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1AF898 (-DoHideInkCursorStop@HideInkCursorProvider@@AAEJPBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 * Callees:
 *     ?SwitchMouseCursors@@YGXK_N@Z @ 0x148BA8 (-SwitchMouseCursors@@YGXK_N@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?ForceHidePenCursor@Feedback@@YGXH@Z @ 0x148792
 * Reason: Hex-Rays returned no pseudocode for 0x148792
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000148792: mov     edi, edi
 * 0000000000148794: push    ecx; unsigned int
 * 0000000000148795: cmp     ecx, ?gfForceHidePenCursor@Feedback@@3HA; int Feedback::gfForceHidePenCursor
 * 000000000014879B: jz      short loc_1487B6
 * 000000000014879D: cmp     ?gfUsingPenCursors@Feedback@@3HA, 0; int Feedback::gfUsingPenCursors
 * 00000000001487A4: mov     ?gfForceHidePenCursor@Feedback@@3HA, ecx; int Feedback::gfForceHidePenCursor
 * 00000000001487AA: jz      short loc_1487B6
 * 00000000001487AC: push    3
 * 00000000001487AE: xor     dl, dl
 * 00000000001487B0: pop     ecx
 * 00000000001487B1: call    ?SwitchMouseCursors@@YGXK_N@Z; SwitchMouseCursors(ulong,bool)
 * 00000000001487B6: pop     ecx
 * 00000000001487B7: retn
 */
