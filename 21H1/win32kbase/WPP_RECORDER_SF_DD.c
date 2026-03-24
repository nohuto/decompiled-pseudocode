/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C0180060
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x1C0182E0C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dD @ 0x1C0180060
 * Reason: Hex-Rays returned no pseudocode for 0x1C0180060
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0180060: mov     r11, rsp
 * 00000001C0180063: mov     [r11+8], rbx
 * 00000001C0180067: mov     [r11+10h], rsi
 * 00000001C018006B: push    rdi
 * 00000001C018006C: sub     rsp, 50h
 * 00000001C0180070: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0180077: mov     esi, 4
 * 00000001C018007C: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0180083: movzx   ebx, r9w
 * 00000001C0180087: mov     eax, [rcx+2Ch]
 * 00000001C018008A: test    al, 1
 * 00000001C018008C: jz      short loc_1C01800CF
 * 00000001C018008E: cmp     [rcx+29h], sil
 * 00000001C0180092: jb      short loc_1C01800CF
 * 00000001C0180094: and     qword ptr [r11-18h], 0
 * 00000001C0180099: lea     rdx, [r11+38h]
 * 00000001C018009D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01800A4: lea     r8, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C01800AB: mov     rcx, [rcx+18h]
 * 00000001C01800AF: mov     r9d, ebx
 * 00000001C01800B2: mov     [r11-20h], rsi
 * 00000001C01800B6: mov     [r11-28h], rdx
 * 00000001C01800BA: lea     rdx, [r11+30h]
 * 00000001C01800BE: mov     [r11-30h], rsi
 * 00000001C01800C2: mov     [r11-38h], rdx
 * 00000001C01800C6: lea     edx, [rsi+27h]
 * 00000001C01800C9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01800CF: and     [rsp+58h+var_10], 0
 * 00000001C01800D5: lea     rax, [rsp+58h+arg_30]
 * 00000001C01800DD: mov     [rsp+58h+var_18], rsi
 * 00000001C01800E2: lea     r9, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C01800E9: mov     [rsp+58h+var_20], rax
 * 00000001C01800EE: mov     r8d, 1
 * 00000001C01800F4: lea     rax, [rsp+58h+arg_28]
 * 00000001C01800FC: mov     [rsp+58h+var_28], rsi
 * 00000001C0180101: mov     [rsp+58h+var_30], rax
 * 00000001C0180106: mov     edx, esi
 * 00000001C0180108: mov     rcx, rdi
 * 00000001C018010B: mov     [rsp+58h+var_38], bx
 * 00000001C0180110: call    cs:__imp_WppAutoLogTrace
 * 00000001C0180117: nop     dword ptr [rax+rax+00h]
 * 00000001C018011C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0180121: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0180126: add     rsp, 50h
 * 00000001C018012A: pop     rdi
 * 00000001C018012B: retn
 */
