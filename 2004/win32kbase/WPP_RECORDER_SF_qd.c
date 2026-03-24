/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C017E38C
 * Callers:
 *     rimObsUpdateInputObserverRegistration @ 0x1C0180258 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C017E38C
 * Reason: Hex-Rays returned no pseudocode for 0x1C017E38C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C017E38C: mov     r11, rsp
 * 00000001C017E38F: mov     [r11+8], rbx
 * 00000001C017E393: push    rbp
 * 00000001C017E394: sub     rsp, 50h
 * 00000001C017E398: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C017E39F: mov     ebp, 29h ; ')'
 * 00000001C017E3A4: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C017E3AB: test    dword ptr [rcx+2Ch], 400000h
 * 00000001C017E3B2: jz      short loc_1C017E3FE
 * 00000001C017E3B4: cmp     byte ptr [rcx+29h], 4
 * 00000001C017E3B8: jb      short loc_1C017E3FE
 * 00000001C017E3BA: and     qword ptr [r11-18h], 0
 * 00000001C017E3BF: lea     rdx, [r11+38h]
 * 00000001C017E3C3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C017E3CA: lea     r8, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C017E3D1: mov     rcx, [rcx+18h]
 * 00000001C017E3D5: mov     qword ptr [r11-20h], 4
 * 00000001C017E3DD: mov     [r11-28h], rdx
 * 00000001C017E3E1: lea     rdx, [r11+30h]
 * 00000001C017E3E5: mov     qword ptr [r11-30h], 8
 * 00000001C017E3ED: mov     [r11-38h], rdx
 * 00000001C017E3F1: lea     edx, [rbp+2]
 * 00000001C017E3F4: movzx   r9d, bp
 * 00000001C017E3F8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017E3FE: and     [rsp+58h+var_10], 0
 * 00000001C017E404: lea     rax, [rsp+58h+arg_30]
 * 00000001C017E40C: mov     [rsp+58h+var_18], 4
 * 00000001C017E415: lea     r9, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C017E41C: mov     [rsp+58h+var_20], rax
 * 00000001C017E421: mov     edx, 4
 * 00000001C017E426: lea     rax, [rsp+58h+arg_28]
 * 00000001C017E42E: mov     [rsp+58h+var_28], 8
 * 00000001C017E437: mov     [rsp+58h+var_30], rax
 * 00000001C017E43C: mov     rcx, rbx
 * 00000001C017E43F: mov     [rsp+58h+var_38], bp
 * 00000001C017E444: lea     r8d, [rdx+13h]
 * 00000001C017E448: call    cs:__imp_WppAutoLogTrace
 * 00000001C017E44F: nop     dword ptr [rax+rax+00h]
 * 00000001C017E454: mov     rbx, [rsp+58h+arg_0]
 * 00000001C017E459: add     rsp, 50h
 * 00000001C017E45D: pop     rbp
 * 00000001C017E45E: retn
 */
