/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C0158F60
 * Callers:
 *     RIMGetLastInvertedPenTime @ 0x1C01574A0 (RIMGetLastInvertedPenTime.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0169B54 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C0169DA0 (RIMIDEValidateMouseInputStruct.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017863C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C0158F60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0158F60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0158F60: mov     r11, rsp
 * 00000001C0158F63: mov     [r11+8], rbx
 * 00000001C0158F67: mov     [r11+10h], rsi
 * 00000001C0158F6B: push    rdi
 * 00000001C0158F6C: sub     rsp, 40h
 * 00000001C0158F70: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0158F77: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0158F7E: movzx   edi, r9w
 * 00000001C0158F82: movzx   ebx, dl
 * 00000001C0158F85: mov     eax, [rcx+2Ch]
 * 00000001C0158F88: test    al, 1
 * 00000001C0158F8A: jz      short loc_1C0158FC4
 * 00000001C0158F8C: cmp     [rcx+29h], bl
 * 00000001C0158F8F: jb      short loc_1C0158FC4
 * 00000001C0158F91: and     qword ptr [r11-18h], 0
 * 00000001C0158F96: lea     rdx, [r11+30h]
 * 00000001C0158F9A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0158FA1: mov     r9d, edi
 * 00000001C0158FA4: mov     r8, [rsp+48h+arg_20]
 * 00000001C0158FA9: mov     rcx, [rcx+18h]
 * 00000001C0158FAD: mov     qword ptr [r11-20h], 8
 * 00000001C0158FB5: mov     [r11-28h], rdx
 * 00000001C0158FB9: mov     edx, 2Bh ; '+'
 * 00000001C0158FBE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0158FC4: and     [rsp+48h+var_10], 0
 * 00000001C0158FCA: lea     rax, [rsp+48h+arg_28]
 * 00000001C0158FCF: mov     r9, [rsp+48h+arg_20]
 * 00000001C0158FD4: mov     r8d, 1
 * 00000001C0158FDA: mov     [rsp+48h+var_18], 8
 * 00000001C0158FE3: mov     edx, ebx
 * 00000001C0158FE5: mov     [rsp+48h+var_20], rax
 * 00000001C0158FEA: mov     rcx, rsi
 * 00000001C0158FED: mov     [rsp+48h+var_28], di
 * 00000001C0158FF2: call    cs:__imp_WppAutoLogTrace
 * 00000001C0158FF9: nop     dword ptr [rax+rax+00h]
 * 00000001C0158FFE: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0159003: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0159008: add     rsp, 40h
 * 00000001C015900C: pop     rdi
 * 00000001C015900D: retn
 */
