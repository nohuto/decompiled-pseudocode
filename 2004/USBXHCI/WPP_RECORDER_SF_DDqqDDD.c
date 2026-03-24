/*
 * XREFs of WPP_RECORDER_SF_DDqqDDD @ 0x1C00432A0
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDDD @ 0x1C00432A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00432A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00432A0: mov     r11, rsp
 * 00000001C00432A3: mov     [r11+8], rbx
 * 00000001C00432A7: mov     [r11+10h], rsi
 * 00000001C00432AB: mov     [r11+18h], rdi
 * 00000001C00432AF: mov     [r11+20h], r14
 * 00000001C00432B3: push    rbp
 * 00000001C00432B4: lea     rbp, [r11-1Fh]
 * 00000001C00432B8: sub     rsp, 0A0h
 * 00000001C00432BF: mov     edi, 4
 * 00000001C00432C4: mov     rbx, rcx
 * 00000001C00432C7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00432CE: lea     esi, [rdi+4]
 * 00000001C00432D1: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00432D8: lea     r14d, [rdi+2Eh]
 * 00000001C00432DC: jz      short loc_1C004335D
 * 00000001C00432DE: cmp     byte ptr [rcx+29h], 2
 * 00000001C00432E2: jb      short loc_1C004335D
 * 00000001C00432E4: and     qword ptr [r11-18h], 0
 * 00000001C00432E9: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00432ED: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00432F4: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00432FB: mov     rcx, [rcx+18h]
 * 00000001C00432FF: mov     [r11-20h], rdi
 * 00000001C0043303: mov     [r11-28h], rdx
 * 00000001C0043307: lea     rdx, [rbp+17h+arg_50]
 * 00000001C004330B: mov     [r11-30h], rdi
 * 00000001C004330F: mov     [r11-38h], rdx
 * 00000001C0043313: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0043317: mov     [r11-40h], rdi
 * 00000001C004331B: mov     [r11-48h], rdx
 * 00000001C004331F: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0043323: mov     [r11-50h], rsi
 * 00000001C0043327: mov     [r11-58h], rdx
 * 00000001C004332B: lea     rdx, [rbp+17h+arg_38]
 * 00000001C004332F: mov     [r11-60h], rsi
 * 00000001C0043333: mov     [r11-68h], rdx
 * 00000001C0043337: lea     rdx, [rbp+17h+arg_30]
 * 00000001C004333B: mov     [r11-70h], rdi
 * 00000001C004333F: mov     [r11-78h], rdx
 * 00000001C0043343: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0043347: mov     [r11-80h], rdi
 * 00000001C004334B: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0043350: lea     edx, [rdi+27h]
 * 00000001C0043353: movzx   r9d, r14w
 * 00000001C0043357: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004335D: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0043366: lea     rax, [rbp+17h+arg_58]
 * 00000001C004336A: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0043372: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043379: mov     [rsp+0A0h+var_18], rax
 * 00000001C0043381: mov     edx, 2
 * 00000001C0043386: mov     [rsp+0A0h+var_20], rdi
 * 00000001C004338E: lea     rax, [rbp+17h+arg_50]
 * 00000001C0043392: mov     [rsp+0A0h+var_28], rax
 * 00000001C0043397: mov     rcx, rbx
 * 00000001C004339A: mov     [rsp+0A0h+var_30], rdi
 * 00000001C004339F: lea     rax, [rbp+17h+arg_48]
 * 00000001C00433A3: mov     [rsp+0A0h+var_38], rax
 * 00000001C00433A8: lea     r8d, [rdx+0Ch]
 * 00000001C00433AC: mov     [rsp+0A0h+var_40], rsi
 * 00000001C00433B1: lea     rax, [rbp+17h+arg_40]
 * 00000001C00433B5: mov     [rsp+0A0h+var_48], rax
 * 00000001C00433BA: lea     rax, [rbp+17h+arg_38]
 * 00000001C00433BE: mov     [rsp+0A0h+var_50], rsi
 * 00000001C00433C3: mov     [rsp+0A0h+var_58], rax
 * 00000001C00433C8: lea     rax, [rbp+17h+arg_30]
 * 00000001C00433CC: mov     [rsp+0A0h+var_60], rdi
 * 00000001C00433D1: mov     [rsp+0A0h+var_68], rax
 * 00000001C00433D6: lea     rax, [rbp+17h+arg_28]
 * 00000001C00433DA: mov     [rsp+0A0h+var_70], rdi
 * 00000001C00433DF: mov     [rsp+0A0h+var_78], rax
 * 00000001C00433E4: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C00433EA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00433F1: nop     dword ptr [rax+rax+00h]
 * 00000001C00433F6: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C00433FE: mov     rbx, [r11+10h]
 * 00000001C0043402: mov     rsi, [r11+18h]
 * 00000001C0043406: mov     rdi, [r11+20h]
 * 00000001C004340A: mov     r14, [r11+28h]
 * 00000001C004340E: mov     rsp, r11
 * 00000001C0043411: pop     rbp
 * 00000001C0043412: retn
 */
