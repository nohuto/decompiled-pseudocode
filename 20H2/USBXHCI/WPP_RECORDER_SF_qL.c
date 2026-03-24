/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C002FE70
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     Controller_D0Exit @ 0x1C000B38C (Controller_D0Exit.c)
 *     Interrupter_D0ExitStopped @ 0x1C000B76C (Interrupter_D0ExitStopped.c)
 *     Interrupter_D0Entry @ 0x1C0014640 (Interrupter_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x1C002EAEC (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C002ED80 (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002F490 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C002FE70
 * Reason: Hex-Rays returned no pseudocode for 0x1C002FE70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002FE70: mov     [rsp+arg_0], rbx
 * 00000001C002FE75: mov     [rsp+arg_8], rbp
 * 00000001C002FE7A: mov     [rsp+arg_10], rsi
 * 00000001C002FE7F: push    rdi
 * 00000001C002FE80: push    r14
 * 00000001C002FE82: push    r15
 * 00000001C002FE84: sub     rsp, 50h
 * 00000001C002FE88: mov     r14d, r8d
 * 00000001C002FE8B: mov     r15, rcx
 * 00000001C002FE8E: mov     edi, r8d
 * 00000001C002FE91: shr     rdi, 10h
 * 00000001C002FE95: movzx   esi, dl
 * 00000001C002FE98: lea     ebx, [r14-1]
 * 00000001C002FE9C: movzx   ebp, r9w
 * 00000001C002FEA0: mov     r10d, ebx
 * 00000001C002FEA3: and     ebx, 1Fh
 * 00000001C002FEA6: shr     r10, 5
 * 00000001C002FEAA: lea     rax, [rdi+rdi*4]
 * 00000001C002FEAE: and     r10d, 7FFh
 * 00000001C002FEB5: mov     edx, ebx
 * 00000001C002FEB7: mov     ebx, 4
 * 00000001C002FEBC: lea     r11, [r10+rax*4]
 * 00000001C002FEC0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C002FEC7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C002FECC: bt      eax, edx
 * 00000001C002FECF: jnb     short loc_1C002FF2D
 * 00000001C002FED1: lea     rcx, [rdi+rdi*4]
 * 00000001C002FED5: add     rcx, rcx
 * 00000001C002FED8: cmp     [r10+rcx*8+29h], sil
 * 00000001C002FEDD: jb      short loc_1C002FF2D
 * 00000001C002FEDF: and     [rsp+68h+var_28], 0
 * 00000001C002FEE5: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002FEED: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C002FEF4: mov     r9d, ebp
 * 00000001C002FEF7: mov     r8, [rsp+68h+arg_20]
 * 00000001C002FEFF: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002FF04: mov     [rsp+68h+var_30], rbx
 * 00000001C002FF09: mov     [rsp+68h+var_38], rdx
 * 00000001C002FF0E: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002FF16: mov     [rsp+68h+var_40], 8
 * 00000001C002FF1F: mov     [rsp+68h+var_48], rdx
 * 00000001C002FF24: lea     edx, [rbx+27h]
 * 00000001C002FF27: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002FF2D: and     [rsp+68h+var_20], 0
 * 00000001C002FF33: lea     rax, [rsp+68h+arg_30]
 * 00000001C002FF3B: mov     r9, [rsp+68h+arg_20]
 * 00000001C002FF43: mov     r8d, r14d
 * 00000001C002FF46: mov     [rsp+68h+var_28], rbx
 * 00000001C002FF4B: mov     edx, esi
 * 00000001C002FF4D: mov     [rsp+68h+var_30], rax
 * 00000001C002FF52: mov     rcx, r15
 * 00000001C002FF55: lea     rax, [rsp+68h+arg_28]
 * 00000001C002FF5D: mov     [rsp+68h+var_38], 8
 * 00000001C002FF66: mov     [rsp+68h+var_40], rax
 * 00000001C002FF6B: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C002FF70: call    cs:__imp_WppAutoLogTrace
 * 00000001C002FF77: nop     dword ptr [rax+rax+00h]
 * 00000001C002FF7C: lea     r11, [rsp+68h+var_18]
 * 00000001C002FF81: mov     rbx, [r11+20h]
 * 00000001C002FF85: mov     rbp, [r11+28h]
 * 00000001C002FF89: mov     rsi, [r11+30h]
 * 00000001C002FF8D: mov     rsp, r11
 * 00000001C002FF90: pop     r15
 * 00000001C002FF92: pop     r14
 * 00000001C002FF94: pop     rdi
 * 00000001C002FF95: retn
 */
