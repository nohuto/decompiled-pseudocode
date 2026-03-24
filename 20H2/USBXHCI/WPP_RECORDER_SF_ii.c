/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1C0036218
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C00348E0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034D50 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0035390 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_II @ 0x1C0036218
 * Reason: Hex-Rays returned no pseudocode for 0x1C0036218
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0036218: mov     r11, rsp
 * 00000001C003621B: mov     [r11+8], rbx
 * 00000001C003621F: mov     [r11+10h], rsi
 * 00000001C0036223: push    rdi
 * 00000001C0036224: sub     rsp, 50h
 * 00000001C0036228: mov     rdi, rcx
 * 00000001C003622B: movzx   ebx, r9w
 * 00000001C003622F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0036236: mov     esi, 8
 * 00000001C003623B: mov     eax, [rcx+2Ch]
 * 00000001C003623E: test    sil, al
 * 00000001C0036241: jz      short loc_1C0036284
 * 00000001C0036243: cmp     byte ptr [rcx+29h], 2
 * 00000001C0036247: jb      short loc_1C0036284
 * 00000001C0036249: and     qword ptr [r11-18h], 0
 * 00000001C003624E: lea     rdx, [r11+38h]
 * 00000001C0036252: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0036259: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0036260: mov     rcx, [rcx+18h]
 * 00000001C0036264: mov     r9d, ebx
 * 00000001C0036267: mov     [r11-20h], rsi
 * 00000001C003626B: mov     [r11-28h], rdx
 * 00000001C003626F: lea     rdx, [r11+30h]
 * 00000001C0036273: mov     [r11-30h], rsi
 * 00000001C0036277: mov     [r11-38h], rdx
 * 00000001C003627B: lea     edx, [rsi+23h]
 * 00000001C003627E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0036284: and     [rsp+58h+var_10], 0
 * 00000001C003628A: lea     rax, [rsp+58h+arg_30]
 * 00000001C0036292: mov     [rsp+58h+var_18], rsi
 * 00000001C0036297: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C003629E: mov     [rsp+58h+var_20], rax
 * 00000001C00362A3: mov     edx, 2
 * 00000001C00362A8: lea     rax, [rsp+58h+arg_28]
 * 00000001C00362B0: mov     [rsp+58h+var_28], rsi
 * 00000001C00362B5: mov     [rsp+58h+var_30], rax
 * 00000001C00362BA: mov     rcx, rdi
 * 00000001C00362BD: mov     [rsp+58h+var_38], bx
 * 00000001C00362C2: lea     r8d, [rdx+2]
 * 00000001C00362C6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00362CD: nop     dword ptr [rax+rax+00h]
 * 00000001C00362D2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00362D7: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00362DC: add     rsp, 50h
 * 00000001C00362E0: pop     rdi
 * 00000001C00362E1: retn
 */
