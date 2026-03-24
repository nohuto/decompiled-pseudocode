/*
 * XREFs of WPP_RECORDER_SF_cccc @ 0x1C003DD1C
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C006D2F0 (RootHub_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_cccc @ 0x1C003DD1C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003DD1C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003DD1C: mov     r11, rsp
 * 00000001C003DD1F: mov     [r11+8], rbx
 * 00000001C003DD23: mov     [r11+10h], rsi
 * 00000001C003DD27: push    rdi
 * 00000001C003DD28: sub     rsp, 70h
 * 00000001C003DD2C: mov     rbx, rcx
 * 00000001C003DD2F: mov     esi, 19h
 * 00000001C003DD34: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003DD3B: lea     edi, [rsi-18h]
 * 00000001C003DD3E: test    dword ptr [rcx+2Ch], 400h
 * 00000001C003DD45: jz      short loc_1C003DDA1
 * 00000001C003DD47: cmp     byte ptr [rcx+29h], 2
 * 00000001C003DD4B: jb      short loc_1C003DDA1
 * 00000001C003DD4D: and     qword ptr [r11-18h], 0
 * 00000001C003DD52: lea     rdx, [r11+48h]
 * 00000001C003DD56: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003DD5D: lea     r8, WPP_f97631885c123b34877e2ec176e34bf2_Traceguids
 * 00000001C003DD64: mov     rcx, [rcx+18h]
 * 00000001C003DD68: mov     [r11-20h], rdi
 * 00000001C003DD6C: mov     [r11-28h], rdx
 * 00000001C003DD70: lea     rdx, [r11+40h]
 * 00000001C003DD74: mov     [r11-30h], rdi
 * 00000001C003DD78: mov     [r11-38h], rdx
 * 00000001C003DD7C: lea     rdx, [r11+38h]
 * 00000001C003DD80: mov     [r11-40h], rdi
 * 00000001C003DD84: mov     [r11-48h], rdx
 * 00000001C003DD88: lea     rdx, [r11+30h]
 * 00000001C003DD8C: mov     [r11-50h], rdi
 * 00000001C003DD90: mov     [r11-58h], rdx
 * 00000001C003DD94: lea     edx, [rsi+12h]
 * 00000001C003DD97: movzx   r9d, si
 * 00000001C003DD9B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003DDA1: and     [rsp+78h+var_10], 0
 * 00000001C003DDA7: lea     rax, [rsp+78h+arg_40]
 * 00000001C003DDAF: mov     [rsp+78h+var_18], rdi
 * 00000001C003DDB4: lea     r9, WPP_f97631885c123b34877e2ec176e34bf2_Traceguids
 * 00000001C003DDBB: mov     [rsp+78h+var_20], rax
 * 00000001C003DDC0: mov     edx, 2
 * 00000001C003DDC5: mov     [rsp+78h+var_28], rdi
 * 00000001C003DDCA: lea     rax, [rsp+78h+arg_38]
 * 00000001C003DDD2: mov     [rsp+78h+var_30], rax
 * 00000001C003DDD7: mov     rcx, rbx
 * 00000001C003DDDA: mov     [rsp+78h+var_38], rdi
 * 00000001C003DDDF: lea     rax, [rsp+78h+arg_30]
 * 00000001C003DDE7: mov     [rsp+78h+var_40], rax
 * 00000001C003DDEC: lea     r8d, [rdx+9]
 * 00000001C003DDF0: lea     rax, [rsp+78h+arg_28]
 * 00000001C003DDF8: mov     [rsp+78h+var_48], rdi
 * 00000001C003DDFD: mov     [rsp+78h+var_50], rax
 * 00000001C003DE02: mov     [rsp+78h+var_58], si
 * 00000001C003DE07: call    cs:__imp_WppAutoLogTrace
 * 00000001C003DE0E: nop     dword ptr [rax+rax+00h]
 * 00000001C003DE13: lea     r11, [rsp+78h+var_8]
 * 00000001C003DE18: mov     rbx, [r11+10h]
 * 00000001C003DE1C: mov     rsi, [r11+18h]
 * 00000001C003DE20: mov     rsp, r11
 * 00000001C003DE23: pop     rdi
 * 00000001C003DE24: retn
 */
