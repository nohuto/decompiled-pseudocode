/*
 * XREFs of KeExitRetpoline @ 0x1402A37B8
 * Callers:
 *     KiDispatchCallout @ 0x1402A43F0 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x14039F2E4 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403C79E0 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x1403DBB00 (CcBcbProfiler.c)
 *     sub_1403DCD30 @ 0x1403DCD30 (sub_1403DCD30.c)
 *     KiSwInterruptDispatch @ 0x1403DCD90 (KiSwInterruptDispatch.c)
 *     sub_1403DDCC0 @ 0x1403DDCC0 (sub_1403DDCC0.c)
 *     sub_1403EA330 @ 0x1403EA330 (sub_1403EA330.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EBCD4 (RtlpComputeEpilogueOffset.c)
 *     sub_1405BF400 @ 0x1405BF400 (sub_1405BF400.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BF8F0 (FsRtlTruncateSmallMcb.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     KeUserModeCallback @ 0x140707410 (KeUserModeCallback.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140A18560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x1402A37B8
 * Reason: Hex-Rays returned no pseudocode for 0x1402A37B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A37B8: mov     [rsp+arg_8], rbx
 * 00000001402A37BD: pushfq
 * 00000001402A37BF: sub     rsp, 20h
 * 00000001402A37C3: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402A37CA: mov     cl, 1
 * 00000001402A37CC: shr     rax, 29h
 * 00000001402A37D0: and     al, cl
 * 00000001402A37D2: jnz     loc_140465B70
 * 00000001402A37D8: lfence
 * 00000001402A37DB: mov     rbx, [rsp+28h+arg_8]
 * 00000001402A37E0: add     rsp, 20h
 * 00000001402A37E4: pop     rcx
 * 00000001402A37E5: retn
 * 0000000140465B70: mov     ebx, [rsp+28h+var_8]
 * 0000000140465B74: cli
 * 0000000140465B75: mov     rax, gs:20h
 * 0000000140465B7E: shr     ebx, 9
 * 0000000140465B81: and     bl, cl
 * 0000000140465B83: or      [rax+6D6h], cl
 * 0000000140465B89: mov     al, [rax+6D6h]
 * 0000000140465B8F: test    al, 2
 * 0000000140465B91: jnz     short loc_140465B98
 * 0000000140465B93: call    __guard_retpoline_exit
 * 0000000140465B98: test    bl, bl
 * 0000000140465B9A: jz      loc_1402A37D8
 * 0000000140465BA0: sti
 * 0000000140465BA1: jmp     loc_1402A37D8
 */
