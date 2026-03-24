/*
 * XREFs of WPP_RECORDER_SF_P @ 0x1C0034F34
 * Callers:
 *     Controller_AllocateIrqlTrackingArray @ 0x1C0018B0C (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C00310A4 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_RetrieveUrsData @ 0x1C0074CB0 (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_P @ 0x1C0034F34
 * Reason: Hex-Rays returned no pseudocode for 0x1C0034F34
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0034F34: mov     r11, rsp
 * 00000001C0034F37: mov     [r11+8], rbx
 * 00000001C0034F3B: push    rdi
 * 00000001C0034F3C: sub     rsp, 40h
 * 00000001C0034F40: mov     rdi, rcx
 * 00000001C0034F43: movzx   ebx, r9w
 * 00000001C0034F47: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0034F4E: mov     eax, [rcx+2Ch]
 * 00000001C0034F51: test    al, 8
 * 00000001C0034F53: jz      short loc_1C0034F90
 * 00000001C0034F55: cmp     byte ptr [rcx+29h], 2
 * 00000001C0034F59: jb      short loc_1C0034F90
 * 00000001C0034F5B: and     qword ptr [r11-18h], 0
 * 00000001C0034F60: lea     rdx, [r11+30h]
 * 00000001C0034F64: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0034F6B: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0034F72: mov     rcx, [rcx+18h]
 * 00000001C0034F76: mov     r9d, ebx
 * 00000001C0034F79: mov     qword ptr [r11-20h], 8
 * 00000001C0034F81: mov     [r11-28h], rdx
 * 00000001C0034F85: mov     edx, 2Bh ; '+'
 * 00000001C0034F8A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0034F90: and     [rsp+48h+var_10], 0
 * 00000001C0034F96: lea     rax, [rsp+48h+arg_28]
 * 00000001C0034F9B: mov     edx, 2
 * 00000001C0034FA0: mov     [rsp+48h+var_18], 8
 * 00000001C0034FA9: mov     [rsp+48h+var_20], rax
 * 00000001C0034FAE: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0034FB5: mov     rcx, rdi
 * 00000001C0034FB8: mov     [rsp+48h+var_28], bx
 * 00000001C0034FBD: lea     r8d, [rdx+2]
 * 00000001C0034FC1: call    cs:__imp_WppAutoLogTrace
 * 00000001C0034FC8: nop     dword ptr [rax+rax+00h]
 * 00000001C0034FCD: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0034FD2: add     rsp, 40h
 * 00000001C0034FD6: pop     rdi
 * 00000001C0034FD7: retn
 */
