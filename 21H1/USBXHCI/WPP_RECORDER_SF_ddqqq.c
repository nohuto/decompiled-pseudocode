/*
 * XREFs of WPP_RECORDER_SF_ddqqq @ 0x1C003AEA0
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C0037CB0 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C0037E40 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqq @ 0x1C003AEA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C003AEA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003AEA0: mov     r11, rsp
 * 00000001C003AEA3: mov     [r11+8], rbx
 * 00000001C003AEA7: mov     [r11+10h], rbp
 * 00000001C003AEAB: mov     [r11+18h], rsi
 * 00000001C003AEAF: push    rdi
 * 00000001C003AEB0: sub     rsp, 80h
 * 00000001C003AEB7: mov     rdi, rcx
 * 00000001C003AEBA: movzx   ebx, r9w
 * 00000001C003AEBE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003AEC5: mov     esi, 4
 * 00000001C003AECA: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003AED1: lea     ebp, [rsi+4]
 * 00000001C003AED4: jz      short loc_1C003AF3B
 * 00000001C003AED6: cmp     [rcx+29h], sil
 * 00000001C003AEDA: jb      short loc_1C003AF3B
 * 00000001C003AEDC: and     qword ptr [r11-18h], 0
 * 00000001C003AEE1: lea     rdx, [r11+50h]
 * 00000001C003AEE5: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003AEEC: lea     r8, WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids
 * 00000001C003AEF3: mov     rcx, [rcx+18h]
 * 00000001C003AEF7: mov     r9d, ebx
 * 00000001C003AEFA: mov     [r11-20h], rbp
 * 00000001C003AEFE: mov     [r11-28h], rdx
 * 00000001C003AF02: lea     rdx, [r11+48h]
 * 00000001C003AF06: mov     [r11-30h], rbp
 * 00000001C003AF0A: mov     [r11-38h], rdx
 * 00000001C003AF0E: lea     rdx, [r11+40h]
 * 00000001C003AF12: mov     [r11-40h], rbp
 * 00000001C003AF16: mov     [r11-48h], rdx
 * 00000001C003AF1A: lea     rdx, [r11+38h]
 * 00000001C003AF1E: mov     [r11-50h], rsi
 * 00000001C003AF22: mov     [r11-58h], rdx
 * 00000001C003AF26: lea     rdx, [r11+30h]
 * 00000001C003AF2A: mov     [r11-60h], rsi
 * 00000001C003AF2E: mov     [r11-68h], rdx
 * 00000001C003AF32: lea     edx, [rsi+27h]
 * 00000001C003AF35: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003AF3B: and     [rsp+88h+var_10], 0
 * 00000001C003AF41: lea     rax, [rsp+88h+arg_48]
 * 00000001C003AF49: mov     [rsp+88h+var_18], rbp
 * 00000001C003AF4E: lea     r9, WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids
 * 00000001C003AF55: mov     [rsp+88h+var_20], rax
 * 00000001C003AF5A: mov     r8d, 0Dh
 * 00000001C003AF60: mov     [rsp+88h+var_28], rbp
 * 00000001C003AF65: lea     rax, [rsp+88h+arg_40]
 * 00000001C003AF6D: mov     [rsp+88h+var_30], rax
 * 00000001C003AF72: mov     edx, esi
 * 00000001C003AF74: mov     [rsp+88h+var_38], rbp
 * 00000001C003AF79: lea     rax, [rsp+88h+arg_38]
 * 00000001C003AF81: mov     [rsp+88h+var_40], rax
 * 00000001C003AF86: mov     rcx, rdi
 * 00000001C003AF89: mov     [rsp+88h+var_48], rsi
 * 00000001C003AF8E: lea     rax, [rsp+88h+arg_30]
 * 00000001C003AF96: mov     [rsp+88h+var_50], rax
 * 00000001C003AF9B: lea     rax, [rsp+88h+arg_28]
 * 00000001C003AFA3: mov     [rsp+88h+var_58], rsi
 * 00000001C003AFA8: mov     [rsp+88h+var_60], rax
 * 00000001C003AFAD: mov     [rsp+88h+var_68], bx
 * 00000001C003AFB2: call    cs:__imp_WppAutoLogTrace
 * 00000001C003AFB9: nop     dword ptr [rax+rax+00h]
 * 00000001C003AFBE: lea     r11, [rsp+88h+var_8]
 * 00000001C003AFC6: mov     rbx, [r11+10h]
 * 00000001C003AFCA: mov     rbp, [r11+18h]
 * 00000001C003AFCE: mov     rsi, [r11+20h]
 * 00000001C003AFD2: mov     rsp, r11
 * 00000001C003AFD5: pop     rdi
 * 00000001C003AFD6: retn
 */
