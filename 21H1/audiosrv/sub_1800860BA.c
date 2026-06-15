/*
 * XREFs of sub_1800860BA @ 0x1800860BA
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800BF494 (WPP_SF_Sd.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800860BA @ 0x1800860BA
 * Reason: Hex-Rays returned no pseudocode for 0x1800860BA
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800860BA: xor     r12d, r12d
 * 00000001800860BD: mov     esi, [rsp+arg_80]
 * 00000001800860C4: mov     rbx, [rsp+arg_F0]
 * 00000001800860CC: mov     r13, [rsp+arg_B8]
 * 00000001800860D4: lea     r14, WPP_GLOBAL_Control
 * 00000001800860DB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001800860E2: mov     edi, 80070057h
 * 00000001800860E7: mov     r15, [rsp+arg_78]
 * 00000001800860EF: mov     r15, [r15]
 * 00000001800860F2: test    r15, r15
 * 00000001800860F5: jz      short loc_180086129
 * 00000001800860F7: call    cs:__imp_GetProcessHeap
 * 00000001800860FE: nop     dword ptr [rax+rax+00h]
 * 0000000180086103: mov     rcx, rax; hHeap
 * 0000000180086106: mov     r8, r15; lpMem
 * 0000000180086109: xor     edx, edx; dwFlags
 * 000000018008610B: call    cs:__imp_HeapFree
 * 0000000180086112: nop     dword ptr [rax+rax+00h]
 * 0000000180086117: mov     rax, [rsp+arg_78]
 * 000000018008611F: mov     [rax], r12
 * 0000000180086122: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000180086129: cmp     rcx, r14
 * 000000018008612C: jz      loc_18001A205
 * 0000000180086132: test    dword ptr [rcx+1Ch], 100h
 * 0000000180086139: jz      loc_18001A205
 * 000000018008613F: cmp     byte ptr [rcx+19h], 4
 * 0000000180086143: jb      loc_18001A205
 * 0000000180086149: mov     edx, 20h ; ' '
 * 000000018008614E: mov     [rsp+arg_18], esi
 * 0000000180086152: mov     r9, [r13+0D8h]
 * 0000000180086159: lea     r8, WPP_f0b9241badf93ac226eca421c556eecc_Traceguids
 * 0000000180086160: mov     rcx, [rcx+10h]
 * 0000000180086164: call    WPP_SF_Sd
 * 0000000180086169: nop
 * 000000018008616A: jmp     loc_18001A205
 */
