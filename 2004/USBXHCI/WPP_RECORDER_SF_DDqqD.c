/*
 * XREFs of WPP_RECORDER_SF_ddqqD @ 0x1C003AD60
 * Callers:
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0039390 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqD @ 0x1C003AD60
 * Reason: Hex-Rays returned no pseudocode for 0x1C003AD60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003AD60: mov     r11, rsp
 * 00000001C003AD63: mov     [r11+8], rbx
 * 00000001C003AD67: mov     [r11+10h], rbp
 * 00000001C003AD6B: mov     [r11+18h], rsi
 * 00000001C003AD6F: push    rdi
 * 00000001C003AD70: sub     rsp, 80h
 * 00000001C003AD77: mov     edi, 4
 * 00000001C003AD7C: mov     rbx, rcx
 * 00000001C003AD7F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003AD86: lea     ebp, [rdi+70h]
 * 00000001C003AD89: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003AD90: lea     esi, [rdi+4]
 * 00000001C003AD93: jz      short loc_1C003ADFB
 * 00000001C003AD95: cmp     [rcx+29h], dil
 * 00000001C003AD99: jb      short loc_1C003ADFB
 * 00000001C003AD9B: and     qword ptr [r11-18h], 0
 * 00000001C003ADA0: lea     rdx, [r11+50h]
 * 00000001C003ADA4: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003ADAB: lea     r8, WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids
 * 00000001C003ADB2: mov     rcx, [rcx+18h]
 * 00000001C003ADB6: mov     [r11-20h], rdi
 * 00000001C003ADBA: mov     [r11-28h], rdx
 * 00000001C003ADBE: lea     rdx, [r11+48h]
 * 00000001C003ADC2: mov     [r11-30h], rsi
 * 00000001C003ADC6: mov     [r11-38h], rdx
 * 00000001C003ADCA: lea     rdx, [r11+40h]
 * 00000001C003ADCE: mov     [r11-40h], rsi
 * 00000001C003ADD2: mov     [r11-48h], rdx
 * 00000001C003ADD6: lea     rdx, [r11+38h]
 * 00000001C003ADDA: mov     [r11-50h], rdi
 * 00000001C003ADDE: mov     [r11-58h], rdx
 * 00000001C003ADE2: lea     rdx, [r11+30h]
 * 00000001C003ADE6: mov     [r11-60h], rdi
 * 00000001C003ADEA: mov     [r11-68h], rdx
 * 00000001C003ADEE: lea     edx, [rdi+27h]
 * 00000001C003ADF1: movzx   r9d, bp
 * 00000001C003ADF5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003ADFB: and     [rsp+88h+var_10], 0
 * 00000001C003AE01: lea     rax, [rsp+88h+arg_48]
 * 00000001C003AE09: mov     [rsp+88h+var_18], rdi
 * 00000001C003AE0E: lea     r9, WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids
 * 00000001C003AE15: mov     [rsp+88h+var_20], rax
 * 00000001C003AE1A: mov     r8d, 0Dh
 * 00000001C003AE20: mov     [rsp+88h+var_28], rsi
 * 00000001C003AE25: lea     rax, [rsp+88h+arg_40]
 * 00000001C003AE2D: mov     [rsp+88h+var_30], rax
 * 00000001C003AE32: mov     edx, edi
 * 00000001C003AE34: mov     [rsp+88h+var_38], rsi
 * 00000001C003AE39: lea     rax, [rsp+88h+arg_38]
 * 00000001C003AE41: mov     [rsp+88h+var_40], rax
 * 00000001C003AE46: mov     rcx, rbx
 * 00000001C003AE49: mov     [rsp+88h+var_48], rdi
 * 00000001C003AE4E: lea     rax, [rsp+88h+arg_30]
 * 00000001C003AE56: mov     [rsp+88h+var_50], rax
 * 00000001C003AE5B: lea     rax, [rsp+88h+arg_28]
 * 00000001C003AE63: mov     [rsp+88h+var_58], rdi
 * 00000001C003AE68: mov     [rsp+88h+var_60], rax
 * 00000001C003AE6D: mov     [rsp+88h+var_68], bp
 * 00000001C003AE72: call    cs:__imp_WppAutoLogTrace
 * 00000001C003AE79: nop     dword ptr [rax+rax+00h]
 * 00000001C003AE7E: lea     r11, [rsp+88h+var_8]
 * 00000001C003AE86: mov     rbx, [r11+10h]
 * 00000001C003AE8A: mov     rbp, [r11+18h]
 * 00000001C003AE8E: mov     rsi, [r11+20h]
 * 00000001C003AE92: mov     rsp, r11
 * 00000001C003AE95: pop     rdi
 * 00000001C003AE96: retn
 */
