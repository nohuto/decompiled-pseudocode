/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C00362EC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0075A58 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C00362EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00362EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00362EC: mov     [rsp+arg_0], rbx
 * 00000001C00362F1: mov     [rsp+arg_8], rbp
 * 00000001C00362F6: mov     [rsp+arg_10], rsi
 * 00000001C00362FB: push    rdi
 * 00000001C00362FC: push    r14
 * 00000001C00362FE: push    r15
 * 00000001C0036300: sub     rsp, 50h
 * 00000001C0036304: mov     r14d, r8d
 * 00000001C0036307: mov     r15, rcx
 * 00000001C003630A: mov     edi, r8d
 * 00000001C003630D: shr     rdi, 10h
 * 00000001C0036311: movzx   esi, dl
 * 00000001C0036314: lea     ebx, [r14-1]
 * 00000001C0036318: movzx   ebp, r9w
 * 00000001C003631C: mov     r10d, ebx
 * 00000001C003631F: and     ebx, 1Fh
 * 00000001C0036322: shr     r10, 5
 * 00000001C0036326: lea     rax, [rdi+rdi*4]
 * 00000001C003632A: and     r10d, 7FFh
 * 00000001C0036331: mov     edx, ebx
 * 00000001C0036333: mov     ebx, 4
 * 00000001C0036338: lea     r11, [r10+rax*4]
 * 00000001C003633C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0036343: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0036348: bt      eax, edx
 * 00000001C003634B: jnb     short loc_1C00363A5
 * 00000001C003634D: lea     rcx, [rdi+rdi*4]
 * 00000001C0036351: add     rcx, rcx
 * 00000001C0036354: cmp     [r10+rcx*8+29h], sil
 * 00000001C0036359: jb      short loc_1C00363A5
 * 00000001C003635B: and     [rsp+68h+var_28], 0
 * 00000001C0036361: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0036369: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0036370: mov     r9d, ebp
 * 00000001C0036373: mov     r8, [rsp+68h+arg_20]
 * 00000001C003637B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0036380: mov     [rsp+68h+var_30], rbx
 * 00000001C0036385: mov     [rsp+68h+var_38], rdx
 * 00000001C003638A: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0036392: mov     [rsp+68h+var_40], rbx
 * 00000001C0036397: mov     [rsp+68h+var_48], rdx
 * 00000001C003639C: lea     edx, [rbx+27h]
 * 00000001C003639F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00363A5: and     [rsp+68h+var_20], 0
 * 00000001C00363AB: lea     rax, [rsp+68h+arg_30]
 * 00000001C00363B3: mov     r9, [rsp+68h+arg_20]
 * 00000001C00363BB: mov     r8d, r14d
 * 00000001C00363BE: mov     [rsp+68h+var_28], rbx
 * 00000001C00363C3: mov     edx, esi
 * 00000001C00363C5: mov     [rsp+68h+var_30], rax
 * 00000001C00363CA: mov     rcx, r15
 * 00000001C00363CD: lea     rax, [rsp+68h+arg_28]
 * 00000001C00363D5: mov     [rsp+68h+var_38], rbx
 * 00000001C00363DA: mov     [rsp+68h+var_40], rax
 * 00000001C00363DF: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00363E4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00363EB: nop     dword ptr [rax+rax+00h]
 * 00000001C00363F0: lea     r11, [rsp+68h+var_18]
 * 00000001C00363F5: mov     rbx, [r11+20h]
 * 00000001C00363F9: mov     rbp, [r11+28h]
 * 00000001C00363FD: mov     rsi, [r11+30h]
 * 00000001C0036401: mov     rsp, r11
 * 00000001C0036404: pop     r15
 * 00000001C0036406: pop     r14
 * 00000001C0036408: pop     rdi
 * 00000001C0036409: retn
 */
