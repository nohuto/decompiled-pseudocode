/*
 * XREFs of WPP_RECORDER_SF_qLD @ 0x1C00350C4
 * Callers:
 *     Controller_WdfEvtDeviceUsageNotification @ 0x1C0075D50 (Controller_WdfEvtDeviceUsageNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLD @ 0x1C00350C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00350C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00350C4: mov     r11, rsp
 * 00000001C00350C7: mov     [r11+8], rbx
 * 00000001C00350CB: mov     [r11+10h], rbp
 * 00000001C00350CF: push    rdi
 * 00000001C00350D0: sub     rsp, 60h
 * 00000001C00350D4: mov     rbx, rcx
 * 00000001C00350D7: mov     edi, 4
 * 00000001C00350DC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00350E3: lea     ebp, [rdi+30h]
 * 00000001C00350E6: mov     eax, [rcx+2Ch]
 * 00000001C00350E9: test    al, 8
 * 00000001C00350EB: jz      short loc_1C003513F
 * 00000001C00350ED: cmp     [rcx+29h], dil
 * 00000001C00350F1: jb      short loc_1C003513F
 * 00000001C00350F3: and     qword ptr [r11-18h], 0
 * 00000001C00350F8: lea     rdx, [r11+40h]
 * 00000001C00350FC: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035103: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C003510A: mov     rcx, [rcx+18h]
 * 00000001C003510E: mov     [r11-20h], rdi
 * 00000001C0035112: mov     [r11-28h], rdx
 * 00000001C0035116: lea     rdx, [r11+38h]
 * 00000001C003511A: mov     [r11-30h], rdi
 * 00000001C003511E: mov     [r11-38h], rdx
 * 00000001C0035122: lea     rdx, [r11+30h]
 * 00000001C0035126: mov     qword ptr [r11-40h], 8
 * 00000001C003512E: mov     [r11-48h], rdx
 * 00000001C0035132: lea     edx, [rdi+27h]
 * 00000001C0035135: movzx   r9d, bp
 * 00000001C0035139: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003513F: and     [rsp+68h+var_10], 0
 * 00000001C0035145: lea     rax, [rsp+68h+arg_38]
 * 00000001C003514D: mov     [rsp+68h+var_18], rdi
 * 00000001C0035152: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0035159: mov     [rsp+68h+var_20], rax
 * 00000001C003515E: mov     r8d, edi
 * 00000001C0035161: mov     [rsp+68h+var_28], rdi
 * 00000001C0035166: lea     rax, [rsp+68h+arg_30]
 * 00000001C003516E: mov     [rsp+68h+var_30], rax
 * 00000001C0035173: mov     edx, edi
 * 00000001C0035175: lea     rax, [rsp+68h+arg_28]
 * 00000001C003517D: mov     [rsp+68h+var_38], 8
 * 00000001C0035186: mov     [rsp+68h+var_40], rax
 * 00000001C003518B: mov     rcx, rbx
 * 00000001C003518E: mov     [rsp+68h+var_48], bp
 * 00000001C0035193: call    cs:__imp_WppAutoLogTrace
 * 00000001C003519A: nop     dword ptr [rax+rax+00h]
 * 00000001C003519F: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00351A4: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00351A9: add     rsp, 60h
 * 00000001C00351AD: pop     rdi
 * 00000001C00351AE: retn
 */
