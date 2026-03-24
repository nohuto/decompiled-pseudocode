/*
 * XREFs of WPP_RECORDER_SF_DDqD @ 0x1C004019C
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0040584 (Isoch_CompleteStaleTransfers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqD @ 0x1C004019C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004019C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004019C: mov     r11, rsp
 * 00000001C004019F: mov     [r11+8], rbx
 * 00000001C00401A3: mov     [r11+10h], rbp
 * 00000001C00401A7: mov     [r11+18h], rsi
 * 00000001C00401AB: push    rdi
 * 00000001C00401AC: sub     rsp, 70h
 * 00000001C00401B0: mov     rsi, rcx
 * 00000001C00401B3: movzx   edi, r9w
 * 00000001C00401B7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00401BE: mov     ebp, 4
 * 00000001C00401C3: movzx   ebx, dl
 * 00000001C00401C6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00401CD: jz      short loc_1C004022C
 * 00000001C00401CF: cmp     [rcx+29h], bl
 * 00000001C00401D2: jb      short loc_1C004022C
 * 00000001C00401D4: and     qword ptr [r11-18h], 0
 * 00000001C00401D9: lea     rdx, [r11+48h]
 * 00000001C00401DD: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00401E4: mov     r9d, edi
 * 00000001C00401E7: mov     r8, [rsp+78h+arg_20]
 * 00000001C00401EF: mov     rcx, [rcx+18h]
 * 00000001C00401F3: mov     [r11-20h], rbp
 * 00000001C00401F7: mov     [r11-28h], rdx
 * 00000001C00401FB: lea     rdx, [r11+40h]
 * 00000001C00401FF: mov     qword ptr [r11-30h], 8
 * 00000001C0040207: mov     [r11-38h], rdx
 * 00000001C004020B: lea     rdx, [r11+38h]
 * 00000001C004020F: mov     [r11-40h], rbp
 * 00000001C0040213: mov     [r11-48h], rdx
 * 00000001C0040217: lea     rdx, [r11+30h]
 * 00000001C004021B: mov     [r11-50h], rbp
 * 00000001C004021F: mov     [r11-58h], rdx
 * 00000001C0040223: lea     edx, [rbp+27h]
 * 00000001C0040226: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004022C: and     [rsp+78h+var_10], 0
 * 00000001C0040232: lea     rax, [rsp+78h+arg_40]
 * 00000001C004023A: mov     r9, [rsp+78h+arg_20]
 * 00000001C0040242: mov     r8d, 0Eh
 * 00000001C0040248: mov     [rsp+78h+var_18], rbp
 * 00000001C004024D: mov     edx, ebx
 * 00000001C004024F: mov     [rsp+78h+var_20], rax
 * 00000001C0040254: mov     rcx, rsi
 * 00000001C0040257: mov     [rsp+78h+var_28], 8
 * 00000001C0040260: lea     rax, [rsp+78h+arg_38]
 * 00000001C0040268: mov     [rsp+78h+var_30], rax
 * 00000001C004026D: lea     rax, [rsp+78h+arg_30]
 * 00000001C0040275: mov     [rsp+78h+var_38], rbp
 * 00000001C004027A: mov     [rsp+78h+var_40], rax
 * 00000001C004027F: lea     rax, [rsp+78h+arg_28]
 * 00000001C0040287: mov     [rsp+78h+var_48], rbp
 * 00000001C004028C: mov     [rsp+78h+var_50], rax
 * 00000001C0040291: mov     [rsp+78h+var_58], di
 * 00000001C0040296: call    cs:__imp_WppAutoLogTrace
 * 00000001C004029D: nop     dword ptr [rax+rax+00h]
 * 00000001C00402A2: lea     r11, [rsp+78h+var_8]
 * 00000001C00402A7: mov     rbx, [r11+10h]
 * 00000001C00402AB: mov     rbp, [r11+18h]
 * 00000001C00402AF: mov     rsi, [r11+20h]
 * 00000001C00402B3: mov     rsp, r11
 * 00000001C00402B6: pop     rdi
 * 00000001C00402B7: retn
 */
