/*
 * XREFs of WPP_RECORDER_SF_qi @ 0x1C0173534
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0173FD4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C0174FA4 (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qi @ 0x1C0173534
 * Reason: Hex-Rays returned no pseudocode for 0x1C0173534
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0173534: mov     r11, rsp
 * 00000001C0173537: mov     [r11+8], rbx
 * 00000001C017353B: mov     [r11+10h], rsi
 * 00000001C017353F: push    rdi
 * 00000001C0173540: sub     rsp, 50h
 * 00000001C0173544: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C017354B: mov     esi, 8
 * 00000001C0173550: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0173557: movzx   ebx, r9w
 * 00000001C017355B: mov     eax, [rcx+2Ch]
 * 00000001C017355E: test    al, 1
 * 00000001C0173560: jz      short loc_1C01735A3
 * 00000001C0173562: cmp     byte ptr [rcx+29h], 4
 * 00000001C0173566: jb      short loc_1C01735A3
 * 00000001C0173568: and     qword ptr [r11-18h], 0
 * 00000001C017356D: lea     rdx, [r11+38h]
 * 00000001C0173571: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0173578: lea     r8, WPP_0d925eab253539aeb97635bf94432844_Traceguids
 * 00000001C017357F: mov     rcx, [rcx+18h]
 * 00000001C0173583: mov     r9d, ebx
 * 00000001C0173586: mov     [r11-20h], rsi
 * 00000001C017358A: mov     [r11-28h], rdx
 * 00000001C017358E: lea     rdx, [r11+30h]
 * 00000001C0173592: mov     [r11-30h], rsi
 * 00000001C0173596: mov     [r11-38h], rdx
 * 00000001C017359A: lea     edx, [rsi+23h]
 * 00000001C017359D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01735A3: and     [rsp+58h+var_10], 0
 * 00000001C01735A9: lea     rax, [rsp+58h+arg_30]
 * 00000001C01735B1: mov     [rsp+58h+var_18], rsi
 * 00000001C01735B6: lea     r9, WPP_0d925eab253539aeb97635bf94432844_Traceguids
 * 00000001C01735BD: mov     [rsp+58h+var_20], rax
 * 00000001C01735C2: mov     edx, 4
 * 00000001C01735C7: lea     rax, [rsp+58h+arg_28]
 * 00000001C01735CF: mov     [rsp+58h+var_28], rsi
 * 00000001C01735D4: mov     [rsp+58h+var_30], rax
 * 00000001C01735D9: mov     rcx, rdi
 * 00000001C01735DC: mov     [rsp+58h+var_38], bx
 * 00000001C01735E1: lea     r8d, [rdx-3]
 * 00000001C01735E5: call    cs:__imp_WppAutoLogTrace
 * 00000001C01735EC: nop     dword ptr [rax+rax+00h]
 * 00000001C01735F1: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01735F6: mov     rsi, [rsp+58h+arg_8]
 * 00000001C01735FB: add     rsp, 50h
 * 00000001C01735FF: pop     rdi
 * 00000001C0173600: retn
 */
