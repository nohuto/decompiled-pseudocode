/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C017A360
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017D10C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dD @ 0x1C017A360
 * Reason: Hex-Rays returned no pseudocode for 0x1C017A360
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C017A360: mov     r11, rsp
 * 00000001C017A363: mov     [r11+8], rbx
 * 00000001C017A367: mov     [r11+10h], rsi
 * 00000001C017A36B: push    rdi
 * 00000001C017A36C: sub     rsp, 50h
 * 00000001C017A370: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C017A377: mov     esi, 4
 * 00000001C017A37C: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C017A383: movzx   ebx, r9w
 * 00000001C017A387: mov     eax, [rcx+2Ch]
 * 00000001C017A38A: test    al, 1
 * 00000001C017A38C: jz      short loc_1C017A3CF
 * 00000001C017A38E: cmp     [rcx+29h], sil
 * 00000001C017A392: jb      short loc_1C017A3CF
 * 00000001C017A394: and     qword ptr [r11-18h], 0
 * 00000001C017A399: lea     rdx, [r11+38h]
 * 00000001C017A39D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C017A3A4: lea     r8, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C017A3AB: mov     rcx, [rcx+18h]
 * 00000001C017A3AF: mov     r9d, ebx
 * 00000001C017A3B2: mov     [r11-20h], rsi
 * 00000001C017A3B6: mov     [r11-28h], rdx
 * 00000001C017A3BA: lea     rdx, [r11+30h]
 * 00000001C017A3BE: mov     [r11-30h], rsi
 * 00000001C017A3C2: mov     [r11-38h], rdx
 * 00000001C017A3C6: lea     edx, [rsi+27h]
 * 00000001C017A3C9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017A3CF: and     [rsp+58h+var_10], 0
 * 00000001C017A3D5: lea     rax, [rsp+58h+arg_30]
 * 00000001C017A3DD: mov     [rsp+58h+var_18], rsi
 * 00000001C017A3E2: lea     r9, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C017A3E9: mov     [rsp+58h+var_20], rax
 * 00000001C017A3EE: mov     r8d, 1
 * 00000001C017A3F4: lea     rax, [rsp+58h+arg_28]
 * 00000001C017A3FC: mov     [rsp+58h+var_28], rsi
 * 00000001C017A401: mov     [rsp+58h+var_30], rax
 * 00000001C017A406: mov     edx, esi
 * 00000001C017A408: mov     rcx, rdi
 * 00000001C017A40B: mov     [rsp+58h+var_38], bx
 * 00000001C017A410: call    cs:__imp_WppAutoLogTrace
 * 00000001C017A417: nop     dword ptr [rax+rax+00h]
 * 00000001C017A41C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C017A421: mov     rsi, [rsp+58h+arg_8]
 * 00000001C017A426: add     rsp, 50h
 * 00000001C017A42A: pop     rdi
 * 00000001C017A42B: retn
 */
