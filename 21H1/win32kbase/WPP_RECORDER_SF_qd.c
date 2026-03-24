/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C018408C
 * Callers:
 *     rimObsUpdateInputObserverRegistration @ 0x1C0185F58 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C018408C
 * Reason: Hex-Rays returned no pseudocode for 0x1C018408C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C018408C: mov     r11, rsp
 * 00000001C018408F: mov     [r11+8], rbx
 * 00000001C0184093: push    rbp
 * 00000001C0184094: sub     rsp, 50h
 * 00000001C0184098: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C018409F: mov     ebp, 29h ; ')'
 * 00000001C01840A4: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01840AB: test    dword ptr [rcx+2Ch], 400000h
 * 00000001C01840B2: jz      short loc_1C01840FE
 * 00000001C01840B4: cmp     byte ptr [rcx+29h], 4
 * 00000001C01840B8: jb      short loc_1C01840FE
 * 00000001C01840BA: and     qword ptr [r11-18h], 0
 * 00000001C01840BF: lea     rdx, [r11+38h]
 * 00000001C01840C3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01840CA: lea     r8, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C01840D1: mov     rcx, [rcx+18h]
 * 00000001C01840D5: mov     qword ptr [r11-20h], 4
 * 00000001C01840DD: mov     [r11-28h], rdx
 * 00000001C01840E1: lea     rdx, [r11+30h]
 * 00000001C01840E5: mov     qword ptr [r11-30h], 8
 * 00000001C01840ED: mov     [r11-38h], rdx
 * 00000001C01840F1: lea     edx, [rbp+2]
 * 00000001C01840F4: movzx   r9d, bp
 * 00000001C01840F8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01840FE: and     [rsp+58h+var_10], 0
 * 00000001C0184104: lea     rax, [rsp+58h+arg_30]
 * 00000001C018410C: mov     [rsp+58h+var_18], 4
 * 00000001C0184115: lea     r9, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C018411C: mov     [rsp+58h+var_20], rax
 * 00000001C0184121: mov     edx, 4
 * 00000001C0184126: lea     rax, [rsp+58h+arg_28]
 * 00000001C018412E: mov     [rsp+58h+var_28], 8
 * 00000001C0184137: mov     [rsp+58h+var_30], rax
 * 00000001C018413C: mov     rcx, rbx
 * 00000001C018413F: mov     [rsp+58h+var_38], bp
 * 00000001C0184144: lea     r8d, [rdx+13h]
 * 00000001C0184148: call    cs:__imp_WppAutoLogTrace
 * 00000001C018414F: nop     dword ptr [rax+rax+00h]
 * 00000001C0184154: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0184159: add     rsp, 50h
 * 00000001C018415D: pop     rbp
 * 00000001C018415E: retn
 */
