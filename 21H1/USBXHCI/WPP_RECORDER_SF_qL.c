/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C002E990
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006588 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     Controller_D0Exit @ 0x1C000AABC (Controller_D0Exit.c)
 *     Interrupter_D0ExitStopped @ 0x1C000AE9C (Interrupter_D0ExitStopped.c)
 *     Interrupter_D0Entry @ 0x1C0013718 (Interrupter_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x1C002D62C (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C002D8C0 (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C002E990
 * Reason: Hex-Rays returned no pseudocode for 0x1C002E990
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002E990: mov     [rsp+arg_0], rbx
 * 00000001C002E995: mov     [rsp+arg_8], rbp
 * 00000001C002E99A: mov     [rsp+arg_10], rsi
 * 00000001C002E99F: push    rdi
 * 00000001C002E9A0: push    r14
 * 00000001C002E9A2: push    r15
 * 00000001C002E9A4: sub     rsp, 50h
 * 00000001C002E9A8: mov     r14d, r8d
 * 00000001C002E9AB: mov     r15, rcx
 * 00000001C002E9AE: mov     edi, r8d
 * 00000001C002E9B1: shr     rdi, 10h
 * 00000001C002E9B5: movzx   esi, dl
 * 00000001C002E9B8: lea     ebx, [r14-1]
 * 00000001C002E9BC: movzx   ebp, r9w
 * 00000001C002E9C0: mov     r10d, ebx
 * 00000001C002E9C3: and     ebx, 1Fh
 * 00000001C002E9C6: shr     r10, 5
 * 00000001C002E9CA: lea     rax, [rdi+rdi*4]
 * 00000001C002E9CE: and     r10d, 7FFh
 * 00000001C002E9D5: mov     edx, ebx
 * 00000001C002E9D7: mov     ebx, 4
 * 00000001C002E9DC: lea     r11, [r10+rax*4]
 * 00000001C002E9E0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C002E9E7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C002E9EC: bt      eax, edx
 * 00000001C002E9EF: jnb     short loc_1C002EA4D
 * 00000001C002E9F1: lea     rcx, [rdi+rdi*4]
 * 00000001C002E9F5: add     rcx, rcx
 * 00000001C002E9F8: cmp     [r10+rcx*8+29h], sil
 * 00000001C002E9FD: jb      short loc_1C002EA4D
 * 00000001C002E9FF: and     [rsp+68h+var_28], 0
 * 00000001C002EA05: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002EA0D: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002EA14: mov     r9d, ebp
 * 00000001C002EA17: mov     r8, [rsp+68h+arg_20]
 * 00000001C002EA1F: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002EA24: mov     [rsp+68h+var_30], rbx
 * 00000001C002EA29: mov     [rsp+68h+var_38], rdx
 * 00000001C002EA2E: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002EA36: mov     [rsp+68h+var_40], 8
 * 00000001C002EA3F: mov     [rsp+68h+var_48], rdx
 * 00000001C002EA44: lea     edx, [rbx+27h]
 * 00000001C002EA47: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002EA4D: and     [rsp+68h+var_20], 0
 * 00000001C002EA53: lea     rax, [rsp+68h+arg_30]
 * 00000001C002EA5B: mov     r9, [rsp+68h+arg_20]
 * 00000001C002EA63: mov     r8d, r14d
 * 00000001C002EA66: mov     [rsp+68h+var_28], rbx
 * 00000001C002EA6B: mov     edx, esi
 * 00000001C002EA6D: mov     [rsp+68h+var_30], rax
 * 00000001C002EA72: mov     rcx, r15
 * 00000001C002EA75: lea     rax, [rsp+68h+arg_28]
 * 00000001C002EA7D: mov     [rsp+68h+var_38], 8
 * 00000001C002EA86: mov     [rsp+68h+var_40], rax
 * 00000001C002EA8B: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C002EA90: call    cs:__imp_WppAutoLogTrace
 * 00000001C002EA97: nop     dword ptr [rax+rax+00h]
 * 00000001C002EA9C: lea     r11, [rsp+68h+var_18]
 * 00000001C002EAA1: mov     rbx, [r11+20h]
 * 00000001C002EAA5: mov     rbp, [r11+28h]
 * 00000001C002EAA9: mov     rsi, [r11+30h]
 * 00000001C002EAAD: mov     rsp, r11
 * 00000001C002EAB0: pop     r15
 * 00000001C002EAB2: pop     r14
 * 00000001C002EAB4: pop     rdi
 * 00000001C002EAB5: retn
 */
