/*
 * XREFs of WPP_RECORDER_SF_PP @ 0x1C003C758
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003C170 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PP @ 0x1C003C758
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C758
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C758: mov     r11, rsp
 * 00000001C003C75B: mov     [r11+8], rbx
 * 00000001C003C75F: mov     [r11+10h], rsi
 * 00000001C003C763: push    rdi
 * 00000001C003C764: sub     rsp, 50h
 * 00000001C003C768: mov     rbx, rcx
 * 00000001C003C76B: mov     esi, 0Ch
 * 00000001C003C770: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C777: lea     edi, [rsi-4]
 * 00000001C003C77A: mov     eax, [rcx+2Ch]
 * 00000001C003C77D: test    al, 10h
 * 00000001C003C77F: jz      short loc_1C003C7C3
 * 00000001C003C781: cmp     byte ptr [rcx+29h], 3
 * 00000001C003C785: jb      short loc_1C003C7C3
 * 00000001C003C787: and     qword ptr [r11-18h], 0
 * 00000001C003C78C: lea     rdx, [r11+38h]
 * 00000001C003C790: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003C797: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003C79E: mov     rcx, [rcx+18h]
 * 00000001C003C7A2: mov     [r11-20h], rdi
 * 00000001C003C7A6: mov     [r11-28h], rdx
 * 00000001C003C7AA: lea     rdx, [r11+30h]
 * 00000001C003C7AE: mov     [r11-30h], rdi
 * 00000001C003C7B2: mov     [r11-38h], rdx
 * 00000001C003C7B6: lea     edx, [rsi+1Fh]
 * 00000001C003C7B9: movzx   r9d, si
 * 00000001C003C7BD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C7C3: and     [rsp+58h+var_10], 0
 * 00000001C003C7C9: lea     rax, [rsp+58h+arg_30]
 * 00000001C003C7D1: mov     [rsp+58h+var_18], rdi
 * 00000001C003C7D6: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003C7DD: mov     [rsp+58h+var_20], rax
 * 00000001C003C7E2: mov     edx, 3
 * 00000001C003C7E7: lea     rax, [rsp+58h+arg_28]
 * 00000001C003C7EF: mov     [rsp+58h+var_28], rdi
 * 00000001C003C7F4: mov     [rsp+58h+var_30], rax
 * 00000001C003C7F9: mov     rcx, rbx
 * 00000001C003C7FC: mov     [rsp+58h+var_38], si
 * 00000001C003C801: lea     r8d, [rdx+2]
 * 00000001C003C805: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C80C: nop     dword ptr [rax+rax+00h]
 * 00000001C003C811: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003C816: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003C81B: add     rsp, 50h
 * 00000001C003C81F: pop     rdi
 * 00000001C003C820: retn
 */
