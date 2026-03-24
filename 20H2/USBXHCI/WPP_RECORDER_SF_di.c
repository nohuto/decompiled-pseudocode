/*
 * XREFs of WPP_RECORDER_SF_di @ 0x1C001550C
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C006D074 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C006D1E8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_di @ 0x1C001550C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001550C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001550C: mov     [rsp+arg_0], rbx
 * 00000001C0015511: mov     [rsp+arg_8], rsi
 * 00000001C0015516: push    rdi
 * 00000001C0015517: sub     rsp, 50h
 * 00000001C001551B: mov     rsi, rcx
 * 00000001C001551E: movzx   edi, r9w
 * 00000001C0015522: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0015529: movzx   ebx, dl
 * 00000001C001552C: mov     eax, [rcx+2Ch]
 * 00000001C001552F: test    al, 8
 * 00000001C0015531: jnz     loc_1C0021C6C
 * 00000001C0015537: and     [rsp+58h+var_10], 0
 * 00000001C001553D: lea     rax, [rsp+58h+arg_30]
 * 00000001C0015545: mov     [rsp+58h+var_18], 8
 * 00000001C001554E: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0015555: mov     [rsp+58h+var_20], rax
 * 00000001C001555A: mov     r8d, 4
 * 00000001C0015560: lea     rax, [rsp+58h+arg_28]
 * 00000001C0015568: mov     [rsp+58h+var_28], 4
 * 00000001C0015571: mov     [rsp+58h+var_30], rax
 * 00000001C0015576: mov     edx, ebx
 * 00000001C0015578: mov     rcx, rsi
 * 00000001C001557B: mov     word ptr [rsp+58h+var_38], di
 * 00000001C0015580: call    cs:__imp_WppAutoLogTrace
 * 00000001C0015587: nop     dword ptr [rax+rax+00h]
 * 00000001C001558C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0015591: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0015596: add     rsp, 50h
 * 00000001C001559A: pop     rdi
 * 00000001C001559B: retn
 * 00000001C0021C6C: cmp     [rcx+29h], bl
 * 00000001C0021C6F: jb      loc_1C0015537
 * 00000001C0021C75: and     [rsp+58h+var_18], 0
 * 00000001C0021C7B: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0021C83: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0021C8A: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0021C91: mov     rcx, [rcx+18h]
 * 00000001C0021C95: mov     r9d, edi
 * 00000001C0021C98: mov     [rsp+58h+var_20], 8
 * 00000001C0021CA1: mov     [rsp+58h+var_28], rdx
 * 00000001C0021CA6: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0021CAE: mov     [rsp+58h+var_30], 4
 * 00000001C0021CB7: mov     [rsp+58h+var_38], rdx
 * 00000001C0021CBC: mov     edx, 2Bh ; '+'
 * 00000001C0021CC1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0021CC7: nop
 * 00000001C0021CC8: jmp     loc_1C0015537
 */
