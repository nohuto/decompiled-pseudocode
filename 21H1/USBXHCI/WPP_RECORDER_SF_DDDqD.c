/*
 * XREFs of WPP_RECORDER_SF_DDDqd @ 0x1C0044978
 * Callers:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000B854 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_CompleteTransfers @ 0x1C000BA20 (Bulk_CompleteTransfers.c)
 *     Bulk_RetrieveNextStage @ 0x1C000C480 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqd @ 0x1C0044978
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044978
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044978: mov     r11, rsp
 * 00000001C004497B: mov     [r11+8], rbx
 * 00000001C004497F: mov     [r11+10h], rbp
 * 00000001C0044983: mov     [r11+18h], rsi
 * 00000001C0044987: push    rdi
 * 00000001C0044988: sub     rsp, 80h
 * 00000001C004498F: mov     rsi, rcx
 * 00000001C0044992: movzx   edi, r9w
 * 00000001C0044996: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004499D: mov     ebp, 4
 * 00000001C00449A2: movzx   ebx, dl
 * 00000001C00449A5: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00449AC: jz      short loc_1C0044A16
 * 00000001C00449AE: cmp     [rcx+29h], bl
 * 00000001C00449B1: jb      short loc_1C0044A16
 * 00000001C00449B3: and     qword ptr [r11-18h], 0
 * 00000001C00449B8: lea     rdx, [r11+50h]
 * 00000001C00449BC: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00449C3: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C00449CA: mov     rcx, [rcx+18h]
 * 00000001C00449CE: mov     r9d, edi
 * 00000001C00449D1: mov     [r11-20h], rbp
 * 00000001C00449D5: mov     [r11-28h], rdx
 * 00000001C00449D9: lea     rdx, [r11+48h]
 * 00000001C00449DD: mov     qword ptr [r11-30h], 8
 * 00000001C00449E5: mov     [r11-38h], rdx
 * 00000001C00449E9: lea     rdx, [r11+40h]
 * 00000001C00449ED: mov     [r11-40h], rbp
 * 00000001C00449F1: mov     [r11-48h], rdx
 * 00000001C00449F5: lea     rdx, [r11+38h]
 * 00000001C00449F9: mov     [r11-50h], rbp
 * 00000001C00449FD: mov     [r11-58h], rdx
 * 00000001C0044A01: lea     rdx, [r11+30h]
 * 00000001C0044A05: mov     [r11-60h], rbp
 * 00000001C0044A09: mov     [r11-68h], rdx
 * 00000001C0044A0D: lea     edx, [rbp+27h]
 * 00000001C0044A10: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0044A16: and     [rsp+88h+var_10], 0
 * 00000001C0044A1C: lea     rax, [rsp+88h+arg_48]
 * 00000001C0044A24: mov     [rsp+88h+var_18], rbp
 * 00000001C0044A29: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044A30: mov     [rsp+88h+var_20], rax
 * 00000001C0044A35: mov     r8d, 0Eh
 * 00000001C0044A3B: mov     [rsp+88h+var_28], 8
 * 00000001C0044A44: lea     rax, [rsp+88h+arg_40]
 * 00000001C0044A4C: mov     [rsp+88h+var_30], rax
 * 00000001C0044A51: mov     edx, ebx
 * 00000001C0044A53: mov     [rsp+88h+var_38], rbp
 * 00000001C0044A58: lea     rax, [rsp+88h+arg_38]
 * 00000001C0044A60: mov     [rsp+88h+var_40], rax
 * 00000001C0044A65: mov     rcx, rsi
 * 00000001C0044A68: mov     [rsp+88h+var_48], rbp
 * 00000001C0044A6D: lea     rax, [rsp+88h+arg_30]
 * 00000001C0044A75: mov     [rsp+88h+var_50], rax
 * 00000001C0044A7A: lea     rax, [rsp+88h+arg_28]
 * 00000001C0044A82: mov     [rsp+88h+var_58], rbp
 * 00000001C0044A87: mov     [rsp+88h+var_60], rax
 * 00000001C0044A8C: mov     [rsp+88h+var_68], di
 * 00000001C0044A91: call    cs:__imp_WppAutoLogTrace
 * 00000001C0044A98: nop     dword ptr [rax+rax+00h]
 * 00000001C0044A9D: lea     r11, [rsp+88h+var_8]
 * 00000001C0044AA5: mov     rbx, [r11+10h]
 * 00000001C0044AA9: mov     rbp, [r11+18h]
 * 00000001C0044AAD: mov     rsi, [r11+20h]
 * 00000001C0044AB1: mov     rsp, r11
 * 00000001C0044AB4: pop     rdi
 * 00000001C0044AB5: retn
 */
