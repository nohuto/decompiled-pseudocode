/*
 * XREFs of WPP_RECORDER_SF_hD @ 0x1C001982C
 * Callers:
 *     xxxInternalToUnicode @ 0x1C00193E0 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01AE700 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_hD @ 0x1C001982C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001982C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001982C: mov     [rsp+arg_0], rbx
 * 00000001C0019831: push    rdi
 * 00000001C0019832: sub     rsp, 50h
 * 00000001C0019836: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001983D: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C0019844: movzx   ebx, r9w
 * 00000001C0019848: test    dword ptr [rcx+2Ch], 8000h
 * 00000001C001984F: jnz     loc_1C00DFA88
 * 00000001C0019855: and     [rsp+58h+var_10], 0
 * 00000001C001985B: lea     rax, [rsp+58h+arg_30]
 * 00000001C0019863: mov     [rsp+58h+var_18], 4
 * 00000001C001986C: lea     r9, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C0019873: mov     [rsp+58h+var_20], rax
 * 00000001C0019878: mov     edx, 4
 * 00000001C001987D: lea     rax, [rsp+58h+arg_28]
 * 00000001C0019885: mov     [rsp+58h+var_28], 2
 * 00000001C001988E: mov     [rsp+58h+var_30], rax
 * 00000001C0019893: mov     rcx, rdi
 * 00000001C0019896: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C001989B: lea     r8d, [rdx+0Ch]
 * 00000001C001989F: call    cs:__imp_WppAutoLogTrace
 * 00000001C00198A6: nop     dword ptr [rax+rax+00h]
 * 00000001C00198AB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00198B0: add     rsp, 50h
 * 00000001C00198B4: pop     rdi
 * 00000001C00198B5: retn
 * 00000001C00DFA88: cmp     byte ptr [rcx+29h], 4
 * 00000001C00DFA8C: jb      loc_1C0019855
 * 00000001C00DFA92: and     [rsp+58h+var_18], 0
 * 00000001C00DFA98: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00DFAA0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00DFAA7: lea     r8, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C00DFAAE: mov     rcx, [rcx+18h]
 * 00000001C00DFAB2: mov     r9d, ebx
 * 00000001C00DFAB5: mov     [rsp+58h+var_20], 4
 * 00000001C00DFABE: mov     [rsp+58h+var_28], rdx
 * 00000001C00DFAC3: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00DFACB: mov     [rsp+58h+var_30], 2
 * 00000001C00DFAD4: mov     [rsp+58h+var_38], rdx
 * 00000001C00DFAD9: mov     edx, 2Bh ; '+'
 * 00000001C00DFADE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00DFAE4: nop
 * 00000001C00DFAE5: jmp     loc_1C0019855
 */
