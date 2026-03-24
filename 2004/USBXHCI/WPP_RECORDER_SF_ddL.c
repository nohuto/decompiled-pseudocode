/*
 * XREFs of WPP_RECORDER_SF_DDL @ 0x1C0042C7C
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C0041124 (Isoch_ProcessSegment.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0041708 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDL @ 0x1C0042C7C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0042C7C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0042C7C: mov     r11, rsp
 * 00000001C0042C7F: mov     [r11+8], rbx
 * 00000001C0042C83: mov     [r11+10h], rbp
 * 00000001C0042C87: mov     [r11+18h], rsi
 * 00000001C0042C8B: push    rdi
 * 00000001C0042C8C: sub     rsp, 60h
 * 00000001C0042C90: mov     rsi, rcx
 * 00000001C0042C93: movzx   edi, r9w
 * 00000001C0042C97: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0042C9E: mov     ebp, 4
 * 00000001C0042CA3: movzx   ebx, dl
 * 00000001C0042CA6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0042CAD: jz      short loc_1C0042CFB
 * 00000001C0042CAF: cmp     [rcx+29h], bl
 * 00000001C0042CB2: jb      short loc_1C0042CFB
 * 00000001C0042CB4: and     qword ptr [r11-18h], 0
 * 00000001C0042CB9: lea     rdx, [r11+40h]
 * 00000001C0042CBD: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0042CC4: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042CCB: mov     rcx, [rcx+18h]
 * 00000001C0042CCF: mov     r9d, edi
 * 00000001C0042CD2: mov     [r11-20h], rbp
 * 00000001C0042CD6: mov     [r11-28h], rdx
 * 00000001C0042CDA: lea     rdx, [r11+38h]
 * 00000001C0042CDE: mov     [r11-30h], rbp
 * 00000001C0042CE2: mov     [r11-38h], rdx
 * 00000001C0042CE6: lea     rdx, [r11+30h]
 * 00000001C0042CEA: mov     [r11-40h], rbp
 * 00000001C0042CEE: mov     [r11-48h], rdx
 * 00000001C0042CF2: lea     edx, [rbp+27h]
 * 00000001C0042CF5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042CFB: and     [rsp+68h+var_10], 0
 * 00000001C0042D01: lea     rax, [rsp+68h+arg_38]
 * 00000001C0042D09: mov     [rsp+68h+var_18], rbp
 * 00000001C0042D0E: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042D15: mov     [rsp+68h+var_20], rax
 * 00000001C0042D1A: mov     r8d, 0Eh
 * 00000001C0042D20: mov     [rsp+68h+var_28], rbp
 * 00000001C0042D25: lea     rax, [rsp+68h+arg_30]
 * 00000001C0042D2D: mov     [rsp+68h+var_30], rax
 * 00000001C0042D32: mov     edx, ebx
 * 00000001C0042D34: lea     rax, [rsp+68h+arg_28]
 * 00000001C0042D3C: mov     [rsp+68h+var_38], rbp
 * 00000001C0042D41: mov     [rsp+68h+var_40], rax
 * 00000001C0042D46: mov     rcx, rsi
 * 00000001C0042D49: mov     [rsp+68h+var_48], di
 * 00000001C0042D4E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0042D55: nop     dword ptr [rax+rax+00h]
 * 00000001C0042D5A: lea     r11, [rsp+68h+var_8]
 * 00000001C0042D5F: mov     rbx, [r11+10h]
 * 00000001C0042D63: mov     rbp, [r11+18h]
 * 00000001C0042D67: mov     rsi, [r11+20h]
 * 00000001C0042D6B: mov     rsp, r11
 * 00000001C0042D6E: pop     rdi
 * 00000001C0042D6F: retn
 */
