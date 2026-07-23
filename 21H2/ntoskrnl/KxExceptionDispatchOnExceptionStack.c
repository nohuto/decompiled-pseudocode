/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1403FF220
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1403FF1E0 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1403FF220
 * Reason: Hex-Rays returned no pseudocode for 0x1403FF220
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FF220: test    dword ptr [rbp+0F8h], 200h
 * 00000001403FF22A: jz      short loc_1403FF22D
 * 00000001403FF22C: sti
 * 00000001403FF22D: call    KiDispatchException
 * 00000001403FF232: cli
 * 00000001403FF233: mov     rsp, [rsp+arg_38]
 * 00000001403FF238: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
