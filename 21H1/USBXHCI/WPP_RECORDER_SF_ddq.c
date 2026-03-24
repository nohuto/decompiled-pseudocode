/*
 * XREFs of WPP_RECORDER_SF_ddq @ 0x1C0008A48
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_Enable @ 0x1C0007CC0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointPurge @ 0x1C000FC50 (Endpoint_UcxEvtEndpointPurge.c)
 *     Endpoint_WdfEvtPurgeComplete @ 0x1C000FD30 (Endpoint_WdfEvtPurgeComplete.c)
 *     Endpoint_UcxEvtEndpointAbort @ 0x1C0018520 (Endpoint_UcxEvtEndpointAbort.c)
 *     Endpoint_WdfEvtAbortComplete @ 0x1C0018670 (Endpoint_WdfEvtAbortComplete.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0039390 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003950C (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_Create @ 0x1C006A2E0 (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddq @ 0x1C0008A48
 * Reason: Hex-Rays returned no pseudocode for 0x1C0008A48
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0008A48: mov     [rsp+arg_0], rbx
 * 00000001C0008A4D: mov     [rsp+arg_8], rbp
 * 00000001C0008A52: mov     [rsp+arg_10], rsi
 * 00000001C0008A57: push    rdi
 * 00000001C0008A58: push    r14
 * 00000001C0008A5A: push    r15
 * 00000001C0008A5C: sub     rsp, 60h
 * 00000001C0008A60: mov     r14d, r8d
 * 00000001C0008A63: mov     r15, rcx
 * 00000001C0008A66: mov     edi, r8d
 * 00000001C0008A69: shr     rdi, 10h
 * 00000001C0008A6D: movzx   esi, dl
 * 00000001C0008A70: lea     ebx, [r14-1]
 * 00000001C0008A74: movzx   ebp, r9w
 * 00000001C0008A78: mov     r10d, ebx
 * 00000001C0008A7B: and     ebx, 1Fh
 * 00000001C0008A7E: shr     r10, 5
 * 00000001C0008A82: lea     rax, [rdi+rdi*4]
 * 00000001C0008A86: and     r10d, 7FFh
 * 00000001C0008A8D: mov     edx, ebx
 * 00000001C0008A8F: mov     ebx, 4
 * 00000001C0008A94: lea     r11, [r10+rax*4]
 * 00000001C0008A98: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0008A9F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0008AA4: bt      eax, edx
 * 00000001C0008AA7: jb      loc_1C00238D0
 * 00000001C0008AAD: and     [rsp+78h+var_20], 0
 * 00000001C0008AB3: lea     rax, [rsp+78h+arg_38]
 * 00000001C0008ABB: mov     r9, [rsp+78h+arg_20]
 * 00000001C0008AC3: mov     r8d, r14d
 * 00000001C0008AC6: mov     [rsp+78h+var_28], 8
 * 00000001C0008ACF: mov     edx, esi
 * 00000001C0008AD1: mov     [rsp+78h+var_30], rax
 * 00000001C0008AD6: mov     rcx, r15
 * 00000001C0008AD9: mov     [rsp+78h+var_38], rbx
 * 00000001C0008ADE: lea     rax, [rsp+78h+arg_30]
 * 00000001C0008AE6: mov     [rsp+78h+var_40], rax
 * 00000001C0008AEB: lea     rax, [rsp+78h+arg_28]
 * 00000001C0008AF3: mov     [rsp+78h+var_48], rbx
 * 00000001C0008AF8: mov     [rsp+78h+var_50], rax
 * 00000001C0008AFD: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0008B02: call    cs:__imp_WppAutoLogTrace
 * 00000001C0008B09: nop     dword ptr [rax+rax+00h]
 * 00000001C0008B0E: lea     r11, [rsp+78h+var_18]
 * 00000001C0008B13: mov     rbx, [r11+20h]
 * 00000001C0008B17: mov     rbp, [r11+28h]
 * 00000001C0008B1B: mov     rsi, [r11+30h]
 * 00000001C0008B1F: mov     rsp, r11
 * 00000001C0008B22: pop     r15
 * 00000001C0008B24: pop     r14
 * 00000001C0008B26: pop     rdi
 * 00000001C0008B27: retn
 * 00000001C00238D0: lea     rcx, [rdi+rdi*4]
 * 00000001C00238D4: add     rcx, rcx
 * 00000001C00238D7: cmp     [r10+rcx*8+29h], sil
 * 00000001C00238DC: jb      loc_1C0008AAD
 * 00000001C00238E2: and     [rsp+78h+var_28], 0
 * 00000001C00238E8: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00238F0: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00238F7: mov     r9d, ebp
 * 00000001C00238FA: mov     r8, [rsp+78h+arg_20]
 * 00000001C0023902: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0023907: mov     [rsp+78h+var_30], 8
 * 00000001C0023910: mov     [rsp+78h+var_38], rdx
 * 00000001C0023915: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002391D: mov     [rsp+78h+var_40], rbx
 * 00000001C0023922: mov     [rsp+78h+var_48], rdx
 * 00000001C0023927: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002392F: mov     [rsp+78h+var_50], rbx
 * 00000001C0023934: mov     [rsp+78h+var_58], rdx
 * 00000001C0023939: mov     edx, 2Bh ; '+'
 * 00000001C002393E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0023944: nop
 * 00000001C0023945: jmp     loc_1C0008AAD
 */
