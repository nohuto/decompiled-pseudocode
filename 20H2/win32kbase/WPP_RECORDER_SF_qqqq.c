/*
 * XREFs of WPP_RECORDER_SF_qqqq @ 0x1C0023F98
 * Callers:
 *     RIMReadInput @ 0x1C0026620 (RIMReadInput.c)
 *     rimSignalReadComplete @ 0x1C0175050 (rimSignalReadComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqq @ 0x1C0023F98
 * Reason: Hex-Rays returned no pseudocode for 0x1C0023F98
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0023F98: mov     [rsp+arg_0], rbx
 * 00000001C0023F9D: mov     [rsp+arg_8], rbp
 * 00000001C0023FA2: mov     [rsp+arg_10], rsi
 * 00000001C0023FA7: push    rdi
 * 00000001C0023FA8: sub     rsp, 70h
 * 00000001C0023FAC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0023FB3: mov     ebp, 8
 * 00000001C0023FB8: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0023FBF: movzx   edi, r9w
 * 00000001C0023FC3: movzx   ebx, dl
 * 00000001C0023FC6: mov     eax, [rcx+2Ch]
 * 00000001C0023FC9: test    al, 1
 * 00000001C0023FCB: jnz     loc_1C00E334C
 * 00000001C0023FD1: and     [rsp+78h+var_10], 0
 * 00000001C0023FD7: lea     rax, [rsp+78h+arg_40]
 * 00000001C0023FDF: mov     r9, [rsp+78h+arg_20]
 * 00000001C0023FE7: mov     r8d, 1
 * 00000001C0023FED: mov     [rsp+78h+var_18], rbp
 * 00000001C0023FF2: mov     edx, ebx
 * 00000001C0023FF4: mov     [rsp+78h+var_20], rax
 * 00000001C0023FF9: mov     rcx, rsi
 * 00000001C0023FFC: mov     [rsp+78h+var_28], rbp
 * 00000001C0024001: lea     rax, [rsp+78h+arg_38]
 * 00000001C0024009: mov     [rsp+78h+var_30], rax
 * 00000001C002400E: lea     rax, [rsp+78h+arg_30]
 * 00000001C0024016: mov     [rsp+78h+var_38], rbp
 * 00000001C002401B: mov     [rsp+78h+var_40], rax
 * 00000001C0024020: lea     rax, [rsp+78h+arg_28]
 * 00000001C0024028: mov     [rsp+78h+var_48], rbp
 * 00000001C002402D: mov     [rsp+78h+var_50], rax
 * 00000001C0024032: mov     word ptr [rsp+78h+var_58], di
 * 00000001C0024037: call    cs:__imp_WppAutoLogTrace
 * 00000001C002403E: nop     dword ptr [rax+rax+00h]
 * 00000001C0024043: lea     r11, [rsp+78h+var_8]
 * 00000001C0024048: mov     rbx, [r11+10h]
 * 00000001C002404C: mov     rbp, [r11+18h]
 * 00000001C0024050: mov     rsi, [r11+20h]
 * 00000001C0024054: mov     rsp, r11
 * 00000001C0024057: pop     rdi
 * 00000001C0024058: retn
 * 00000001C00E334C: cmp     [rcx+29h], bl
 * 00000001C00E334F: jb      loc_1C0023FD1
 * 00000001C00E3355: and     [rsp+78h+var_18], 0
 * 00000001C00E335B: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00E3363: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00E336A: mov     r9d, edi
 * 00000001C00E336D: mov     r8, [rsp+78h+arg_20]
 * 00000001C00E3375: mov     rcx, [rcx+18h]
 * 00000001C00E3379: mov     [rsp+78h+var_20], rbp
 * 00000001C00E337E: mov     [rsp+78h+var_28], rdx
 * 00000001C00E3383: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00E338B: mov     [rsp+78h+var_30], rbp
 * 00000001C00E3390: mov     [rsp+78h+var_38], rdx
 * 00000001C00E3395: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00E339D: mov     [rsp+78h+var_40], rbp
 * 00000001C00E33A2: mov     [rsp+78h+var_48], rdx
 * 00000001C00E33A7: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00E33AF: mov     [rsp+78h+var_50], rbp
 * 00000001C00E33B4: mov     [rsp+78h+var_58], rdx
 * 00000001C00E33B9: mov     edx, 2Bh ; '+'
 * 00000001C00E33BE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00E33C4: nop
 * 00000001C00E33C5: jmp     loc_1C0023FD1
 */
