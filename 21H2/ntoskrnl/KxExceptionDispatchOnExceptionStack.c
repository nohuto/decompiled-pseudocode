/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1403FF040
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1403FF000 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x140273320 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1403FF040
 * Reason: Hex-Rays returned no pseudocode for 0x1403FF040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FF040: test    dword ptr [rbp+0F8h], 200h
 * 00000001403FF04A: jz      short loc_1403FF04D
 * 00000001403FF04C: sti
 * 00000001403FF04D: call    KiDispatchException
 * 00000001403FF052: cli
 * 00000001403FF053: mov     rsp, [rsp+arg_38]
 * 00000001403FF058: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
