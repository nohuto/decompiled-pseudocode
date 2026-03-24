/*
 * XREFs of WPP_RECORDER_SF_DDDi @ 0x1C0045B80
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C00453D8 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDi @ 0x1C0045B80
 * Reason: Hex-Rays returned no pseudocode for 0x1C0045B80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0045B80: mov     r11, rsp
 * 00000001C0045B83: mov     [r11+8], rbx
 * 00000001C0045B87: mov     [r11+10h], rbp
 * 00000001C0045B8B: mov     [r11+18h], rsi
 * 00000001C0045B8F: push    rdi
 * 00000001C0045B90: sub     rsp, 70h
 * 00000001C0045B94: mov     rsi, rcx
 * 00000001C0045B97: movzx   edi, r9w
 * 00000001C0045B9B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0045BA2: mov     ebp, 4
 * 00000001C0045BA7: movzx   ebx, dl
 * 00000001C0045BAA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0045BB1: jz      short loc_1C0045C0F
 * 00000001C0045BB3: cmp     [rcx+29h], bl
 * 00000001C0045BB6: jb      short loc_1C0045C0F
 * 00000001C0045BB8: and     qword ptr [r11-18h], 0
 * 00000001C0045BBD: lea     rdx, [r11+48h]
 * 00000001C0045BC1: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0045BC8: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0045BCF: mov     rcx, [rcx+18h]
 * 00000001C0045BD3: mov     r9d, edi
 * 00000001C0045BD6: mov     qword ptr [r11-20h], 8
 * 00000001C0045BDE: mov     [r11-28h], rdx
 * 00000001C0045BE2: lea     rdx, [r11+40h]
 * 00000001C0045BE6: mov     [r11-30h], rbp
 * 00000001C0045BEA: mov     [r11-38h], rdx
 * 00000001C0045BEE: lea     rdx, [r11+38h]
 * 00000001C0045BF2: mov     [r11-40h], rbp
 * 00000001C0045BF6: mov     [r11-48h], rdx
 * 00000001C0045BFA: lea     rdx, [r11+30h]
 * 00000001C0045BFE: mov     [r11-50h], rbp
 * 00000001C0045C02: mov     [r11-58h], rdx
 * 00000001C0045C06: lea     edx, [rbp+27h]
 * 00000001C0045C09: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045C0F: and     [rsp+78h+var_10], 0
 * 00000001C0045C15: lea     rax, [rsp+78h+arg_40]
 * 00000001C0045C1D: mov     [rsp+78h+var_18], 8
 * 00000001C0045C26: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0045C2D: mov     [rsp+78h+var_20], rax
 * 00000001C0045C32: mov     r8d, 0Eh
 * 00000001C0045C38: mov     [rsp+78h+var_28], rbp
 * 00000001C0045C3D: lea     rax, [rsp+78h+arg_38]
 * 00000001C0045C45: mov     [rsp+78h+var_30], rax
 * 00000001C0045C4A: mov     edx, ebx
 * 00000001C0045C4C: mov     [rsp+78h+var_38], rbp
 * 00000001C0045C51: lea     rax, [rsp+78h+arg_30]
 * 00000001C0045C59: mov     [rsp+78h+var_40], rax
 * 00000001C0045C5E: mov     rcx, rsi
 * 00000001C0045C61: lea     rax, [rsp+78h+arg_28]
 * 00000001C0045C69: mov     [rsp+78h+var_48], rbp
 * 00000001C0045C6E: mov     [rsp+78h+var_50], rax
 * 00000001C0045C73: mov     [rsp+78h+var_58], di
 * 00000001C0045C78: call    cs:__imp_WppAutoLogTrace
 * 00000001C0045C7F: nop     dword ptr [rax+rax+00h]
 * 00000001C0045C84: lea     r11, [rsp+78h+var_8]
 * 00000001C0045C89: mov     rbx, [r11+10h]
 * 00000001C0045C8D: mov     rbp, [r11+18h]
 * 00000001C0045C91: mov     rsi, [r11+20h]
 * 00000001C0045C95: mov     rsp, r11
 * 00000001C0045C98: pop     rdi
 * 00000001C0045C99: retn
 */
