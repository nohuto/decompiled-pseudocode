/*
 * XREFs of WPP_RECORDER_SF_DDqDD @ 0x1C00417A0
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDD @ 0x1C00417A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00417A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00417A0: mov     r11, rsp
 * 00000001C00417A3: mov     [r11+8], rbx
 * 00000001C00417A7: mov     [r11+10h], rsi
 * 00000001C00417AB: push    rdi
 * 00000001C00417AC: sub     rsp, 80h
 * 00000001C00417B3: mov     rdi, rcx
 * 00000001C00417B6: movzx   ebx, r9w
 * 00000001C00417BA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00417C1: mov     esi, 4
 * 00000001C00417C6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00417CD: jz      short loc_1C0041839
 * 00000001C00417CF: cmp     byte ptr [rcx+29h], 2
 * 00000001C00417D3: jb      short loc_1C0041839
 * 00000001C00417D5: and     qword ptr [r11-18h], 0
 * 00000001C00417DA: lea     rdx, [r11+50h]
 * 00000001C00417DE: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00417E5: mov     r9d, ebx
 * 00000001C00417E8: mov     r8, [rsp+88h+arg_20]
 * 00000001C00417F0: mov     rcx, [rcx+18h]
 * 00000001C00417F4: mov     [r11-20h], rsi
 * 00000001C00417F8: mov     [r11-28h], rdx
 * 00000001C00417FC: lea     rdx, [r11+48h]
 * 00000001C0041800: mov     [r11-30h], rsi
 * 00000001C0041804: mov     [r11-38h], rdx
 * 00000001C0041808: lea     rdx, [r11+40h]
 * 00000001C004180C: mov     qword ptr [r11-40h], 8
 * 00000001C0041814: mov     [r11-48h], rdx
 * 00000001C0041818: lea     rdx, [r11+38h]
 * 00000001C004181C: mov     [r11-50h], rsi
 * 00000001C0041820: mov     [r11-58h], rdx
 * 00000001C0041824: lea     rdx, [r11+30h]
 * 00000001C0041828: mov     [r11-60h], rsi
 * 00000001C004182C: mov     [r11-68h], rdx
 * 00000001C0041830: lea     edx, [rsi+27h]
 * 00000001C0041833: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0041839: and     [rsp+88h+var_10], 0
 * 00000001C004183F: lea     rax, [rsp+88h+arg_48]
 * 00000001C0041847: mov     r9, [rsp+88h+arg_20]
 * 00000001C004184F: mov     edx, 2
 * 00000001C0041854: mov     [rsp+88h+var_18], rsi
 * 00000001C0041859: mov     rcx, rdi
 * 00000001C004185C: mov     [rsp+88h+var_20], rax
 * 00000001C0041861: lea     rax, [rsp+88h+arg_40]
 * 00000001C0041869: mov     [rsp+88h+var_28], rsi
 * 00000001C004186E: mov     [rsp+88h+var_30], rax
 * 00000001C0041873: lea     r8d, [rdx+0Ch]
 * 00000001C0041877: mov     [rsp+88h+var_38], 8
 * 00000001C0041880: lea     rax, [rsp+88h+arg_38]
 * 00000001C0041888: mov     [rsp+88h+var_40], rax
 * 00000001C004188D: lea     rax, [rsp+88h+arg_30]
 * 00000001C0041895: mov     [rsp+88h+var_48], rsi
 * 00000001C004189A: mov     [rsp+88h+var_50], rax
 * 00000001C004189F: lea     rax, [rsp+88h+arg_28]
 * 00000001C00418A7: mov     [rsp+88h+var_58], rsi
 * 00000001C00418AC: mov     [rsp+88h+var_60], rax
 * 00000001C00418B1: mov     [rsp+88h+var_68], bx
 * 00000001C00418B6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00418BD: nop     dword ptr [rax+rax+00h]
 * 00000001C00418C2: lea     r11, [rsp+88h+var_8]
 * 00000001C00418CA: mov     rbx, [r11+10h]
 * 00000001C00418CE: mov     rsi, [r11+18h]
 * 00000001C00418D2: mov     rsp, r11
 * 00000001C00418D5: pop     rdi
 * 00000001C00418D6: retn
 */
