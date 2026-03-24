/*
 * XREFs of WPP_RECORDER_SF_Lq @ 0x1C01A4784
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019EAB0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lq @ 0x1C01A4784
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A4784
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A4784: mov     r11, rsp
 * 00000001C01A4787: mov     [r11+8], rbx
 * 00000001C01A478B: push    rdi
 * 00000001C01A478C: sub     rsp, 50h
 * 00000001C01A4790: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01A4797: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01A479E: movzx   ebx, r9w
 * 00000001C01A47A2: mov     eax, [rcx+2Ch]
 * 00000001C01A47A5: test    al, 40h
 * 00000001C01A47A7: jz      short loc_1C01A47F4
 * 00000001C01A47A9: cmp     byte ptr [rcx+29h], 2
 * 00000001C01A47AD: jb      short loc_1C01A47F4
 * 00000001C01A47AF: and     qword ptr [r11-18h], 0
 * 00000001C01A47B4: lea     rdx, [r11+38h]
 * 00000001C01A47B8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A47BF: lea     r8, WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids
 * 00000001C01A47C6: mov     rcx, [rcx+18h]
 * 00000001C01A47CA: mov     r9d, ebx
 * 00000001C01A47CD: mov     qword ptr [r11-20h], 8
 * 00000001C01A47D5: mov     [r11-28h], rdx
 * 00000001C01A47D9: lea     rdx, [r11+30h]
 * 00000001C01A47DD: mov     qword ptr [r11-30h], 4
 * 00000001C01A47E5: mov     [r11-38h], rdx
 * 00000001C01A47E9: mov     edx, 2Bh ; '+'
 * 00000001C01A47EE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A47F4: and     [rsp+58h+var_10], 0
 * 00000001C01A47FA: lea     rax, [rsp+58h+arg_30]
 * 00000001C01A4802: mov     [rsp+58h+var_18], 8
 * 00000001C01A480B: lea     r9, WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids
 * 00000001C01A4812: mov     [rsp+58h+var_20], rax
 * 00000001C01A4817: mov     edx, 2
 * 00000001C01A481C: lea     rax, [rsp+58h+arg_28]
 * 00000001C01A4824: mov     [rsp+58h+var_28], 4
 * 00000001C01A482D: mov     [rsp+58h+var_30], rax
 * 00000001C01A4832: mov     rcx, rdi
 * 00000001C01A4835: mov     [rsp+58h+var_38], bx
 * 00000001C01A483A: lea     r8d, [rdx+5]
 * 00000001C01A483E: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A4845: nop     dword ptr [rax+rax+00h]
 * 00000001C01A484A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A484F: add     rsp, 50h
 * 00000001C01A4853: pop     rdi
 * 00000001C01A4854: retn
 */
