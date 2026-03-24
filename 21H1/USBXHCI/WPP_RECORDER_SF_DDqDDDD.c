/*
 * XREFs of WPP_RECORDER_SF_ddqDddd @ 0x1C004FE38
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0014874 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqDddd @ 0x1C004FE38
 * Reason: Hex-Rays returned no pseudocode for 0x1C004FE38
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004FE38: mov     r11, rsp
 * 00000001C004FE3B: mov     [r11+8], rbx
 * 00000001C004FE3F: mov     [r11+10h], rdi
 * 00000001C004FE43: mov     [r11+18h], r14
 * 00000001C004FE47: push    rbp
 * 00000001C004FE48: lea     rbp, [r11-1Fh]
 * 00000001C004FE4C: sub     rsp, 0A0h
 * 00000001C004FE53: mov     rbx, rcx
 * 00000001C004FE56: mov     edi, 4
 * 00000001C004FE5B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004FE62: lea     r14d, [rdi+0Ah]
 * 00000001C004FE66: mov     eax, [rcx+2Ch]
 * 00000001C004FE69: test    al, al
 * 00000001C004FE6B: jns     loc_1C004FEF4
 * 00000001C004FE71: cmp     byte ptr [rcx+29h], 5
 * 00000001C004FE75: jb      short loc_1C004FEF4
 * 00000001C004FE77: and     qword ptr [r11-18h], 0
 * 00000001C004FE7C: lea     rdx, [rbp+17h+arg_58]
 * 00000001C004FE80: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004FE87: lea     r8, WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids
 * 00000001C004FE8E: mov     rcx, [rcx+18h]
 * 00000001C004FE92: mov     [r11-20h], rdi
 * 00000001C004FE96: mov     [r11-28h], rdx
 * 00000001C004FE9A: lea     rdx, [rbp+17h+arg_50]
 * 00000001C004FE9E: mov     [r11-30h], rdi
 * 00000001C004FEA2: mov     [r11-38h], rdx
 * 00000001C004FEA6: lea     rdx, [rbp+17h+arg_48]
 * 00000001C004FEAA: mov     [r11-40h], rdi
 * 00000001C004FEAE: mov     [r11-48h], rdx
 * 00000001C004FEB2: lea     rdx, [rbp+17h+arg_40]
 * 00000001C004FEB6: mov     [r11-50h], rdi
 * 00000001C004FEBA: mov     [r11-58h], rdx
 * 00000001C004FEBE: lea     rdx, [rbp+17h+arg_38]
 * 00000001C004FEC2: mov     qword ptr [r11-60h], 8
 * 00000001C004FECA: mov     [r11-68h], rdx
 * 00000001C004FECE: lea     rdx, [rbp+17h+arg_30]
 * 00000001C004FED2: mov     [r11-70h], rdi
 * 00000001C004FED6: mov     [r11-78h], rdx
 * 00000001C004FEDA: lea     rdx, [rbp+17h+arg_28]
 * 00000001C004FEDE: mov     [r11-80h], rdi
 * 00000001C004FEE2: mov     [rsp+0A0h+var_80], rdx
 * 00000001C004FEE7: lea     edx, [rdi+27h]
 * 00000001C004FEEA: movzx   r9d, r14w
 * 00000001C004FEEE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004FEF4: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C004FEFD: lea     rax, [rbp+17h+arg_58]
 * 00000001C004FF01: mov     [rsp+0A0h+var_10], rdi
 * 00000001C004FF09: lea     r9, WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids
 * 00000001C004FF10: mov     [rsp+0A0h+var_18], rax
 * 00000001C004FF18: mov     edx, 5
 * 00000001C004FF1D: mov     [rsp+0A0h+var_20], rdi
 * 00000001C004FF25: lea     rax, [rbp+17h+arg_50]
 * 00000001C004FF29: mov     [rsp+0A0h+var_28], rax
 * 00000001C004FF2E: mov     rcx, rbx
 * 00000001C004FF31: mov     [rsp+0A0h+var_30], rdi
 * 00000001C004FF36: lea     rax, [rbp+17h+arg_48]
 * 00000001C004FF3A: mov     [rsp+0A0h+var_38], rax
 * 00000001C004FF3F: lea     r8d, [rdx+3]
 * 00000001C004FF43: mov     [rsp+0A0h+var_40], rdi
 * 00000001C004FF48: lea     rax, [rbp+17h+arg_40]
 * 00000001C004FF4C: mov     [rsp+0A0h+var_48], rax
 * 00000001C004FF51: lea     rax, [rbp+17h+arg_38]
 * 00000001C004FF55: mov     [rsp+0A0h+var_50], 8
 * 00000001C004FF5E: mov     [rsp+0A0h+var_58], rax
 * 00000001C004FF63: lea     rax, [rbp+17h+arg_30]
 * 00000001C004FF67: mov     [rsp+0A0h+var_60], rdi
 * 00000001C004FF6C: mov     [rsp+0A0h+var_68], rax
 * 00000001C004FF71: lea     rax, [rbp+17h+arg_28]
 * 00000001C004FF75: mov     [rsp+0A0h+var_70], rdi
 * 00000001C004FF7A: mov     [rsp+0A0h+var_78], rax
 * 00000001C004FF7F: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C004FF85: call    cs:__imp_WppAutoLogTrace
 * 00000001C004FF8C: nop     dword ptr [rax+rax+00h]
 * 00000001C004FF91: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C004FF99: mov     rbx, [r11+10h]
 * 00000001C004FF9D: mov     rdi, [r11+18h]
 * 00000001C004FFA1: mov     r14, [r11+20h]
 * 00000001C004FFA5: mov     rsp, r11
 * 00000001C004FFA8: pop     rbp
 * 00000001C004FFA9: retn
 */
