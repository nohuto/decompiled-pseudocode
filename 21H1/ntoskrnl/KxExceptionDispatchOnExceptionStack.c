/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1403F6CC0
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1403F6C80 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1403F6CC0
 * Reason: Hex-Rays returned no pseudocode for 0x1403F6CC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F6CC0: test    dword ptr [rbp+0F8h], 200h
 * 00000001403F6CCA: jz      short loc_1403F6CCD
 * 00000001403F6CCC: sti
 * 00000001403F6CCD: call    KiDispatchException
 * 00000001403F6CD2: cli
 * 00000001403F6CD3: mov     rsp, [rsp+arg_38]
 * 00000001403F6CD8: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
