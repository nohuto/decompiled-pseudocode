/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C0034E0C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0074588 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C0034E0C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0034E0C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0034E0C: mov     [rsp+arg_0], rbx
 * 00000001C0034E11: mov     [rsp+arg_8], rbp
 * 00000001C0034E16: mov     [rsp+arg_10], rsi
 * 00000001C0034E1B: push    rdi
 * 00000001C0034E1C: push    r14
 * 00000001C0034E1E: push    r15
 * 00000001C0034E20: sub     rsp, 50h
 * 00000001C0034E24: mov     r14d, r8d
 * 00000001C0034E27: mov     r15, rcx
 * 00000001C0034E2A: mov     edi, r8d
 * 00000001C0034E2D: shr     rdi, 10h
 * 00000001C0034E31: movzx   esi, dl
 * 00000001C0034E34: lea     ebx, [r14-1]
 * 00000001C0034E38: movzx   ebp, r9w
 * 00000001C0034E3C: mov     r10d, ebx
 * 00000001C0034E3F: and     ebx, 1Fh
 * 00000001C0034E42: shr     r10, 5
 * 00000001C0034E46: lea     rax, [rdi+rdi*4]
 * 00000001C0034E4A: and     r10d, 7FFh
 * 00000001C0034E51: mov     edx, ebx
 * 00000001C0034E53: mov     ebx, 4
 * 00000001C0034E58: lea     r11, [r10+rax*4]
 * 00000001C0034E5C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0034E63: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0034E68: bt      eax, edx
 * 00000001C0034E6B: jnb     short loc_1C0034EC5
 * 00000001C0034E6D: lea     rcx, [rdi+rdi*4]
 * 00000001C0034E71: add     rcx, rcx
 * 00000001C0034E74: cmp     [r10+rcx*8+29h], sil
 * 00000001C0034E79: jb      short loc_1C0034EC5
 * 00000001C0034E7B: and     [rsp+68h+var_28], 0
 * 00000001C0034E81: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0034E89: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0034E90: mov     r9d, ebp
 * 00000001C0034E93: mov     r8, [rsp+68h+arg_20]
 * 00000001C0034E9B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0034EA0: mov     [rsp+68h+var_30], rbx
 * 00000001C0034EA5: mov     [rsp+68h+var_38], rdx
 * 00000001C0034EAA: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0034EB2: mov     [rsp+68h+var_40], rbx
 * 00000001C0034EB7: mov     [rsp+68h+var_48], rdx
 * 00000001C0034EBC: lea     edx, [rbx+27h]
 * 00000001C0034EBF: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0034EC5: and     [rsp+68h+var_20], 0
 * 00000001C0034ECB: lea     rax, [rsp+68h+arg_30]
 * 00000001C0034ED3: mov     r9, [rsp+68h+arg_20]
 * 00000001C0034EDB: mov     r8d, r14d
 * 00000001C0034EDE: mov     [rsp+68h+var_28], rbx
 * 00000001C0034EE3: mov     edx, esi
 * 00000001C0034EE5: mov     [rsp+68h+var_30], rax
 * 00000001C0034EEA: mov     rcx, r15
 * 00000001C0034EED: lea     rax, [rsp+68h+arg_28]
 * 00000001C0034EF5: mov     [rsp+68h+var_38], rbx
 * 00000001C0034EFA: mov     [rsp+68h+var_40], rax
 * 00000001C0034EFF: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0034F04: call    cs:__imp_WppAutoLogTrace
 * 00000001C0034F0B: nop     dword ptr [rax+rax+00h]
 * 00000001C0034F10: lea     r11, [rsp+68h+var_18]
 * 00000001C0034F15: mov     rbx, [r11+20h]
 * 00000001C0034F19: mov     rbp, [r11+28h]
 * 00000001C0034F1D: mov     rsi, [r11+30h]
 * 00000001C0034F21: mov     rsp, r11
 * 00000001C0034F24: pop     r15
 * 00000001C0034F26: pop     r14
 * 00000001C0034F28: pop     rdi
 * 00000001C0034F29: retn
 */
