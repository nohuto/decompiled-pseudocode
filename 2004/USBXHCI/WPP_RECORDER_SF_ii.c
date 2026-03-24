/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1C0034D38
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033400 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0033870 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0033EB0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_II @ 0x1C0034D38
 * Reason: Hex-Rays returned no pseudocode for 0x1C0034D38
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0034D38: mov     r11, rsp
 * 00000001C0034D3B: mov     [r11+8], rbx
 * 00000001C0034D3F: mov     [r11+10h], rsi
 * 00000001C0034D43: push    rdi
 * 00000001C0034D44: sub     rsp, 50h
 * 00000001C0034D48: mov     rdi, rcx
 * 00000001C0034D4B: movzx   ebx, r9w
 * 00000001C0034D4F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0034D56: mov     esi, 8
 * 00000001C0034D5B: mov     eax, [rcx+2Ch]
 * 00000001C0034D5E: test    sil, al
 * 00000001C0034D61: jz      short loc_1C0034DA4
 * 00000001C0034D63: cmp     byte ptr [rcx+29h], 2
 * 00000001C0034D67: jb      short loc_1C0034DA4
 * 00000001C0034D69: and     qword ptr [r11-18h], 0
 * 00000001C0034D6E: lea     rdx, [r11+38h]
 * 00000001C0034D72: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0034D79: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0034D80: mov     rcx, [rcx+18h]
 * 00000001C0034D84: mov     r9d, ebx
 * 00000001C0034D87: mov     [r11-20h], rsi
 * 00000001C0034D8B: mov     [r11-28h], rdx
 * 00000001C0034D8F: lea     rdx, [r11+30h]
 * 00000001C0034D93: mov     [r11-30h], rsi
 * 00000001C0034D97: mov     [r11-38h], rdx
 * 00000001C0034D9B: lea     edx, [rsi+23h]
 * 00000001C0034D9E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0034DA4: and     [rsp+58h+var_10], 0
 * 00000001C0034DAA: lea     rax, [rsp+58h+arg_30]
 * 00000001C0034DB2: mov     [rsp+58h+var_18], rsi
 * 00000001C0034DB7: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0034DBE: mov     [rsp+58h+var_20], rax
 * 00000001C0034DC3: mov     edx, 2
 * 00000001C0034DC8: lea     rax, [rsp+58h+arg_28]
 * 00000001C0034DD0: mov     [rsp+58h+var_28], rsi
 * 00000001C0034DD5: mov     [rsp+58h+var_30], rax
 * 00000001C0034DDA: mov     rcx, rdi
 * 00000001C0034DDD: mov     [rsp+58h+var_38], bx
 * 00000001C0034DE2: lea     r8d, [rdx+2]
 * 00000001C0034DE6: call    cs:__imp_WppAutoLogTrace
 * 00000001C0034DED: nop     dword ptr [rax+rax+00h]
 * 00000001C0034DF2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0034DF7: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0034DFC: add     rsp, 50h
 * 00000001C0034E00: pop     rdi
 * 00000001C0034E01: retn
 */
