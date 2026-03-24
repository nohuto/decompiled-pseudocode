/*
 * XREFs of WPP_RECORDER_SF_dDd @ 0x1C003F400
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011E24 (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDd @ 0x1C003F400
 * Reason: Hex-Rays returned no pseudocode for 0x1C003F400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003F400: mov     r11, rsp
 * 00000001C003F403: mov     [r11+8], rbx
 * 00000001C003F407: mov     [r11+10h], rsi
 * 00000001C003F40B: push    rdi
 * 00000001C003F40C: sub     rsp, 60h
 * 00000001C003F410: mov     rbx, rcx
 * 00000001C003F413: mov     esi, 0CBh
 * 00000001C003F418: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003F41F: mov     edi, 4
 * 00000001C003F424: test    dword ptr [rcx+2Ch], 400h
 * 00000001C003F42B: jz      short loc_1C003F47B
 * 00000001C003F42D: cmp     byte ptr [rcx+29h], 3
 * 00000001C003F431: jb      short loc_1C003F47B
 * 00000001C003F433: and     qword ptr [r11-18h], 0
 * 00000001C003F438: lea     rdx, [r11+40h]
 * 00000001C003F43C: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C003F443: lea     r8, WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids
 * 00000001C003F44A: mov     rcx, [rcx+18h]
 * 00000001C003F44E: mov     [r11-20h], rdi
 * 00000001C003F452: mov     [r11-28h], rdx
 * 00000001C003F456: lea     rdx, [r11+38h]
 * 00000001C003F45A: mov     [r11-30h], rdi
 * 00000001C003F45E: mov     [r11-38h], rdx
 * 00000001C003F462: lea     rdx, [r11+30h]
 * 00000001C003F466: mov     [r11-40h], rdi
 * 00000001C003F46A: mov     [r11-48h], rdx
 * 00000001C003F46E: lea     edx, [rdi+27h]
 * 00000001C003F471: movzx   r9d, si
 * 00000001C003F475: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003F47B: and     [rsp+68h+var_10], 0
 * 00000001C003F481: lea     rax, [rsp+68h+arg_38]
 * 00000001C003F489: mov     [rsp+68h+var_18], rdi
 * 00000001C003F48E: lea     r9, WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids
 * 00000001C003F495: mov     [rsp+68h+var_20], rax
 * 00000001C003F49A: mov     edx, 3
 * 00000001C003F49F: mov     [rsp+68h+var_28], rdi
 * 00000001C003F4A4: lea     rax, [rsp+68h+arg_30]
 * 00000001C003F4AC: mov     [rsp+68h+var_30], rax
 * 00000001C003F4B1: mov     rcx, rbx
 * 00000001C003F4B4: lea     rax, [rsp+68h+arg_28]
 * 00000001C003F4BC: mov     [rsp+68h+var_38], rdi
 * 00000001C003F4C1: mov     [rsp+68h+var_40], rax
 * 00000001C003F4C6: lea     r8d, [rdx+8]
 * 00000001C003F4CA: mov     [rsp+68h+var_48], si
 * 00000001C003F4CF: call    cs:__imp_WppAutoLogTrace
 * 00000001C003F4D6: nop     dword ptr [rax+rax+00h]
 * 00000001C003F4DB: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003F4E0: mov     rsi, [rsp+68h+arg_8]
 * 00000001C003F4E5: add     rsp, 60h
 * 00000001C003F4E9: pop     rdi
 * 00000001C003F4EA: retn
 */
