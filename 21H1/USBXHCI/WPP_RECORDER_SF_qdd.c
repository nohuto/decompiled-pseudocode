/*
 * XREFs of WPP_RECORDER_SF_qdd @ 0x1C0014518
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0005D90 (Interrupter_DeferredWorkProcessor.c)
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C000922C (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C0009CF0 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000AC00 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013000 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0014874 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     ESM_LogUnhandledEvent @ 0x1C004E768 (ESM_LogUnhandledEvent.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006CAF8 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdd @ 0x1C0014518
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014518
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014518: mov     [rsp+arg_0], rbx
 * 00000001C001451D: mov     [rsp+arg_8], rbp
 * 00000001C0014522: mov     [rsp+arg_10], rsi
 * 00000001C0014527: push    rdi
 * 00000001C0014528: push    r14
 * 00000001C001452A: push    r15
 * 00000001C001452C: sub     rsp, 60h
 * 00000001C0014530: mov     r14d, r8d
 * 00000001C0014533: mov     r15, rcx
 * 00000001C0014536: mov     edi, r8d
 * 00000001C0014539: shr     rdi, 10h
 * 00000001C001453D: movzx   esi, dl
 * 00000001C0014540: lea     ebx, [r14-1]
 * 00000001C0014544: movzx   ebp, r9w
 * 00000001C0014548: mov     r10d, ebx
 * 00000001C001454B: and     ebx, 1Fh
 * 00000001C001454E: shr     r10, 5
 * 00000001C0014552: lea     rax, [rdi+rdi*4]
 * 00000001C0014556: and     r10d, 7FFh
 * 00000001C001455D: mov     edx, ebx
 * 00000001C001455F: mov     ebx, 4
 * 00000001C0014564: lea     r11, [r10+rax*4]
 * 00000001C0014568: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001456F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0014574: bt      eax, edx
 * 00000001C0014577: jb      loc_1C001EF68
 * 00000001C001457D: and     [rsp+78h+var_20], 0
 * 00000001C0014583: lea     rax, [rsp+78h+arg_38]
 * 00000001C001458B: mov     r9, [rsp+78h+arg_20]
 * 00000001C0014593: mov     r8d, r14d
 * 00000001C0014596: mov     [rsp+78h+var_28], rbx
 * 00000001C001459B: mov     edx, esi
 * 00000001C001459D: mov     [rsp+78h+var_30], rax
 * 00000001C00145A2: mov     rcx, r15
 * 00000001C00145A5: mov     [rsp+78h+var_38], rbx
 * 00000001C00145AA: lea     rax, [rsp+78h+arg_30]
 * 00000001C00145B2: mov     [rsp+78h+var_40], rax
 * 00000001C00145B7: lea     rax, [rsp+78h+arg_28]
 * 00000001C00145BF: mov     [rsp+78h+var_48], 8
 * 00000001C00145C8: mov     [rsp+78h+var_50], rax
 * 00000001C00145CD: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00145D2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00145D9: nop     dword ptr [rax+rax+00h]
 * 00000001C00145DE: lea     r11, [rsp+78h+var_18]
 * 00000001C00145E3: mov     rbx, [r11+20h]
 * 00000001C00145E7: mov     rbp, [r11+28h]
 * 00000001C00145EB: mov     rsi, [r11+30h]
 * 00000001C00145EF: mov     rsp, r11
 * 00000001C00145F2: pop     r15
 * 00000001C00145F4: pop     r14
 * 00000001C00145F6: pop     rdi
 * 00000001C00145F7: retn
 * 00000001C001EF68: lea     rcx, [rdi+rdi*4]
 * 00000001C001EF6C: add     rcx, rcx
 * 00000001C001EF6F: cmp     [r10+rcx*8+29h], sil
 * 00000001C001EF74: jb      loc_1C001457D
 * 00000001C001EF7A: and     [rsp+78h+var_28], 0
 * 00000001C001EF80: lea     rdx, [rsp+78h+arg_38]
 * 00000001C001EF88: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001EF8F: mov     r9d, ebp
 * 00000001C001EF92: mov     r8, [rsp+78h+arg_20]
 * 00000001C001EF9A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C001EF9F: mov     [rsp+78h+var_30], rbx
 * 00000001C001EFA4: mov     [rsp+78h+var_38], rdx
 * 00000001C001EFA9: lea     rdx, [rsp+78h+arg_30]
 * 00000001C001EFB1: mov     [rsp+78h+var_40], rbx
 * 00000001C001EFB6: mov     [rsp+78h+var_48], rdx
 * 00000001C001EFBB: lea     rdx, [rsp+78h+arg_28]
 * 00000001C001EFC3: mov     [rsp+78h+var_50], 8
 * 00000001C001EFCC: mov     [rsp+78h+var_58], rdx
 * 00000001C001EFD1: mov     edx, 2Bh ; '+'
 * 00000001C001EFD6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001EFDC: nop
 * 00000001C001EFDD: jmp     loc_1C001457D
 */
