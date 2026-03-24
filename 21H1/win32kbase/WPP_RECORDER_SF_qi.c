/*
 * XREFs of WPP_RECORDER_SF_qi @ 0x1C017BC94
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C017C104 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C017D0D4 (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qi @ 0x1C017BC94
 * Reason: Hex-Rays returned no pseudocode for 0x1C017BC94
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C017BC94: mov     r11, rsp
 * 00000001C017BC97: mov     [r11+8], rbx
 * 00000001C017BC9B: mov     [r11+10h], rsi
 * 00000001C017BC9F: push    rdi
 * 00000001C017BCA0: sub     rsp, 50h
 * 00000001C017BCA4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C017BCAB: mov     esi, 8
 * 00000001C017BCB0: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C017BCB7: movzx   ebx, r9w
 * 00000001C017BCBB: mov     eax, [rcx+2Ch]
 * 00000001C017BCBE: test    al, 1
 * 00000001C017BCC0: jz      short loc_1C017BD03
 * 00000001C017BCC2: cmp     byte ptr [rcx+29h], 4
 * 00000001C017BCC6: jb      short loc_1C017BD03
 * 00000001C017BCC8: and     qword ptr [r11-18h], 0
 * 00000001C017BCCD: lea     rdx, [r11+38h]
 * 00000001C017BCD1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C017BCD8: lea     r8, WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids
 * 00000001C017BCDF: mov     rcx, [rcx+18h]
 * 00000001C017BCE3: mov     r9d, ebx
 * 00000001C017BCE6: mov     [r11-20h], rsi
 * 00000001C017BCEA: mov     [r11-28h], rdx
 * 00000001C017BCEE: lea     rdx, [r11+30h]
 * 00000001C017BCF2: mov     [r11-30h], rsi
 * 00000001C017BCF6: mov     [r11-38h], rdx
 * 00000001C017BCFA: lea     edx, [rsi+23h]
 * 00000001C017BCFD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017BD03: and     [rsp+58h+var_10], 0
 * 00000001C017BD09: lea     rax, [rsp+58h+arg_30]
 * 00000001C017BD11: mov     [rsp+58h+var_18], rsi
 * 00000001C017BD16: lea     r9, WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids
 * 00000001C017BD1D: mov     [rsp+58h+var_20], rax
 * 00000001C017BD22: mov     edx, 4
 * 00000001C017BD27: lea     rax, [rsp+58h+arg_28]
 * 00000001C017BD2F: mov     [rsp+58h+var_28], rsi
 * 00000001C017BD34: mov     [rsp+58h+var_30], rax
 * 00000001C017BD39: mov     rcx, rdi
 * 00000001C017BD3C: mov     [rsp+58h+var_38], bx
 * 00000001C017BD41: lea     r8d, [rdx-3]
 * 00000001C017BD45: call    cs:__imp_WppAutoLogTrace
 * 00000001C017BD4C: nop     dword ptr [rax+rax+00h]
 * 00000001C017BD51: mov     rbx, [rsp+58h+arg_0]
 * 00000001C017BD56: mov     rsi, [rsp+58h+arg_8]
 * 00000001C017BD5B: add     rsp, 50h
 * 00000001C017BD5F: pop     rdi
 * 00000001C017BD60: retn
 */
