/*
 * XREFs of WPP_RECORDER_SF_qi @ 0x1C0175964
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0176404 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C01773D4 (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qi @ 0x1C0175964
 * Reason: Hex-Rays returned no pseudocode for 0x1C0175964
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0175964: mov     r11, rsp
 * 00000001C0175967: mov     [r11+8], rbx
 * 00000001C017596B: mov     [r11+10h], rsi
 * 00000001C017596F: push    rdi
 * 00000001C0175970: sub     rsp, 50h
 * 00000001C0175974: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C017597B: mov     esi, 8
 * 00000001C0175980: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0175987: movzx   ebx, r9w
 * 00000001C017598B: mov     eax, [rcx+2Ch]
 * 00000001C017598E: test    al, 1
 * 00000001C0175990: jz      short loc_1C01759D3
 * 00000001C0175992: cmp     byte ptr [rcx+29h], 4
 * 00000001C0175996: jb      short loc_1C01759D3
 * 00000001C0175998: and     qword ptr [r11-18h], 0
 * 00000001C017599D: lea     rdx, [r11+38h]
 * 00000001C01759A1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01759A8: lea     r8, WPP_0d925eab253539aeb97635bf94432844_Traceguids
 * 00000001C01759AF: mov     rcx, [rcx+18h]
 * 00000001C01759B3: mov     r9d, ebx
 * 00000001C01759B6: mov     [r11-20h], rsi
 * 00000001C01759BA: mov     [r11-28h], rdx
 * 00000001C01759BE: lea     rdx, [r11+30h]
 * 00000001C01759C2: mov     [r11-30h], rsi
 * 00000001C01759C6: mov     [r11-38h], rdx
 * 00000001C01759CA: lea     edx, [rsi+23h]
 * 00000001C01759CD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01759D3: and     [rsp+58h+var_10], 0
 * 00000001C01759D9: lea     rax, [rsp+58h+arg_30]
 * 00000001C01759E1: mov     [rsp+58h+var_18], rsi
 * 00000001C01759E6: lea     r9, WPP_0d925eab253539aeb97635bf94432844_Traceguids
 * 00000001C01759ED: mov     [rsp+58h+var_20], rax
 * 00000001C01759F2: mov     edx, 4
 * 00000001C01759F7: lea     rax, [rsp+58h+arg_28]
 * 00000001C01759FF: mov     [rsp+58h+var_28], rsi
 * 00000001C0175A04: mov     [rsp+58h+var_30], rax
 * 00000001C0175A09: mov     rcx, rdi
 * 00000001C0175A0C: mov     [rsp+58h+var_38], bx
 * 00000001C0175A11: lea     r8d, [rdx-3]
 * 00000001C0175A15: call    cs:__imp_WppAutoLogTrace
 * 00000001C0175A1C: nop     dword ptr [rax+rax+00h]
 * 00000001C0175A21: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0175A26: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0175A2B: add     rsp, 50h
 * 00000001C0175A2F: pop     rdi
 * 00000001C0175A30: retn
 */
