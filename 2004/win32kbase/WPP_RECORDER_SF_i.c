/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C015B4C0
 * Callers:
 *     RIMGetLastInvertedPenTime @ 0x1C0159A00 (RIMGetLastInvertedPenTime.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C016C0B4 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C016C300 (RIMIDEValidateMouseInputStruct.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017AA6C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C015B4C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C015B4C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C015B4C0: mov     r11, rsp
 * 00000001C015B4C3: mov     [r11+8], rbx
 * 00000001C015B4C7: mov     [r11+10h], rsi
 * 00000001C015B4CB: push    rdi
 * 00000001C015B4CC: sub     rsp, 40h
 * 00000001C015B4D0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C015B4D7: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C015B4DE: movzx   edi, r9w
 * 00000001C015B4E2: movzx   ebx, dl
 * 00000001C015B4E5: mov     eax, [rcx+2Ch]
 * 00000001C015B4E8: test    al, 1
 * 00000001C015B4EA: jz      short loc_1C015B524
 * 00000001C015B4EC: cmp     [rcx+29h], bl
 * 00000001C015B4EF: jb      short loc_1C015B524
 * 00000001C015B4F1: and     qword ptr [r11-18h], 0
 * 00000001C015B4F6: lea     rdx, [r11+30h]
 * 00000001C015B4FA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C015B501: mov     r9d, edi
 * 00000001C015B504: mov     r8, [rsp+48h+arg_20]
 * 00000001C015B509: mov     rcx, [rcx+18h]
 * 00000001C015B50D: mov     qword ptr [r11-20h], 8
 * 00000001C015B515: mov     [r11-28h], rdx
 * 00000001C015B519: mov     edx, 2Bh ; '+'
 * 00000001C015B51E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C015B524: and     [rsp+48h+var_10], 0
 * 00000001C015B52A: lea     rax, [rsp+48h+arg_28]
 * 00000001C015B52F: mov     r9, [rsp+48h+arg_20]
 * 00000001C015B534: mov     r8d, 1
 * 00000001C015B53A: mov     [rsp+48h+var_18], 8
 * 00000001C015B543: mov     edx, ebx
 * 00000001C015B545: mov     [rsp+48h+var_20], rax
 * 00000001C015B54A: mov     rcx, rsi
 * 00000001C015B54D: mov     [rsp+48h+var_28], di
 * 00000001C015B552: call    cs:__imp_WppAutoLogTrace
 * 00000001C015B559: nop     dword ptr [rax+rax+00h]
 * 00000001C015B55E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C015B563: mov     rsi, [rsp+48h+arg_8]
 * 00000001C015B568: add     rsp, 40h
 * 00000001C015B56C: pop     rdi
 * 00000001C015B56D: retn
 */
