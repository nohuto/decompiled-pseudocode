/*
 * XREFs of WPP_RECORDER_SF_qdi @ 0x1C000ECFC
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000EC04 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdi @ 0x1C000ECFC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000ECFC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000ECFC: mov     [rsp+arg_0], rbx
 * 00000001C000ED01: mov     [rsp+arg_8], rbp
 * 00000001C000ED06: push    rsi
 * 00000001C000ED07: sub     rsp, 60h
 * 00000001C000ED0B: mov     rbx, rcx
 * 00000001C000ED0E: mov     ebp, 0Bh
 * 00000001C000ED13: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000ED1A: lea     esi, [rbp-3]
 * 00000001C000ED1D: test    dword ptr [rcx+2Ch], 200h
 * 00000001C000ED24: jnz     loc_1C001F610
 * 00000001C000ED2A: and     [rsp+68h+var_10], 0
 * 00000001C000ED30: lea     rax, [rsp+68h+arg_38]
 * 00000001C000ED38: mov     [rsp+68h+var_18], rsi
 * 00000001C000ED3D: lea     r9, WPP_57b4ec5b2a77395746dfb5e96c966fbd_Traceguids
 * 00000001C000ED44: mov     [rsp+68h+var_20], rax
 * 00000001C000ED49: mov     edx, 4
 * 00000001C000ED4E: mov     [rsp+68h+var_28], 4
 * 00000001C000ED57: lea     rax, [rsp+68h+arg_30]
 * 00000001C000ED5F: mov     [rsp+68h+var_30], rax
 * 00000001C000ED64: mov     rcx, rbx
 * 00000001C000ED67: lea     rax, [rsp+68h+arg_28]
 * 00000001C000ED6F: mov     [rsp+68h+var_38], rsi
 * 00000001C000ED74: mov     [rsp+68h+var_40], rax
 * 00000001C000ED79: lea     r8d, [rdx+6]
 * 00000001C000ED7D: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C000ED82: call    cs:__imp_WppAutoLogTrace
 * 00000001C000ED89: nop     dword ptr [rax+rax+00h]
 * 00000001C000ED8E: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000ED93: mov     rbp, [rsp+68h+arg_8]
 * 00000001C000ED98: add     rsp, 60h
 * 00000001C000ED9C: pop     rsi
 * 00000001C000ED9D: retn
 * 00000001C001F610: cmp     byte ptr [rcx+29h], 4
 * 00000001C001F614: jb      loc_1C000ED2A
 * 00000001C001F61A: and     [rsp+68h+var_18], 0
 * 00000001C001F620: lea     rdx, [rsp+68h+arg_38]
 * 00000001C001F628: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001F62F: lea     r8, WPP_57b4ec5b2a77395746dfb5e96c966fbd_Traceguids
 * 00000001C001F636: mov     rcx, [rcx+18h]
 * 00000001C001F63A: mov     [rsp+68h+var_20], rsi
 * 00000001C001F63F: mov     [rsp+68h+var_28], rdx
 * 00000001C001F644: lea     rdx, [rsp+68h+arg_30]
 * 00000001C001F64C: mov     [rsp+68h+var_30], 4
 * 00000001C001F655: mov     [rsp+68h+var_38], rdx
 * 00000001C001F65A: lea     rdx, [rsp+68h+arg_28]
 * 00000001C001F662: mov     [rsp+68h+var_40], rsi
 * 00000001C001F667: mov     [rsp+68h+var_48], rdx
 * 00000001C001F66C: mov     edx, 2Bh ; '+'
 * 00000001C001F671: movzx   r9d, bp
 * 00000001C001F675: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001F67B: nop
 * 00000001C001F67C: jmp     loc_1C000ED2A
 */
