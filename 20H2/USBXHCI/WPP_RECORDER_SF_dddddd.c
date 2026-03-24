/*
 * XREFs of WPP_RECORDER_SF_dddddd @ 0x1C0048380
 * Callers:
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C0005C1C (UsbDevice_InitializeInputContextForDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dddddd @ 0x1C0048380
 * Reason: Hex-Rays returned no pseudocode for 0x1C0048380
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0048380: mov     r11, rsp
 * 00000001C0048383: mov     [r11+8], rbx
 * 00000001C0048387: mov     [r11+10h], rsi
 * 00000001C004838B: mov     [r11+18h], rdi
 * 00000001C004838F: push    rbp
 * 00000001C0048390: lea     rbp, [r11-27h]
 * 00000001C0048394: sub     rsp, 90h
 * 00000001C004839B: mov     rbx, rcx
 * 00000001C004839E: mov     edi, 4
 * 00000001C00483A3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00483AA: lea     esi, [rdi+27h]
 * 00000001C00483AD: test    dword ptr [rcx+2Ch], 800h
 * 00000001C00483B4: jz      short loc_1C0048427
 * 00000001C00483B6: cmp     [rcx+29h], dil
 * 00000001C00483BA: jb      short loc_1C0048427
 * 00000001C00483BC: and     qword ptr [r11-18h], 0
 * 00000001C00483C1: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C00483C5: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00483CC: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C00483D3: mov     rcx, [rcx+18h]
 * 00000001C00483D7: mov     [r11-20h], rdi
 * 00000001C00483DB: mov     [r11-28h], rdx
 * 00000001C00483DF: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00483E3: mov     [r11-30h], rdi
 * 00000001C00483E7: mov     [r11-38h], rdx
 * 00000001C00483EB: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00483EF: mov     [r11-40h], rdi
 * 00000001C00483F3: mov     [r11-48h], rdx
 * 00000001C00483F7: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00483FB: mov     [r11-50h], rdi
 * 00000001C00483FF: mov     [r11-58h], rdx
 * 00000001C0048403: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0048407: mov     [r11-60h], rdi
 * 00000001C004840B: mov     [r11-68h], rdx
 * 00000001C004840F: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0048413: mov     [r11-70h], rdi
 * 00000001C0048417: mov     [r11-78h], rdx
 * 00000001C004841B: mov     edx, esi
 * 00000001C004841D: movzx   r9d, si
 * 00000001C0048421: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0048427: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0048430: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0048434: mov     [rsp+90h+var_10], rdi
 * 00000001C004843C: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0048443: mov     [rsp+90h+var_18], rax
 * 00000001C0048448: mov     r8d, 0Ch
 * 00000001C004844E: mov     [rsp+90h+var_20], rdi
 * 00000001C0048453: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0048457: mov     [rsp+90h+var_28], rax
 * 00000001C004845C: mov     edx, edi
 * 00000001C004845E: mov     [rsp+90h+var_30], rdi
 * 00000001C0048463: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0048467: mov     [rsp+90h+var_38], rax
 * 00000001C004846C: mov     rcx, rbx
 * 00000001C004846F: mov     [rsp+90h+var_40], rdi
 * 00000001C0048474: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0048478: mov     [rsp+90h+var_48], rax
 * 00000001C004847D: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0048481: mov     [rsp+90h+var_50], rdi
 * 00000001C0048486: mov     [rsp+90h+var_58], rax
 * 00000001C004848B: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C004848F: mov     [rsp+90h+var_60], rdi
 * 00000001C0048494: mov     [rsp+90h+var_68], rax
 * 00000001C0048499: mov     word ptr [rsp+90h+var_70], si
 * 00000001C004849E: call    cs:__imp_WppAutoLogTrace
 * 00000001C00484A5: nop     dword ptr [rax+rax+00h]
 * 00000001C00484AA: lea     r11, [rsp+90h+var_s0]
 * 00000001C00484B2: mov     rbx, [r11+10h]
 * 00000001C00484B6: mov     rsi, [r11+18h]
 * 00000001C00484BA: mov     rdi, [r11+20h]
 * 00000001C00484BE: mov     rsp, r11
 * 00000001C00484C1: pop     rbp
 * 00000001C00484C2: retn
 */
