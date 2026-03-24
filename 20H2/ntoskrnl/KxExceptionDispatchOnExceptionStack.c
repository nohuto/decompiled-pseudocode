/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1403FCDA0
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1403FCD60 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1403FCDA0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FCDA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FCDA0: test    dword ptr [rbp+0F8h], 200h
 * 00000001403FCDAA: jz      short loc_1403FCDAD
 * 00000001403FCDAC: sti
 * 00000001403FCDAD: call    KiDispatchException
 * 00000001403FCDB2: cli
 * 00000001403FCDB3: mov     rsp, [rsp+arg_38]
 * 00000001403FCDB8: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
