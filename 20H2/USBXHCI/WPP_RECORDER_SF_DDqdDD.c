/*
 * XREFs of WPP_RECORDER_SF_DDqDDD @ 0x1C00444E0
 * Callers:
 *     Isoch_PrepareStage @ 0x1C00038C0 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDDD @ 0x1C00444E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00444E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00444E0: mov     r11, rsp
 * 00000001C00444E3: mov     [r11+8], rbx
 * 00000001C00444E7: mov     [r11+10h], rdi
 * 00000001C00444EB: mov     [r11+18h], r14
 * 00000001C00444EF: push    rbp
 * 00000001C00444F0: lea     rbp, [r11-27h]
 * 00000001C00444F4: sub     rsp, 90h
 * 00000001C00444FB: mov     rbx, rcx
 * 00000001C00444FE: mov     edi, 4
 * 00000001C0044503: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004450A: lea     r14d, [rdi+2Ah]
 * 00000001C004450E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044515: jz      short loc_1C004458D
 * 00000001C0044517: cmp     byte ptr [rcx+29h], 5
 * 00000001C004451B: jb      short loc_1C004458D
 * 00000001C004451D: and     qword ptr [r11-18h], 0
 * 00000001C0044522: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0044526: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C004452D: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0044534: mov     rcx, [rcx+18h]
 * 00000001C0044538: mov     [r11-20h], rdi
 * 00000001C004453C: mov     [r11-28h], rdx
 * 00000001C0044540: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0044544: mov     [r11-30h], rdi
 * 00000001C0044548: mov     [r11-38h], rdx
 * 00000001C004454C: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0044550: mov     [r11-40h], rdi
 * 00000001C0044554: mov     [r11-48h], rdx
 * 00000001C0044558: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C004455C: mov     qword ptr [r11-50h], 8
 * 00000001C0044564: mov     [r11-58h], rdx
 * 00000001C0044568: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C004456C: mov     [r11-60h], rdi
 * 00000001C0044570: mov     [r11-68h], rdx
 * 00000001C0044574: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0044578: mov     [r11-70h], rdi
 * 00000001C004457C: mov     [r11-78h], rdx
 * 00000001C0044580: lea     edx, [rdi+27h]
 * 00000001C0044583: movzx   r9d, r14w
 * 00000001C0044587: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004458D: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0044596: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C004459A: mov     [rsp+90h+var_10], rdi
 * 00000001C00445A2: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00445A9: mov     [rsp+90h+var_18], rax
 * 00000001C00445AE: mov     edx, 5
 * 00000001C00445B3: mov     [rsp+90h+var_20], rdi
 * 00000001C00445B8: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C00445BC: mov     [rsp+90h+var_28], rax
 * 00000001C00445C1: mov     rcx, rbx
 * 00000001C00445C4: mov     [rsp+90h+var_30], rdi
 * 00000001C00445C9: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C00445CD: mov     [rsp+90h+var_38], rax
 * 00000001C00445D2: lea     r8d, [rdx+9]
 * 00000001C00445D6: mov     [rsp+90h+var_40], 8
 * 00000001C00445DF: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C00445E3: mov     [rsp+90h+var_48], rax
 * 00000001C00445E8: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C00445EC: mov     [rsp+90h+var_50], rdi
 * 00000001C00445F1: mov     [rsp+90h+var_58], rax
 * 00000001C00445F6: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C00445FA: mov     [rsp+90h+var_60], rdi
 * 00000001C00445FF: mov     [rsp+90h+var_68], rax
 * 00000001C0044604: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C004460A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0044611: nop     dword ptr [rax+rax+00h]
 * 00000001C0044616: lea     r11, [rsp+90h+var_s0]
 * 00000001C004461E: mov     rbx, [r11+10h]
 * 00000001C0044622: mov     rdi, [r11+18h]
 * 00000001C0044626: mov     r14, [r11+20h]
 * 00000001C004462A: mov     rsp, r11
 * 00000001C004462D: pop     rbp
 * 00000001C004462E: retn
 */
