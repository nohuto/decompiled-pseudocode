/*
 * XREFs of WPP_RECORDER_SF_DDqD @ 0x1C004167C
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0041A64 (Isoch_CompleteStaleTransfers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqD @ 0x1C004167C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004167C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004167C: mov     r11, rsp
 * 00000001C004167F: mov     [r11+8], rbx
 * 00000001C0041683: mov     [r11+10h], rbp
 * 00000001C0041687: mov     [r11+18h], rsi
 * 00000001C004168B: push    rdi
 * 00000001C004168C: sub     rsp, 70h
 * 00000001C0041690: mov     rsi, rcx
 * 00000001C0041693: movzx   edi, r9w
 * 00000001C0041697: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004169E: mov     ebp, 4
 * 00000001C00416A3: movzx   ebx, dl
 * 00000001C00416A6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00416AD: jz      short loc_1C004170C
 * 00000001C00416AF: cmp     [rcx+29h], bl
 * 00000001C00416B2: jb      short loc_1C004170C
 * 00000001C00416B4: and     qword ptr [r11-18h], 0
 * 00000001C00416B9: lea     rdx, [r11+48h]
 * 00000001C00416BD: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00416C4: mov     r9d, edi
 * 00000001C00416C7: mov     r8, [rsp+78h+arg_20]
 * 00000001C00416CF: mov     rcx, [rcx+18h]
 * 00000001C00416D3: mov     [r11-20h], rbp
 * 00000001C00416D7: mov     [r11-28h], rdx
 * 00000001C00416DB: lea     rdx, [r11+40h]
 * 00000001C00416DF: mov     qword ptr [r11-30h], 8
 * 00000001C00416E7: mov     [r11-38h], rdx
 * 00000001C00416EB: lea     rdx, [r11+38h]
 * 00000001C00416EF: mov     [r11-40h], rbp
 * 00000001C00416F3: mov     [r11-48h], rdx
 * 00000001C00416F7: lea     rdx, [r11+30h]
 * 00000001C00416FB: mov     [r11-50h], rbp
 * 00000001C00416FF: mov     [r11-58h], rdx
 * 00000001C0041703: lea     edx, [rbp+27h]
 * 00000001C0041706: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004170C: and     [rsp+78h+var_10], 0
 * 00000001C0041712: lea     rax, [rsp+78h+arg_40]
 * 00000001C004171A: mov     r9, [rsp+78h+arg_20]
 * 00000001C0041722: mov     r8d, 0Eh
 * 00000001C0041728: mov     [rsp+78h+var_18], rbp
 * 00000001C004172D: mov     edx, ebx
 * 00000001C004172F: mov     [rsp+78h+var_20], rax
 * 00000001C0041734: mov     rcx, rsi
 * 00000001C0041737: mov     [rsp+78h+var_28], 8
 * 00000001C0041740: lea     rax, [rsp+78h+arg_38]
 * 00000001C0041748: mov     [rsp+78h+var_30], rax
 * 00000001C004174D: lea     rax, [rsp+78h+arg_30]
 * 00000001C0041755: mov     [rsp+78h+var_38], rbp
 * 00000001C004175A: mov     [rsp+78h+var_40], rax
 * 00000001C004175F: lea     rax, [rsp+78h+arg_28]
 * 00000001C0041767: mov     [rsp+78h+var_48], rbp
 * 00000001C004176C: mov     [rsp+78h+var_50], rax
 * 00000001C0041771: mov     [rsp+78h+var_58], di
 * 00000001C0041776: call    cs:__imp_WppAutoLogTrace
 * 00000001C004177D: nop     dword ptr [rax+rax+00h]
 * 00000001C0041782: lea     r11, [rsp+78h+var_8]
 * 00000001C0041787: mov     rbx, [r11+10h]
 * 00000001C004178B: mov     rbp, [r11+18h]
 * 00000001C004178F: mov     rsi, [r11+20h]
 * 00000001C0041793: mov     rsp, r11
 * 00000001C0041796: pop     rdi
 * 00000001C0041797: retn
 */
