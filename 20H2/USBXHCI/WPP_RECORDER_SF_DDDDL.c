/*
 * XREFs of WPP_RECORDER_SF_DDDDL @ 0x1C0043F28
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C0042604 (Isoch_ProcessSegment.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDL @ 0x1C0043F28
 * Reason: Hex-Rays returned no pseudocode for 0x1C0043F28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0043F28: mov     r11, rsp
 * 00000001C0043F2B: mov     [r11+8], rbx
 * 00000001C0043F2F: mov     [r11+10h], rsi
 * 00000001C0043F33: push    rdi
 * 00000001C0043F34: sub     rsp, 80h
 * 00000001C0043F3B: mov     rbx, rcx
 * 00000001C0043F3E: mov     esi, 1Dh
 * 00000001C0043F43: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043F4A: lea     edi, [rsi-19h]
 * 00000001C0043F4D: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043F54: jz      short loc_1C0043FBC
 * 00000001C0043F56: cmp     byte ptr [rcx+29h], 2
 * 00000001C0043F5A: jb      short loc_1C0043FBC
 * 00000001C0043F5C: and     qword ptr [r11-18h], 0
 * 00000001C0043F61: lea     rdx, [r11+50h]
 * 00000001C0043F65: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0043F6C: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043F73: mov     rcx, [rcx+18h]
 * 00000001C0043F77: mov     [r11-20h], rdi
 * 00000001C0043F7B: mov     [r11-28h], rdx
 * 00000001C0043F7F: lea     rdx, [r11+48h]
 * 00000001C0043F83: mov     [r11-30h], rdi
 * 00000001C0043F87: mov     [r11-38h], rdx
 * 00000001C0043F8B: lea     rdx, [r11+40h]
 * 00000001C0043F8F: mov     [r11-40h], rdi
 * 00000001C0043F93: mov     [r11-48h], rdx
 * 00000001C0043F97: lea     rdx, [r11+38h]
 * 00000001C0043F9B: mov     [r11-50h], rdi
 * 00000001C0043F9F: mov     [r11-58h], rdx
 * 00000001C0043FA3: lea     rdx, [r11+30h]
 * 00000001C0043FA7: mov     [r11-60h], rdi
 * 00000001C0043FAB: mov     [r11-68h], rdx
 * 00000001C0043FAF: lea     edx, [rsi+0Eh]
 * 00000001C0043FB2: movzx   r9d, si
 * 00000001C0043FB6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0043FBC: and     [rsp+88h+var_10], 0
 * 00000001C0043FC2: lea     rax, [rsp+88h+arg_48]
 * 00000001C0043FCA: mov     [rsp+88h+var_18], rdi
 * 00000001C0043FCF: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043FD6: mov     [rsp+88h+var_20], rax
 * 00000001C0043FDB: mov     edx, 2
 * 00000001C0043FE0: mov     [rsp+88h+var_28], rdi
 * 00000001C0043FE5: lea     rax, [rsp+88h+arg_40]
 * 00000001C0043FED: mov     [rsp+88h+var_30], rax
 * 00000001C0043FF2: mov     rcx, rbx
 * 00000001C0043FF5: mov     [rsp+88h+var_38], rdi
 * 00000001C0043FFA: lea     rax, [rsp+88h+arg_38]
 * 00000001C0044002: mov     [rsp+88h+var_40], rax
 * 00000001C0044007: lea     r8d, [rdx+0Ch]
 * 00000001C004400B: mov     [rsp+88h+var_48], rdi
 * 00000001C0044010: lea     rax, [rsp+88h+arg_30]
 * 00000001C0044018: mov     [rsp+88h+var_50], rax
 * 00000001C004401D: lea     rax, [rsp+88h+arg_28]
 * 00000001C0044025: mov     [rsp+88h+var_58], rdi
 * 00000001C004402A: mov     [rsp+88h+var_60], rax
 * 00000001C004402F: mov     [rsp+88h+var_68], si
 * 00000001C0044034: call    cs:__imp_WppAutoLogTrace
 * 00000001C004403B: nop     dword ptr [rax+rax+00h]
 * 00000001C0044040: lea     r11, [rsp+88h+var_8]
 * 00000001C0044048: mov     rbx, [r11+10h]
 * 00000001C004404C: mov     rsi, [r11+18h]
 * 00000001C0044050: mov     rsp, r11
 * 00000001C0044053: pop     rdi
 * 00000001C0044054: retn
 */
