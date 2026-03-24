/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1C0035518
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033BE0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034050 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034690 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_II @ 0x1C0035518
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035518
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035518: mov     r11, rsp
 * 00000001C003551B: mov     [r11+8], rbx
 * 00000001C003551F: mov     [r11+10h], rsi
 * 00000001C0035523: push    rdi
 * 00000001C0035524: sub     rsp, 50h
 * 00000001C0035528: mov     rdi, rcx
 * 00000001C003552B: movzx   ebx, r9w
 * 00000001C003552F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0035536: mov     esi, 8
 * 00000001C003553B: mov     eax, [rcx+2Ch]
 * 00000001C003553E: test    sil, al
 * 00000001C0035541: jz      short loc_1C0035584
 * 00000001C0035543: cmp     byte ptr [rcx+29h], 2
 * 00000001C0035547: jb      short loc_1C0035584
 * 00000001C0035549: and     qword ptr [r11-18h], 0
 * 00000001C003554E: lea     rdx, [r11+38h]
 * 00000001C0035552: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035559: lea     r8, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035560: mov     rcx, [rcx+18h]
 * 00000001C0035564: mov     r9d, ebx
 * 00000001C0035567: mov     [r11-20h], rsi
 * 00000001C003556B: mov     [r11-28h], rdx
 * 00000001C003556F: lea     rdx, [r11+30h]
 * 00000001C0035573: mov     [r11-30h], rsi
 * 00000001C0035577: mov     [r11-38h], rdx
 * 00000001C003557B: lea     edx, [rsi+23h]
 * 00000001C003557E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035584: and     [rsp+58h+var_10], 0
 * 00000001C003558A: lea     rax, [rsp+58h+arg_30]
 * 00000001C0035592: mov     [rsp+58h+var_18], rsi
 * 00000001C0035597: lea     r9, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C003559E: mov     [rsp+58h+var_20], rax
 * 00000001C00355A3: mov     edx, 2
 * 00000001C00355A8: lea     rax, [rsp+58h+arg_28]
 * 00000001C00355B0: mov     [rsp+58h+var_28], rsi
 * 00000001C00355B5: mov     [rsp+58h+var_30], rax
 * 00000001C00355BA: mov     rcx, rdi
 * 00000001C00355BD: mov     [rsp+58h+var_38], bx
 * 00000001C00355C2: lea     r8d, [rdx+2]
 * 00000001C00355C6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00355CD: nop     dword ptr [rax+rax+00h]
 * 00000001C00355D2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00355D7: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00355DC: add     rsp, 50h
 * 00000001C00355E0: pop     rdi
 * 00000001C00355E1: retn
 */
