/*
 * XREFs of WPP_RECORDER_SF_dqqd @ 0x1C00074EC
 * Callers:
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00073CC (UsbDevice_CompleteConfigureEndpointRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqd @ 0x1C00074EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00074EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00074EC: mov     [rsp+arg_0], rbx
 * 00000001C00074F1: mov     [rsp+arg_8], rbp
 * 00000001C00074F6: mov     [rsp+arg_10], rsi
 * 00000001C00074FB: push    rdi
 * 00000001C00074FC: sub     rsp, 70h
 * 00000001C0007500: mov     edi, 4
 * 00000001C0007505: mov     rbx, rcx
 * 00000001C0007508: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000750F: lea     ebp, [rdi+1Ch]
 * 00000001C0007512: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0007519: lea     esi, [rdi+4]
 * 00000001C000751C: jnz     loc_1C0022C16
 * 00000001C0007522: and     [rsp+78h+var_10], 0
 * 00000001C0007528: lea     rax, [rsp+78h+arg_40]
 * 00000001C0007530: mov     [rsp+78h+var_18], rdi
 * 00000001C0007535: lea     r9, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C000753C: mov     [rsp+78h+var_20], rax
 * 00000001C0007541: mov     r8d, 0Ch
 * 00000001C0007547: mov     [rsp+78h+var_28], rsi
 * 00000001C000754C: lea     rax, [rsp+78h+arg_38]
 * 00000001C0007554: mov     [rsp+78h+var_30], rax
 * 00000001C0007559: mov     edx, edi
 * 00000001C000755B: mov     [rsp+78h+var_38], rsi
 * 00000001C0007560: lea     rax, [rsp+78h+arg_30]
 * 00000001C0007568: mov     [rsp+78h+var_40], rax
 * 00000001C000756D: mov     rcx, rbx
 * 00000001C0007570: lea     rax, [rsp+78h+arg_28]
 * 00000001C0007578: mov     [rsp+78h+var_48], rdi
 * 00000001C000757D: mov     [rsp+78h+var_50], rax
 * 00000001C0007582: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0007587: call    cs:__imp_WppAutoLogTrace
 * 00000001C000758E: nop     dword ptr [rax+rax+00h]
 * 00000001C0007593: lea     r11, [rsp+78h+var_8]
 * 00000001C0007598: mov     rbx, [r11+10h]
 * 00000001C000759C: mov     rbp, [r11+18h]
 * 00000001C00075A0: mov     rsi, [r11+20h]
 * 00000001C00075A4: mov     rsp, r11
 * 00000001C00075A7: pop     rdi
 * 00000001C00075A8: retn
 * 00000001C0022C16: cmp     [rcx+29h], dil
 * 00000001C0022C1A: jb      loc_1C0007522
 * 00000001C0022C20: and     [rsp+78h+var_18], 0
 * 00000001C0022C26: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0022C2E: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0022C35: lea     r8, WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids
 * 00000001C0022C3C: mov     rcx, [rcx+18h]
 * 00000001C0022C40: mov     [rsp+78h+var_20], rdi
 * 00000001C0022C45: mov     [rsp+78h+var_28], rdx
 * 00000001C0022C4A: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0022C52: mov     [rsp+78h+var_30], rsi
 * 00000001C0022C57: mov     [rsp+78h+var_38], rdx
 * 00000001C0022C5C: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0022C64: mov     [rsp+78h+var_40], rsi
 * 00000001C0022C69: mov     [rsp+78h+var_48], rdx
 * 00000001C0022C6E: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0022C76: mov     [rsp+78h+var_50], rdi
 * 00000001C0022C7B: mov     [rsp+78h+var_58], rdx
 * 00000001C0022C80: mov     edx, 2Bh ; '+'
 * 00000001C0022C85: movzx   r9d, bp
 * 00000001C0022C89: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0022C8F: nop
 * 00000001C0022C90: jmp     loc_1C0007522
 */
