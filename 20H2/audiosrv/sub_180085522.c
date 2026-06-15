/*
 * XREFs of sub_180085522 @ 0x180085522
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800BE8F4 (WPP_SF_Sd.c)
 */

/*
 * Hex-Rays decompilation failed for sub_180085522 @ 0x180085522
 * Reason: Hex-Rays returned no pseudocode for 0x180085522
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180085522: xor     r12d, r12d
 * 0000000180085525: mov     esi, [rsp+arg_80]
 * 000000018008552C: mov     rbx, [rsp+arg_F0]
 * 0000000180085534: mov     r13, [rsp+arg_B8]
 * 000000018008553C: lea     r14, WPP_GLOBAL_Control
 * 0000000180085543: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000018008554A: mov     edi, 80070057h
 * 000000018008554F: mov     r15, [rsp+arg_78]
 * 0000000180085557: mov     r15, [r15]
 * 000000018008555A: test    r15, r15
 * 000000018008555D: jz      short loc_180085591
 * 000000018008555F: call    cs:__imp_GetProcessHeap
 * 0000000180085566: nop     dword ptr [rax+rax+00h]
 * 000000018008556B: mov     rcx, rax; hHeap
 * 000000018008556E: mov     r8, r15; lpMem
 * 0000000180085571: xor     edx, edx; dwFlags
 * 0000000180085573: call    cs:__imp_HeapFree
 * 000000018008557A: nop     dword ptr [rax+rax+00h]
 * 000000018008557F: mov     rax, [rsp+arg_78]
 * 0000000180085587: mov     [rax], r12
 * 000000018008558A: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000180085591: cmp     rcx, r14
 * 0000000180085594: jz      loc_180019B85
 * 000000018008559A: test    dword ptr [rcx+1Ch], 100h
 * 00000001800855A1: jz      loc_180019B85
 * 00000001800855A7: cmp     byte ptr [rcx+19h], 4
 * 00000001800855AB: jb      loc_180019B85
 * 00000001800855B1: mov     edx, 20h ; ' '
 * 00000001800855B6: mov     [rsp+arg_18], esi
 * 00000001800855BA: mov     r9, [r13+0D8h]
 * 00000001800855C1: lea     r8, WPP_f0b9241badf93ac226eca421c556eecc_Traceguids
 * 00000001800855C8: mov     rcx, [rcx+10h]
 * 00000001800855CC: call    WPP_SF_Sd
 * 00000001800855D1: nop
 * 00000001800855D2: jmp     loc_180019B85
 */
