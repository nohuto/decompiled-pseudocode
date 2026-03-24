/*
 * XREFs of KeExitRetpoline @ 0x1403599C8
 * Callers:
 *     KiDispatchCallout @ 0x14035AA20 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x14039F554 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403C6E50 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x1403DB020 (CcBcbProfiler.c)
 *     sub_1403DC250 @ 0x1403DC250 (sub_1403DC250.c)
 *     KiSwInterruptDispatch @ 0x1403DC2B0 (KiSwInterruptDispatch.c)
 *     sub_1403DD1E0 @ 0x1403DD1E0 (sub_1403DD1E0.c)
 *     sub_1403E9850 @ 0x1403E9850 (sub_1403E9850.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EB1F4 (RtlpComputeEpilogueOffset.c)
 *     sub_1405BD780 @ 0x1405BD780 (sub_1405BD780.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BDC70 (FsRtlTruncateSmallMcb.c)
 *     sub_1405CB010 @ 0x1405CB010 (sub_1405CB010.c)
 *     KeUserModeCallback @ 0x1406814B0 (KeUserModeCallback.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140A1A560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x1403599C8
 * Reason: Hex-Rays returned no pseudocode for 0x1403599C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403599C8: mov     [rsp+arg_8], rbx
 * 00000001403599CD: pushfq
 * 00000001403599CF: sub     rsp, 20h
 * 00000001403599D3: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001403599D9: mov     cl, 1
 * 00000001403599DB: shr     eax, 19h
 * 00000001403599DE: and     al, cl
 * 00000001403599E0: jnz     loc_140488D26
 * 00000001403599E6: lfence
 * 00000001403599E9: mov     rbx, [rsp+28h+arg_8]
 * 00000001403599EE: add     rsp, 20h
 * 00000001403599F2: pop     rcx
 * 00000001403599F3: retn
 * 0000000140488D26: mov     ebx, [rsp+28h+var_8]
 * 0000000140488D2A: cli
 * 0000000140488D2B: mov     rax, gs:20h
 * 0000000140488D34: shr     ebx, 9
 * 0000000140488D37: and     bl, cl
 * 0000000140488D39: or      [rax+6D3h], cl
 * 0000000140488D3F: mov     al, [rax+6D3h]
 * 0000000140488D45: test    al, 2
 * 0000000140488D47: jnz     short loc_140488D4E
 * 0000000140488D49: call    __guard_retpoline_exit
 * 0000000140488D4E: test    bl, bl
 * 0000000140488D50: jz      loc_1403599E6
 * 0000000140488D56: sti
 * 0000000140488D57: jmp     loc_1403599E6
 */
