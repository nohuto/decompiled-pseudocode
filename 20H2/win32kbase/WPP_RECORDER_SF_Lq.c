/*
 * XREFs of WPP_RECORDER_SF_Lq @ 0x1C019C524
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0196890 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AA68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lq @ 0x1C019C524
 * Reason: Hex-Rays returned no pseudocode for 0x1C019C524
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C019C524: mov     r11, rsp
 * 00000001C019C527: mov     [r11+8], rbx
 * 00000001C019C52B: push    rdi
 * 00000001C019C52C: sub     rsp, 50h
 * 00000001C019C530: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C019C537: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C019C53E: movzx   ebx, r9w
 * 00000001C019C542: mov     eax, [rcx+2Ch]
 * 00000001C019C545: test    al, 40h
 * 00000001C019C547: jz      short loc_1C019C594
 * 00000001C019C549: cmp     byte ptr [rcx+29h], 2
 * 00000001C019C54D: jb      short loc_1C019C594
 * 00000001C019C54F: and     qword ptr [r11-18h], 0
 * 00000001C019C554: lea     rdx, [r11+38h]
 * 00000001C019C558: mov     rax, cs:pfnWppTraceMessage
 * 00000001C019C55F: lea     r8, WPP_50814762fbc63e38c7e5eacf83347307_Traceguids
 * 00000001C019C566: mov     rcx, [rcx+18h]
 * 00000001C019C56A: mov     r9d, ebx
 * 00000001C019C56D: mov     qword ptr [r11-20h], 8
 * 00000001C019C575: mov     [r11-28h], rdx
 * 00000001C019C579: lea     rdx, [r11+30h]
 * 00000001C019C57D: mov     qword ptr [r11-30h], 4
 * 00000001C019C585: mov     [r11-38h], rdx
 * 00000001C019C589: mov     edx, 2Bh ; '+'
 * 00000001C019C58E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C019C594: and     [rsp+58h+var_10], 0
 * 00000001C019C59A: lea     rax, [rsp+58h+arg_30]
 * 00000001C019C5A2: mov     [rsp+58h+var_18], 8
 * 00000001C019C5AB: lea     r9, WPP_50814762fbc63e38c7e5eacf83347307_Traceguids
 * 00000001C019C5B2: mov     [rsp+58h+var_20], rax
 * 00000001C019C5B7: mov     edx, 2
 * 00000001C019C5BC: lea     rax, [rsp+58h+arg_28]
 * 00000001C019C5C4: mov     [rsp+58h+var_28], 4
 * 00000001C019C5CD: mov     [rsp+58h+var_30], rax
 * 00000001C019C5D2: mov     rcx, rdi
 * 00000001C019C5D5: mov     [rsp+58h+var_38], bx
 * 00000001C019C5DA: lea     r8d, [rdx+5]
 * 00000001C019C5DE: call    cs:__imp_WppAutoLogTrace
 * 00000001C019C5E5: nop     dword ptr [rax+rax+00h]
 * 00000001C019C5EA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C019C5EF: add     rsp, 50h
 * 00000001C019C5F3: pop     rdi
 * 00000001C019C5F4: retn
 */
