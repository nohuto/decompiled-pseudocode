/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1403F7F50
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1403F7F10 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1403F7F50
 * Reason: Hex-Rays returned no pseudocode for 0x1403F7F50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F7F50: test    dword ptr [rbp+0F8h], 200h
 * 00000001403F7F5A: jz      short loc_1403F7F5D
 * 00000001403F7F5C: sti
 * 00000001403F7F5D: call    KiDispatchException
 * 00000001403F7F62: cli
 * 00000001403F7F63: mov     rsp, [rsp+arg_38]
 * 00000001403F7F68: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
