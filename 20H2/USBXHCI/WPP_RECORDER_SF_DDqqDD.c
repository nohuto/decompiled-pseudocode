/*
 * XREFs of WPP_RECORDER_SF_DDqqDD @ 0x1C0044638
 * Callers:
 *     Isoch_PrepareStage @ 0x1C00038C0 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDD @ 0x1C0044638
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044638
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044638: mov     r11, rsp
 * 00000001C004463B: mov     [r11+8], rbx
 * 00000001C004463F: mov     [r11+10h], rsi
 * 00000001C0044643: mov     [r11+18h], rdi
 * 00000001C0044647: mov     [r11+20h], r14
 * 00000001C004464B: push    rbp
 * 00000001C004464C: lea     rbp, [r11-27h]
 * 00000001C0044650: sub     rsp, 90h
 * 00000001C0044657: mov     edi, 4
 * 00000001C004465C: mov     rbx, rcx
 * 00000001C004465F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0044666: lea     esi, [rdi+4]
 * 00000001C0044669: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044670: lea     r14d, [rdi+2Bh]
 * 00000001C0044674: jz      short loc_1C00446E8
 * 00000001C0044676: cmp     [rcx+29h], dil
 * 00000001C004467A: jb      short loc_1C00446E8
 * 00000001C004467C: and     qword ptr [r11-18h], 0
 * 00000001C0044681: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0044685: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C004468C: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0044693: mov     rcx, [rcx+18h]
 * 00000001C0044697: mov     [r11-20h], rdi
 * 00000001C004469B: mov     [r11-28h], rdx
 * 00000001C004469F: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00446A3: mov     [r11-30h], rdi
 * 00000001C00446A7: mov     [r11-38h], rdx
 * 00000001C00446AB: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00446AF: mov     [r11-40h], rsi
 * 00000001C00446B3: mov     [r11-48h], rdx
 * 00000001C00446B7: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00446BB: mov     [r11-50h], rsi
 * 00000001C00446BF: mov     [r11-58h], rdx
 * 00000001C00446C3: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C00446C7: mov     [r11-60h], rdi
 * 00000001C00446CB: mov     [r11-68h], rdx
 * 00000001C00446CF: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C00446D3: mov     [r11-70h], rdi
 * 00000001C00446D7: mov     [r11-78h], rdx
 * 00000001C00446DB: lea     edx, [rdi+27h]
 * 00000001C00446DE: movzx   r9d, r14w
 * 00000001C00446E2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00446E8: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C00446F1: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C00446F5: mov     [rsp+90h+var_10], rdi
 * 00000001C00446FD: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0044704: mov     [rsp+90h+var_18], rax
 * 00000001C0044709: mov     r8d, 0Eh
 * 00000001C004470F: mov     [rsp+90h+var_20], rdi
 * 00000001C0044714: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0044718: mov     [rsp+90h+var_28], rax
 * 00000001C004471D: mov     edx, edi
 * 00000001C004471F: mov     [rsp+90h+var_30], rsi
 * 00000001C0044724: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0044728: mov     [rsp+90h+var_38], rax
 * 00000001C004472D: mov     rcx, rbx
 * 00000001C0044730: mov     [rsp+90h+var_40], rsi
 * 00000001C0044735: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0044739: mov     [rsp+90h+var_48], rax
 * 00000001C004473E: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0044742: mov     [rsp+90h+var_50], rdi
 * 00000001C0044747: mov     [rsp+90h+var_58], rax
 * 00000001C004474C: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0044750: mov     [rsp+90h+var_60], rdi
 * 00000001C0044755: mov     [rsp+90h+var_68], rax
 * 00000001C004475A: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C0044760: call    cs:__imp_WppAutoLogTrace
 * 00000001C0044767: nop     dword ptr [rax+rax+00h]
 * 00000001C004476C: lea     r11, [rsp+90h+var_s0]
 * 00000001C0044774: mov     rbx, [r11+10h]
 * 00000001C0044778: mov     rsi, [r11+18h]
 * 00000001C004477C: mov     rdi, [r11+20h]
 * 00000001C0044780: mov     r14, [r11+28h]
 * 00000001C0044784: mov     rsp, r11
 * 00000001C0044787: pop     rbp
 * 00000001C0044788: retn
 */
