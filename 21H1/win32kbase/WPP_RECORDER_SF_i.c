/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C0161810
 * Callers:
 *     RIMGetLastInvertedPenTime @ 0x1C015FD50 (RIMGetLastInvertedPenTime.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0172404 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C0172650 (RIMIDEValidateMouseInputStruct.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C0161810
 * Reason: Hex-Rays returned no pseudocode for 0x1C0161810
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0161810: mov     r11, rsp
 * 00000001C0161813: mov     [r11+8], rbx
 * 00000001C0161817: mov     [r11+10h], rsi
 * 00000001C016181B: push    rdi
 * 00000001C016181C: sub     rsp, 40h
 * 00000001C0161820: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0161827: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C016182E: movzx   edi, r9w
 * 00000001C0161832: movzx   ebx, dl
 * 00000001C0161835: mov     eax, [rcx+2Ch]
 * 00000001C0161838: test    al, 1
 * 00000001C016183A: jz      short loc_1C0161874
 * 00000001C016183C: cmp     [rcx+29h], bl
 * 00000001C016183F: jb      short loc_1C0161874
 * 00000001C0161841: and     qword ptr [r11-18h], 0
 * 00000001C0161846: lea     rdx, [r11+30h]
 * 00000001C016184A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0161851: mov     r9d, edi
 * 00000001C0161854: mov     r8, [rsp+48h+arg_20]
 * 00000001C0161859: mov     rcx, [rcx+18h]
 * 00000001C016185D: mov     qword ptr [r11-20h], 8
 * 00000001C0161865: mov     [r11-28h], rdx
 * 00000001C0161869: mov     edx, 2Bh ; '+'
 * 00000001C016186E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0161874: and     [rsp+48h+var_10], 0
 * 00000001C016187A: lea     rax, [rsp+48h+arg_28]
 * 00000001C016187F: mov     r9, [rsp+48h+arg_20]
 * 00000001C0161884: mov     r8d, 1
 * 00000001C016188A: mov     [rsp+48h+var_18], 8
 * 00000001C0161893: mov     edx, ebx
 * 00000001C0161895: mov     [rsp+48h+var_20], rax
 * 00000001C016189A: mov     rcx, rsi
 * 00000001C016189D: mov     [rsp+48h+var_28], di
 * 00000001C01618A2: call    cs:__imp_WppAutoLogTrace
 * 00000001C01618A9: nop     dword ptr [rax+rax+00h]
 * 00000001C01618AE: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01618B3: mov     rsi, [rsp+48h+arg_8]
 * 00000001C01618B8: add     rsp, 40h
 * 00000001C01618BC: pop     rdi
 * 00000001C01618BD: retn
 */
