/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C0177F30
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017ACDC (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dD @ 0x1C0177F30
 * Reason: Hex-Rays returned no pseudocode for 0x1C0177F30
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0177F30: mov     r11, rsp
 * 00000001C0177F33: mov     [r11+8], rbx
 * 00000001C0177F37: mov     [r11+10h], rsi
 * 00000001C0177F3B: push    rdi
 * 00000001C0177F3C: sub     rsp, 50h
 * 00000001C0177F40: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0177F47: mov     esi, 4
 * 00000001C0177F4C: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0177F53: movzx   ebx, r9w
 * 00000001C0177F57: mov     eax, [rcx+2Ch]
 * 00000001C0177F5A: test    al, 1
 * 00000001C0177F5C: jz      short loc_1C0177F9F
 * 00000001C0177F5E: cmp     [rcx+29h], sil
 * 00000001C0177F62: jb      short loc_1C0177F9F
 * 00000001C0177F64: and     qword ptr [r11-18h], 0
 * 00000001C0177F69: lea     rdx, [r11+38h]
 * 00000001C0177F6D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0177F74: lea     r8, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C0177F7B: mov     rcx, [rcx+18h]
 * 00000001C0177F7F: mov     r9d, ebx
 * 00000001C0177F82: mov     [r11-20h], rsi
 * 00000001C0177F86: mov     [r11-28h], rdx
 * 00000001C0177F8A: lea     rdx, [r11+30h]
 * 00000001C0177F8E: mov     [r11-30h], rsi
 * 00000001C0177F92: mov     [r11-38h], rdx
 * 00000001C0177F96: lea     edx, [rsi+27h]
 * 00000001C0177F99: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0177F9F: and     [rsp+58h+var_10], 0
 * 00000001C0177FA5: lea     rax, [rsp+58h+arg_30]
 * 00000001C0177FAD: mov     [rsp+58h+var_18], rsi
 * 00000001C0177FB2: lea     r9, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C0177FB9: mov     [rsp+58h+var_20], rax
 * 00000001C0177FBE: mov     r8d, 1
 * 00000001C0177FC4: lea     rax, [rsp+58h+arg_28]
 * 00000001C0177FCC: mov     [rsp+58h+var_28], rsi
 * 00000001C0177FD1: mov     [rsp+58h+var_30], rax
 * 00000001C0177FD6: mov     edx, esi
 * 00000001C0177FD8: mov     rcx, rdi
 * 00000001C0177FDB: mov     [rsp+58h+var_38], bx
 * 00000001C0177FE0: call    cs:__imp_WppAutoLogTrace
 * 00000001C0177FE7: nop     dword ptr [rax+rax+00h]
 * 00000001C0177FEC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0177FF1: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0177FF6: add     rsp, 50h
 * 00000001C0177FFA: pop     rdi
 * 00000001C0177FFB: retn
 */
