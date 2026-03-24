/*
 * XREFs of WPP_RECORDER_SF_qqqd @ 0x1C0036924
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C00348E0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqd @ 0x1C0036924
 * Reason: Hex-Rays returned no pseudocode for 0x1C0036924
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0036924: mov     r11, rsp
 * 00000001C0036927: mov     [r11+8], rbx
 * 00000001C003692B: mov     [r11+10h], rbp
 * 00000001C003692F: push    rdi
 * 00000001C0036930: sub     rsp, 70h
 * 00000001C0036934: mov     rbx, rcx
 * 00000001C0036937: mov     edi, 8
 * 00000001C003693C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0036943: mov     ebp, 12Eh
 * 00000001C0036948: mov     eax, [rcx+2Ch]
 * 00000001C003694B: test    dil, al
 * 00000001C003694E: jz      short loc_1C00369AE
 * 00000001C0036950: cmp     byte ptr [rcx+29h], 5
 * 00000001C0036954: jb      short loc_1C00369AE
 * 00000001C0036956: and     qword ptr [r11-18h], 0
 * 00000001C003695B: lea     rdx, [r11+48h]
 * 00000001C003695F: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0036966: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C003696D: mov     rcx, [rcx+18h]
 * 00000001C0036971: mov     qword ptr [r11-20h], 4
 * 00000001C0036979: mov     [r11-28h], rdx
 * 00000001C003697D: lea     rdx, [r11+40h]
 * 00000001C0036981: mov     [r11-30h], rdi
 * 00000001C0036985: mov     [r11-38h], rdx
 * 00000001C0036989: lea     rdx, [r11+38h]
 * 00000001C003698D: mov     [r11-40h], rdi
 * 00000001C0036991: mov     [r11-48h], rdx
 * 00000001C0036995: lea     rdx, [r11+30h]
 * 00000001C0036999: mov     [r11-50h], rdi
 * 00000001C003699D: mov     [r11-58h], rdx
 * 00000001C00369A1: lea     edx, [rdi+23h]
 * 00000001C00369A4: movzx   r9d, bp
 * 00000001C00369A8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00369AE: and     [rsp+78h+var_10], 0
 * 00000001C00369B4: lea     rax, [rsp+78h+arg_40]
 * 00000001C00369BC: mov     [rsp+78h+var_18], 4
 * 00000001C00369C5: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C00369CC: mov     [rsp+78h+var_20], rax
 * 00000001C00369D1: mov     edx, 5
 * 00000001C00369D6: mov     [rsp+78h+var_28], rdi
 * 00000001C00369DB: lea     rax, [rsp+78h+arg_38]
 * 00000001C00369E3: mov     [rsp+78h+var_30], rax
 * 00000001C00369E8: mov     rcx, rbx
 * 00000001C00369EB: mov     [rsp+78h+var_38], rdi
 * 00000001C00369F0: lea     rax, [rsp+78h+arg_30]
 * 00000001C00369F8: mov     [rsp+78h+var_40], rax
 * 00000001C00369FD: lea     r8d, [rdx-1]
 * 00000001C0036A01: lea     rax, [rsp+78h+arg_28]
 * 00000001C0036A09: mov     [rsp+78h+var_48], rdi
 * 00000001C0036A0E: mov     [rsp+78h+var_50], rax
 * 00000001C0036A13: mov     [rsp+78h+var_58], bp
 * 00000001C0036A18: call    cs:__imp_WppAutoLogTrace
 * 00000001C0036A1F: nop     dword ptr [rax+rax+00h]
 * 00000001C0036A24: lea     r11, [rsp+78h+var_8]
 * 00000001C0036A29: mov     rbx, [r11+10h]
 * 00000001C0036A2D: mov     rbp, [r11+18h]
 * 00000001C0036A31: mov     rsp, r11
 * 00000001C0036A34: pop     rdi
 * 00000001C0036A35: retn
 */
