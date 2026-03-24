/*
 * XREFs of WPP_RECORDER_SF_DDDi @ 0x1C0044690
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000B5E4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0043EE8 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDi @ 0x1C0044690
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044690
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044690: mov     r11, rsp
 * 00000001C0044693: mov     [r11+8], rbx
 * 00000001C0044697: mov     [r11+10h], rbp
 * 00000001C004469B: mov     [r11+18h], rsi
 * 00000001C004469F: push    rdi
 * 00000001C00446A0: sub     rsp, 70h
 * 00000001C00446A4: mov     rsi, rcx
 * 00000001C00446A7: movzx   edi, r9w
 * 00000001C00446AB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00446B2: mov     ebp, 4
 * 00000001C00446B7: movzx   ebx, dl
 * 00000001C00446BA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00446C1: jz      short loc_1C004471F
 * 00000001C00446C3: cmp     [rcx+29h], bl
 * 00000001C00446C6: jb      short loc_1C004471F
 * 00000001C00446C8: and     qword ptr [r11-18h], 0
 * 00000001C00446CD: lea     rdx, [r11+48h]
 * 00000001C00446D1: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00446D8: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C00446DF: mov     rcx, [rcx+18h]
 * 00000001C00446E3: mov     r9d, edi
 * 00000001C00446E6: mov     qword ptr [r11-20h], 8
 * 00000001C00446EE: mov     [r11-28h], rdx
 * 00000001C00446F2: lea     rdx, [r11+40h]
 * 00000001C00446F6: mov     [r11-30h], rbp
 * 00000001C00446FA: mov     [r11-38h], rdx
 * 00000001C00446FE: lea     rdx, [r11+38h]
 * 00000001C0044702: mov     [r11-40h], rbp
 * 00000001C0044706: mov     [r11-48h], rdx
 * 00000001C004470A: lea     rdx, [r11+30h]
 * 00000001C004470E: mov     [r11-50h], rbp
 * 00000001C0044712: mov     [r11-58h], rdx
 * 00000001C0044716: lea     edx, [rbp+27h]
 * 00000001C0044719: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004471F: and     [rsp+78h+var_10], 0
 * 00000001C0044725: lea     rax, [rsp+78h+arg_40]
 * 00000001C004472D: mov     [rsp+78h+var_18], 8
 * 00000001C0044736: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C004473D: mov     [rsp+78h+var_20], rax
 * 00000001C0044742: mov     r8d, 0Eh
 * 00000001C0044748: mov     [rsp+78h+var_28], rbp
 * 00000001C004474D: lea     rax, [rsp+78h+arg_38]
 * 00000001C0044755: mov     [rsp+78h+var_30], rax
 * 00000001C004475A: mov     edx, ebx
 * 00000001C004475C: mov     [rsp+78h+var_38], rbp
 * 00000001C0044761: lea     rax, [rsp+78h+arg_30]
 * 00000001C0044769: mov     [rsp+78h+var_40], rax
 * 00000001C004476E: mov     rcx, rsi
 * 00000001C0044771: lea     rax, [rsp+78h+arg_28]
 * 00000001C0044779: mov     [rsp+78h+var_48], rbp
 * 00000001C004477E: mov     [rsp+78h+var_50], rax
 * 00000001C0044783: mov     [rsp+78h+var_58], di
 * 00000001C0044788: call    cs:__imp_WppAutoLogTrace
 * 00000001C004478F: nop     dword ptr [rax+rax+00h]
 * 00000001C0044794: lea     r11, [rsp+78h+var_8]
 * 00000001C0044799: mov     rbx, [r11+10h]
 * 00000001C004479D: mov     rbp, [r11+18h]
 * 00000001C00447A1: mov     rsi, [r11+20h]
 * 00000001C00447A5: mov     rsp, r11
 * 00000001C00447A8: pop     rdi
 * 00000001C00447A9: retn
 */
