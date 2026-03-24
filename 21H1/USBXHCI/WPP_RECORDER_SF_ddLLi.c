/*
 * XREFs of WPP_RECORDER_SF_ddLLi @ 0x1C000F4BC
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C000F3B0 (Endpoint_OnCancelStopCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddLLi @ 0x1C000F4BC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F4BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F4BC: mov     [rsp+arg_0], rbx
 * 00000001C000F4C1: mov     [rsp+arg_8], rbp
 * 00000001C000F4C6: push    rdi
 * 00000001C000F4C7: sub     rsp, 80h
 * 00000001C000F4CE: mov     rbx, rcx
 * 00000001C000F4D1: mov     edi, 4
 * 00000001C000F4D6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000F4DD: lea     ebp, [rdi+49h]
 * 00000001C000F4E0: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C000F4E7: jnz     loc_1C002017A
 * 00000001C000F4ED: and     [rsp+88h+var_10], 0
 * 00000001C000F4F3: lea     rax, [rsp+88h+arg_48]
 * 00000001C000F4FB: mov     [rsp+88h+var_18], 8
 * 00000001C000F504: lea     r9, WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids
 * 00000001C000F50B: mov     [rsp+88h+var_20], rax
 * 00000001C000F510: mov     r8d, 0Dh
 * 00000001C000F516: mov     [rsp+88h+var_28], rdi
 * 00000001C000F51B: lea     rax, [rsp+88h+arg_40]
 * 00000001C000F523: mov     [rsp+88h+var_30], rax
 * 00000001C000F528: mov     edx, edi
 * 00000001C000F52A: mov     [rsp+88h+var_38], rdi
 * 00000001C000F52F: lea     rax, [rsp+88h+arg_38]
 * 00000001C000F537: mov     [rsp+88h+var_40], rax
 * 00000001C000F53C: mov     rcx, rbx
 * 00000001C000F53F: mov     [rsp+88h+var_48], rdi
 * 00000001C000F544: lea     rax, [rsp+88h+arg_30]
 * 00000001C000F54C: mov     [rsp+88h+var_50], rax
 * 00000001C000F551: lea     rax, [rsp+88h+arg_28]
 * 00000001C000F559: mov     [rsp+88h+var_58], rdi
 * 00000001C000F55E: mov     [rsp+88h+var_60], rax
 * 00000001C000F563: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C000F568: call    cs:__imp_WppAutoLogTrace
 * 00000001C000F56F: nop     dword ptr [rax+rax+00h]
 * 00000001C000F574: lea     r11, [rsp+88h+var_8]
 * 00000001C000F57C: mov     rbx, [r11+10h]
 * 00000001C000F580: mov     rbp, [r11+18h]
 * 00000001C000F584: mov     rsp, r11
 * 00000001C000F587: pop     rdi
 * 00000001C000F588: retn
 * 00000001C002017A: cmp     [rcx+29h], dil
 * 00000001C002017E: jb      loc_1C000F4ED
 * 00000001C0020184: and     [rsp+88h+var_18], 0
 * 00000001C002018A: lea     rdx, [rsp+88h+arg_48]
 * 00000001C0020192: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0020199: lea     r8, WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids
 * 00000001C00201A0: mov     rcx, [rcx+18h]
 * 00000001C00201A4: mov     [rsp+88h+var_20], 8
 * 00000001C00201AD: mov     [rsp+88h+var_28], rdx
 * 00000001C00201B2: lea     rdx, [rsp+88h+arg_40]
 * 00000001C00201BA: mov     [rsp+88h+var_30], rdi
 * 00000001C00201BF: mov     [rsp+88h+var_38], rdx
 * 00000001C00201C4: lea     rdx, [rsp+88h+arg_38]
 * 00000001C00201CC: mov     [rsp+88h+var_40], rdi
 * 00000001C00201D1: mov     [rsp+88h+var_48], rdx
 * 00000001C00201D6: lea     rdx, [rsp+88h+arg_30]
 * 00000001C00201DE: mov     [rsp+88h+var_50], rdi
 * 00000001C00201E3: mov     [rsp+88h+var_58], rdx
 * 00000001C00201E8: lea     rdx, [rsp+88h+arg_28]
 * 00000001C00201F0: mov     [rsp+88h+var_60], rdi
 * 00000001C00201F5: mov     [rsp+88h+var_68], rdx
 * 00000001C00201FA: mov     edx, 2Bh ; '+'
 * 00000001C00201FF: movzx   r9d, bp
 * 00000001C0020203: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0020209: nop
 * 00000001C002020A: jmp     loc_1C000F4ED
 */
