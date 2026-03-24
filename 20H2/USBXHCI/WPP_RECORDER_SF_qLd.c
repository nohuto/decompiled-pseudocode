/*
 * XREFs of WPP_RECORDER_SF_qLD @ 0x1C00365A4
 * Callers:
 *     Controller_WdfEvtDeviceUsageNotification @ 0x1C0077220 (Controller_WdfEvtDeviceUsageNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLD @ 0x1C00365A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00365A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00365A4: mov     r11, rsp
 * 00000001C00365A7: mov     [r11+8], rbx
 * 00000001C00365AB: mov     [r11+10h], rbp
 * 00000001C00365AF: push    rdi
 * 00000001C00365B0: sub     rsp, 60h
 * 00000001C00365B4: mov     rbx, rcx
 * 00000001C00365B7: mov     edi, 4
 * 00000001C00365BC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00365C3: lea     ebp, [rdi+30h]
 * 00000001C00365C6: mov     eax, [rcx+2Ch]
 * 00000001C00365C9: test    al, 8
 * 00000001C00365CB: jz      short loc_1C003661F
 * 00000001C00365CD: cmp     [rcx+29h], dil
 * 00000001C00365D1: jb      short loc_1C003661F
 * 00000001C00365D3: and     qword ptr [r11-18h], 0
 * 00000001C00365D8: lea     rdx, [r11+40h]
 * 00000001C00365DC: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00365E3: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C00365EA: mov     rcx, [rcx+18h]
 * 00000001C00365EE: mov     [r11-20h], rdi
 * 00000001C00365F2: mov     [r11-28h], rdx
 * 00000001C00365F6: lea     rdx, [r11+38h]
 * 00000001C00365FA: mov     [r11-30h], rdi
 * 00000001C00365FE: mov     [r11-38h], rdx
 * 00000001C0036602: lea     rdx, [r11+30h]
 * 00000001C0036606: mov     qword ptr [r11-40h], 8
 * 00000001C003660E: mov     [r11-48h], rdx
 * 00000001C0036612: lea     edx, [rdi+27h]
 * 00000001C0036615: movzx   r9d, bp
 * 00000001C0036619: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003661F: and     [rsp+68h+var_10], 0
 * 00000001C0036625: lea     rax, [rsp+68h+arg_38]
 * 00000001C003662D: mov     [rsp+68h+var_18], rdi
 * 00000001C0036632: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0036639: mov     [rsp+68h+var_20], rax
 * 00000001C003663E: mov     r8d, edi
 * 00000001C0036641: mov     [rsp+68h+var_28], rdi
 * 00000001C0036646: lea     rax, [rsp+68h+arg_30]
 * 00000001C003664E: mov     [rsp+68h+var_30], rax
 * 00000001C0036653: mov     edx, edi
 * 00000001C0036655: lea     rax, [rsp+68h+arg_28]
 * 00000001C003665D: mov     [rsp+68h+var_38], 8
 * 00000001C0036666: mov     [rsp+68h+var_40], rax
 * 00000001C003666B: mov     rcx, rbx
 * 00000001C003666E: mov     [rsp+68h+var_48], bp
 * 00000001C0036673: call    cs:__imp_WppAutoLogTrace
 * 00000001C003667A: nop     dword ptr [rax+rax+00h]
 * 00000001C003667F: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0036684: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0036689: add     rsp, 60h
 * 00000001C003668D: pop     rdi
 * 00000001C003668E: retn
 */
