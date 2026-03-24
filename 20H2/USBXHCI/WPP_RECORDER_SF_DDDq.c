/*
 * XREFs of WPP_RECORDER_SF_DDDq @ 0x1C000C774
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x1C000C600 (Bulk_WdfEvtRequestCancel.c)
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDq @ 0x1C000C774
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C774
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C774: mov     [rsp+arg_0], rbx
 * 00000001C000C779: mov     [rsp+arg_8], rbp
 * 00000001C000C77E: mov     [rsp+arg_10], rsi
 * 00000001C000C783: push    rdi
 * 00000001C000C784: sub     rsp, 70h
 * 00000001C000C788: mov     rsi, rcx
 * 00000001C000C78B: movzx   edi, r9w
 * 00000001C000C78F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000C796: mov     ebp, 4
 * 00000001C000C79B: movzx   ebx, dl
 * 00000001C000C79E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000C7A5: jnz     loc_1C001F112
 * 00000001C000C7AB: and     [rsp+78h+var_10], 0
 * 00000001C000C7B1: lea     rax, [rsp+78h+arg_40]
 * 00000001C000C7B9: mov     [rsp+78h+var_18], 8
 * 00000001C000C7C2: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C000C7C9: mov     [rsp+78h+var_20], rax
 * 00000001C000C7CE: mov     r8d, 0Eh
 * 00000001C000C7D4: mov     [rsp+78h+var_28], rbp
 * 00000001C000C7D9: lea     rax, [rsp+78h+arg_38]
 * 00000001C000C7E1: mov     [rsp+78h+var_30], rax
 * 00000001C000C7E6: mov     edx, ebx
 * 00000001C000C7E8: mov     [rsp+78h+var_38], rbp
 * 00000001C000C7ED: lea     rax, [rsp+78h+arg_30]
 * 00000001C000C7F5: mov     [rsp+78h+var_40], rax
 * 00000001C000C7FA: mov     rcx, rsi
 * 00000001C000C7FD: lea     rax, [rsp+78h+arg_28]
 * 00000001C000C805: mov     [rsp+78h+var_48], rbp
 * 00000001C000C80A: mov     [rsp+78h+var_50], rax
 * 00000001C000C80F: mov     word ptr [rsp+78h+var_58], di
 * 00000001C000C814: call    cs:__imp_WppAutoLogTrace
 * 00000001C000C81B: nop     dword ptr [rax+rax+00h]
 * 00000001C000C820: lea     r11, [rsp+78h+var_8]
 * 00000001C000C825: mov     rbx, [r11+10h]
 * 00000001C000C829: mov     rbp, [r11+18h]
 * 00000001C000C82D: mov     rsi, [r11+20h]
 * 00000001C000C831: mov     rsp, r11
 * 00000001C000C834: pop     rdi
 * 00000001C000C835: retn
 * 00000001C001F112: cmp     [rcx+29h], bl
 * 00000001C001F115: jb      loc_1C000C7AB
 * 00000001C001F11B: and     [rsp+78h+var_18], 0
 * 00000001C001F121: lea     rdx, [rsp+78h+arg_40]
 * 00000001C001F129: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C001F130: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C001F137: mov     rcx, [rcx+18h]
 * 00000001C001F13B: mov     r9d, edi
 * 00000001C001F13E: mov     [rsp+78h+var_20], 8
 * 00000001C001F147: mov     [rsp+78h+var_28], rdx
 * 00000001C001F14C: lea     rdx, [rsp+78h+arg_38]
 * 00000001C001F154: mov     [rsp+78h+var_30], rbp
 * 00000001C001F159: mov     [rsp+78h+var_38], rdx
 * 00000001C001F15E: lea     rdx, [rsp+78h+arg_30]
 * 00000001C001F166: mov     [rsp+78h+var_40], rbp
 * 00000001C001F16B: mov     [rsp+78h+var_48], rdx
 * 00000001C001F170: lea     rdx, [rsp+78h+arg_28]
 * 00000001C001F178: mov     [rsp+78h+var_50], rbp
 * 00000001C001F17D: mov     [rsp+78h+var_58], rdx
 * 00000001C001F182: mov     edx, 2Bh ; '+'
 * 00000001C001F187: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001F18D: nop
 * 00000001C001F18E: jmp     loc_1C000C7AB
 */
