/*
 * XREFs of WPP_RECORDER_SF_DDDDL @ 0x1C0042A38
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C0041124 (Isoch_ProcessSegment.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDL @ 0x1C0042A38
 * Reason: Hex-Rays returned no pseudocode for 0x1C0042A38
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0042A38: mov     r11, rsp
 * 00000001C0042A3B: mov     [r11+8], rbx
 * 00000001C0042A3F: mov     [r11+10h], rsi
 * 00000001C0042A43: push    rdi
 * 00000001C0042A44: sub     rsp, 80h
 * 00000001C0042A4B: mov     rbx, rcx
 * 00000001C0042A4E: mov     esi, 1Dh
 * 00000001C0042A53: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0042A5A: lea     edi, [rsi-19h]
 * 00000001C0042A5D: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0042A64: jz      short loc_1C0042ACC
 * 00000001C0042A66: cmp     byte ptr [rcx+29h], 2
 * 00000001C0042A6A: jb      short loc_1C0042ACC
 * 00000001C0042A6C: and     qword ptr [r11-18h], 0
 * 00000001C0042A71: lea     rdx, [r11+50h]
 * 00000001C0042A75: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0042A7C: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042A83: mov     rcx, [rcx+18h]
 * 00000001C0042A87: mov     [r11-20h], rdi
 * 00000001C0042A8B: mov     [r11-28h], rdx
 * 00000001C0042A8F: lea     rdx, [r11+48h]
 * 00000001C0042A93: mov     [r11-30h], rdi
 * 00000001C0042A97: mov     [r11-38h], rdx
 * 00000001C0042A9B: lea     rdx, [r11+40h]
 * 00000001C0042A9F: mov     [r11-40h], rdi
 * 00000001C0042AA3: mov     [r11-48h], rdx
 * 00000001C0042AA7: lea     rdx, [r11+38h]
 * 00000001C0042AAB: mov     [r11-50h], rdi
 * 00000001C0042AAF: mov     [r11-58h], rdx
 * 00000001C0042AB3: lea     rdx, [r11+30h]
 * 00000001C0042AB7: mov     [r11-60h], rdi
 * 00000001C0042ABB: mov     [r11-68h], rdx
 * 00000001C0042ABF: lea     edx, [rsi+0Eh]
 * 00000001C0042AC2: movzx   r9d, si
 * 00000001C0042AC6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042ACC: and     [rsp+88h+var_10], 0
 * 00000001C0042AD2: lea     rax, [rsp+88h+arg_48]
 * 00000001C0042ADA: mov     [rsp+88h+var_18], rdi
 * 00000001C0042ADF: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042AE6: mov     [rsp+88h+var_20], rax
 * 00000001C0042AEB: mov     edx, 2
 * 00000001C0042AF0: mov     [rsp+88h+var_28], rdi
 * 00000001C0042AF5: lea     rax, [rsp+88h+arg_40]
 * 00000001C0042AFD: mov     [rsp+88h+var_30], rax
 * 00000001C0042B02: mov     rcx, rbx
 * 00000001C0042B05: mov     [rsp+88h+var_38], rdi
 * 00000001C0042B0A: lea     rax, [rsp+88h+arg_38]
 * 00000001C0042B12: mov     [rsp+88h+var_40], rax
 * 00000001C0042B17: lea     r8d, [rdx+0Ch]
 * 00000001C0042B1B: mov     [rsp+88h+var_48], rdi
 * 00000001C0042B20: lea     rax, [rsp+88h+arg_30]
 * 00000001C0042B28: mov     [rsp+88h+var_50], rax
 * 00000001C0042B2D: lea     rax, [rsp+88h+arg_28]
 * 00000001C0042B35: mov     [rsp+88h+var_58], rdi
 * 00000001C0042B3A: mov     [rsp+88h+var_60], rax
 * 00000001C0042B3F: mov     [rsp+88h+var_68], si
 * 00000001C0042B44: call    cs:__imp_WppAutoLogTrace
 * 00000001C0042B4B: nop     dword ptr [rax+rax+00h]
 * 00000001C0042B50: lea     r11, [rsp+88h+var_8]
 * 00000001C0042B58: mov     rbx, [r11+10h]
 * 00000001C0042B5C: mov     rsi, [r11+18h]
 * 00000001C0042B60: mov     rsp, r11
 * 00000001C0042B63: pop     rdi
 * 00000001C0042B64: retn
 */
