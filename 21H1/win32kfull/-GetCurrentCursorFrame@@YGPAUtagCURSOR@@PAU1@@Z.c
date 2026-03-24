/*
 * XREFs of ?GetCurrentCursorFrame@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748C4
 * Callers:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z @ 0x7523E (-GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?GetCurrentCursorFrame@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748C4
 * Reason: Hex-Rays returned no pseudocode for 0x748C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000748C4: mov     edi, edi
 * 00000000000748C6: push    ecx; struct tagACON *
 * 00000000000748C7: test    ecx, ecx
 * 00000000000748C9: jz      short loc_748D1
 * 00000000000748CB: test    byte ptr [ecx+2Ch], 8
 * 00000000000748CF: jnz     short loc_748D5
 * 00000000000748D1: mov     eax, ecx
 * 00000000000748D3: pop     ecx
 * 00000000000748D4: retn
 * 00000000000748D5: mov     edx, [ecx+44h]
 * 00000000000748D8: call    ?GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z; GetAnimatedCursorFrame(tagACON * const,int)
 * 00000000000748DD: mov     ecx, eax
 * 00000000000748DF: jmp     short loc_748D1
 */
