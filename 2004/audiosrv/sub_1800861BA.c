/*
 * XREFs of sub_1800861BA @ 0x1800861BA
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800BF584 (WPP_SF_Sd.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800861BA @ 0x1800861BA
 * Reason: Hex-Rays returned no pseudocode for 0x1800861BA
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800861BA: xor     r12d, r12d
 * 00000001800861BD: mov     esi, [rsp+arg_80]
 * 00000001800861C4: mov     rbx, [rsp+arg_F0]
 * 00000001800861CC: mov     r13, [rsp+arg_B8]
 * 00000001800861D4: lea     r14, WPP_GLOBAL_Control
 * 00000001800861DB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001800861E2: mov     edi, 80070057h
 * 00000001800861E7: mov     r15, [rsp+arg_78]
 * 00000001800861EF: mov     r15, [r15]
 * 00000001800861F2: test    r15, r15
 * 00000001800861F5: jz      short loc_180086229
 * 00000001800861F7: call    cs:__imp_GetProcessHeap
 * 00000001800861FE: nop     dword ptr [rax+rax+00h]
 * 0000000180086203: mov     rcx, rax; hHeap
 * 0000000180086206: mov     r8, r15; lpMem
 * 0000000180086209: xor     edx, edx; dwFlags
 * 000000018008620B: call    cs:__imp_HeapFree
 * 0000000180086212: nop     dword ptr [rax+rax+00h]
 * 0000000180086217: mov     rax, [rsp+arg_78]
 * 000000018008621F: mov     [rax], r12
 * 0000000180086222: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000180086229: cmp     rcx, r14
 * 000000018008622C: jz      loc_18001A205
 * 0000000180086232: test    dword ptr [rcx+1Ch], 100h
 * 0000000180086239: jz      loc_18001A205
 * 000000018008623F: cmp     byte ptr [rcx+19h], 4
 * 0000000180086243: jb      loc_18001A205
 * 0000000180086249: mov     edx, 20h ; ' '
 * 000000018008624E: mov     [rsp+arg_18], esi
 * 0000000180086252: mov     r9, [r13+0D8h]
 * 0000000180086259: lea     r8, WPP_f0b9241badf93ac226eca421c556eecc_Traceguids
 * 0000000180086260: mov     rcx, [rcx+10h]
 * 0000000180086264: call    WPP_SF_Sd
 * 0000000180086269: nop
 * 000000018008626A: jmp     loc_18001A205
 */
