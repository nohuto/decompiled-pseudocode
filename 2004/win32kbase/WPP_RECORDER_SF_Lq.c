/*
 * XREFs of WPP_RECORDER_SF_Lq @ 0x1C019EA24
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0198DC0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019CF68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lq @ 0x1C019EA24
 * Reason: Hex-Rays returned no pseudocode for 0x1C019EA24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C019EA24: mov     r11, rsp
 * 00000001C019EA27: mov     [r11+8], rbx
 * 00000001C019EA2B: push    rdi
 * 00000001C019EA2C: sub     rsp, 50h
 * 00000001C019EA30: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C019EA37: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C019EA3E: movzx   ebx, r9w
 * 00000001C019EA42: mov     eax, [rcx+2Ch]
 * 00000001C019EA45: test    al, 40h
 * 00000001C019EA47: jz      short loc_1C019EA94
 * 00000001C019EA49: cmp     byte ptr [rcx+29h], 2
 * 00000001C019EA4D: jb      short loc_1C019EA94
 * 00000001C019EA4F: and     qword ptr [r11-18h], 0
 * 00000001C019EA54: lea     rdx, [r11+38h]
 * 00000001C019EA58: mov     rax, cs:pfnWppTraceMessage
 * 00000001C019EA5F: lea     r8, WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids
 * 00000001C019EA66: mov     rcx, [rcx+18h]
 * 00000001C019EA6A: mov     r9d, ebx
 * 00000001C019EA6D: mov     qword ptr [r11-20h], 8
 * 00000001C019EA75: mov     [r11-28h], rdx
 * 00000001C019EA79: lea     rdx, [r11+30h]
 * 00000001C019EA7D: mov     qword ptr [r11-30h], 4
 * 00000001C019EA85: mov     [r11-38h], rdx
 * 00000001C019EA89: mov     edx, 2Bh ; '+'
 * 00000001C019EA8E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C019EA94: and     [rsp+58h+var_10], 0
 * 00000001C019EA9A: lea     rax, [rsp+58h+arg_30]
 * 00000001C019EAA2: mov     [rsp+58h+var_18], 8
 * 00000001C019EAAB: lea     r9, WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids
 * 00000001C019EAB2: mov     [rsp+58h+var_20], rax
 * 00000001C019EAB7: mov     edx, 2
 * 00000001C019EABC: lea     rax, [rsp+58h+arg_28]
 * 00000001C019EAC4: mov     [rsp+58h+var_28], 4
 * 00000001C019EACD: mov     [rsp+58h+var_30], rax
 * 00000001C019EAD2: mov     rcx, rdi
 * 00000001C019EAD5: mov     [rsp+58h+var_38], bx
 * 00000001C019EADA: lea     r8d, [rdx+5]
 * 00000001C019EADE: call    cs:__imp_WppAutoLogTrace
 * 00000001C019EAE5: nop     dword ptr [rax+rax+00h]
 * 00000001C019EAEA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C019EAEF: add     rsp, 50h
 * 00000001C019EAF3: pop     rdi
 * 00000001C019EAF4: retn
 */
