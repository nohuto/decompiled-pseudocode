/*
 * XREFs of KeExitRetpoline @ 0x14035E888
 * Callers:
 *     KiDispatchCallout @ 0x14035F4C0 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x14039F194 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403C7840 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x1403DB990 (CcBcbProfiler.c)
 *     sub_1403DCBC0 @ 0x1403DCBC0 (sub_1403DCBC0.c)
 *     KiSwInterruptDispatch @ 0x1403DCC20 (KiSwInterruptDispatch.c)
 *     sub_1403DDB50 @ 0x1403DDB50 (sub_1403DDB50.c)
 *     sub_1403EA1C0 @ 0x1403EA1C0 (sub_1403EA1C0.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EBB64 (RtlpComputeEpilogueOffset.c)
 *     sub_1405BF1D0 @ 0x1405BF1D0 (sub_1405BF1D0.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BF6C0 (FsRtlTruncateSmallMcb.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     KeUserModeCallback @ 0x1406F0030 (KeUserModeCallback.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140A17560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x14035E888
 * Reason: Hex-Rays returned no pseudocode for 0x14035E888
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014035E888: mov     [rsp+arg_8], rbx
 * 000000014035E88D: pushfq
 * 000000014035E88F: sub     rsp, 20h
 * 000000014035E893: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014035E89A: mov     cl, 1
 * 000000014035E89C: shr     rax, 29h
 * 000000014035E8A0: and     al, cl
 * 000000014035E8A2: jnz     loc_1404994E6
 * 000000014035E8A8: lfence
 * 000000014035E8AB: mov     rbx, [rsp+28h+arg_8]
 * 000000014035E8B0: add     rsp, 20h
 * 000000014035E8B4: pop     rcx
 * 000000014035E8B5: retn
 * 00000001404994E6: mov     ebx, [rsp+28h+var_8]
 * 00000001404994EA: cli
 * 00000001404994EB: mov     rax, gs:20h
 * 00000001404994F4: shr     ebx, 9
 * 00000001404994F7: and     bl, cl
 * 00000001404994F9: or      [rax+6D6h], cl
 * 00000001404994FF: mov     al, [rax+6D6h]
 * 0000000140499505: test    al, 2
 * 0000000140499507: jnz     short loc_14049950E
 * 0000000140499509: call    __guard_retpoline_exit
 * 000000014049950E: test    bl, bl
 * 0000000140499510: jz      loc_14035E8A8
 * 0000000140499516: sti
 * 0000000140499517: jmp     loc_14035E8A8
 */
