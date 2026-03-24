/*
 * XREFs of WPP_RECORDER_SF_DDDDqDD @ 0x1C0044514
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C000CC90 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDqDD @ 0x1C0044514
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044514
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044514: mov     r11, rsp
 * 00000001C0044517: mov     [r11+8], rbx
 * 00000001C004451B: mov     [r11+10h], rdi
 * 00000001C004451F: mov     [r11+18h], r14
 * 00000001C0044523: push    rbp
 * 00000001C0044524: lea     rbp, [r11-1Fh]
 * 00000001C0044528: sub     rsp, 0A0h
 * 00000001C004452F: mov     rbx, rcx
 * 00000001C0044532: mov     edi, 4
 * 00000001C0044537: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004453E: lea     r14d, [rdi+0Fh]
 * 00000001C0044542: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044549: jz      loc_1C00445D2
 * 00000001C004454F: cmp     byte ptr [rcx+29h], 5
 * 00000001C0044553: jb      short loc_1C00445D2
 * 00000001C0044555: and     qword ptr [r11-18h], 0
 * 00000001C004455A: lea     rdx, [rbp+17h+arg_58]
 * 00000001C004455E: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0044565: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C004456C: mov     rcx, [rcx+18h]
 * 00000001C0044570: mov     [r11-20h], rdi
 * 00000001C0044574: mov     [r11-28h], rdx
 * 00000001C0044578: lea     rdx, [rbp+17h+arg_50]
 * 00000001C004457C: mov     [r11-30h], rdi
 * 00000001C0044580: mov     [r11-38h], rdx
 * 00000001C0044584: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0044588: mov     qword ptr [r11-40h], 8
 * 00000001C0044590: mov     [r11-48h], rdx
 * 00000001C0044594: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0044598: mov     [r11-50h], rdi
 * 00000001C004459C: mov     [r11-58h], rdx
 * 00000001C00445A0: lea     rdx, [rbp+17h+arg_38]
 * 00000001C00445A4: mov     [r11-60h], rdi
 * 00000001C00445A8: mov     [r11-68h], rdx
 * 00000001C00445AC: lea     rdx, [rbp+17h+arg_30]
 * 00000001C00445B0: mov     [r11-70h], rdi
 * 00000001C00445B4: mov     [r11-78h], rdx
 * 00000001C00445B8: lea     rdx, [rbp+17h+arg_28]
 * 00000001C00445BC: mov     [r11-80h], rdi
 * 00000001C00445C0: mov     [rsp+0A0h+var_80], rdx
 * 00000001C00445C5: lea     edx, [rdi+27h]
 * 00000001C00445C8: movzx   r9d, r14w
 * 00000001C00445CC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00445D2: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C00445DB: lea     rax, [rbp+17h+arg_58]
 * 00000001C00445DF: mov     [rsp+0A0h+var_10], rdi
 * 00000001C00445E7: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C00445EE: mov     [rsp+0A0h+var_18], rax
 * 00000001C00445F6: mov     edx, 5
 * 00000001C00445FB: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0044603: lea     rax, [rbp+17h+arg_50]
 * 00000001C0044607: mov     [rsp+0A0h+var_28], rax
 * 00000001C004460C: mov     rcx, rbx
 * 00000001C004460F: mov     [rsp+0A0h+var_30], 8
 * 00000001C0044618: lea     rax, [rbp+17h+arg_48]
 * 00000001C004461C: mov     [rsp+0A0h+var_38], rax
 * 00000001C0044621: lea     r8d, [rdx+9]
 * 00000001C0044625: mov     [rsp+0A0h+var_40], rdi
 * 00000001C004462A: lea     rax, [rbp+17h+arg_40]
 * 00000001C004462E: mov     [rsp+0A0h+var_48], rax
 * 00000001C0044633: lea     rax, [rbp+17h+arg_38]
 * 00000001C0044637: mov     [rsp+0A0h+var_50], rdi
 * 00000001C004463C: mov     [rsp+0A0h+var_58], rax
 * 00000001C0044641: lea     rax, [rbp+17h+arg_30]
 * 00000001C0044645: mov     [rsp+0A0h+var_60], rdi
 * 00000001C004464A: mov     [rsp+0A0h+var_68], rax
 * 00000001C004464F: lea     rax, [rbp+17h+arg_28]
 * 00000001C0044653: mov     [rsp+0A0h+var_70], rdi
 * 00000001C0044658: mov     [rsp+0A0h+var_78], rax
 * 00000001C004465D: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C0044663: call    cs:__imp_WppAutoLogTrace
 * 00000001C004466A: nop     dword ptr [rax+rax+00h]
 * 00000001C004466F: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0044677: mov     rbx, [r11+10h]
 * 00000001C004467B: mov     rdi, [r11+18h]
 * 00000001C004467F: mov     r14, [r11+20h]
 * 00000001C0044683: mov     rsp, r11
 * 00000001C0044686: pop     rbp
 * 00000001C0044687: retn
 */
