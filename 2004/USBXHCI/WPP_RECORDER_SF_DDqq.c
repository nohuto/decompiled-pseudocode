/*
 * XREFs of WPP_RECORDER_SF_ddqq @ 0x1C0046FCC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqq @ 0x1C0046FCC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046FCC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046FCC: mov     r11, rsp
 * 00000001C0046FCF: mov     [r11+8], rbx
 * 00000001C0046FD3: mov     [r11+10h], rbp
 * 00000001C0046FD7: mov     [r11+18h], rsi
 * 00000001C0046FDB: push    rdi
 * 00000001C0046FDC: sub     rsp, 70h
 * 00000001C0046FE0: mov     ebp, 42h ; 'B'
 * 00000001C0046FE5: mov     rbx, rcx
 * 00000001C0046FE8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046FEF: lea     edi, [rbp-3Ah]
 * 00000001C0046FF2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0046FF9: lea     esi, [rbp-3Eh]
 * 00000001C0046FFC: jz      short loc_1C0047058
 * 00000001C0046FFE: cmp     byte ptr [rcx+29h], 5
 * 00000001C0047002: jb      short loc_1C0047058
 * 00000001C0047004: and     qword ptr [r11-18h], 0
 * 00000001C0047009: lea     rdx, [r11+48h]
 * 00000001C004700D: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0047014: lea     r8, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C004701B: mov     rcx, [rcx+18h]
 * 00000001C004701F: mov     [r11-20h], rdi
 * 00000001C0047023: mov     [r11-28h], rdx
 * 00000001C0047027: lea     rdx, [r11+40h]
 * 00000001C004702B: mov     [r11-30h], rdi
 * 00000001C004702F: mov     [r11-38h], rdx
 * 00000001C0047033: lea     rdx, [r11+38h]
 * 00000001C0047037: mov     [r11-40h], rsi
 * 00000001C004703B: mov     [r11-48h], rdx
 * 00000001C004703F: lea     rdx, [r11+30h]
 * 00000001C0047043: mov     [r11-50h], rsi
 * 00000001C0047047: mov     [r11-58h], rdx
 * 00000001C004704B: lea     edx, [rbp-17h]
 * 00000001C004704E: movzx   r9d, bp
 * 00000001C0047052: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047058: and     [rsp+78h+var_10], 0
 * 00000001C004705E: lea     rax, [rsp+78h+arg_40]
 * 00000001C0047066: mov     [rsp+78h+var_18], rdi
 * 00000001C004706B: lea     r9, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0047072: mov     [rsp+78h+var_20], rax
 * 00000001C0047077: mov     edx, 5
 * 00000001C004707C: mov     [rsp+78h+var_28], rdi
 * 00000001C0047081: lea     rax, [rsp+78h+arg_38]
 * 00000001C0047089: mov     [rsp+78h+var_30], rax
 * 00000001C004708E: mov     rcx, rbx
 * 00000001C0047091: mov     [rsp+78h+var_38], rsi
 * 00000001C0047096: lea     rax, [rsp+78h+arg_30]
 * 00000001C004709E: mov     [rsp+78h+var_40], rax
 * 00000001C00470A3: lea     r8d, [rdx+7]
 * 00000001C00470A7: lea     rax, [rsp+78h+arg_28]
 * 00000001C00470AF: mov     [rsp+78h+var_48], rsi
 * 00000001C00470B4: mov     [rsp+78h+var_50], rax
 * 00000001C00470B9: mov     [rsp+78h+var_58], bp
 * 00000001C00470BE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00470C5: nop     dword ptr [rax+rax+00h]
 * 00000001C00470CA: lea     r11, [rsp+78h+var_8]
 * 00000001C00470CF: mov     rbx, [r11+10h]
 * 00000001C00470D3: mov     rbp, [r11+18h]
 * 00000001C00470D7: mov     rsi, [r11+20h]
 * 00000001C00470DB: mov     rsp, r11
 * 00000001C00470DE: pop     rdi
 * 00000001C00470DF: retn
 */
