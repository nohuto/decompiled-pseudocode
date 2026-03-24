/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C0075D64
 * Callers:
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C002384C (rimHandlePnpWaitersOnOwnedDevices.c)
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0075900 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013B5D0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqq @ 0x1C0075D64
 * Reason: Hex-Rays returned no pseudocode for 0x1C0075D64
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0075D64: mov     [rsp+arg_0], rbx
 * 00000001C0075D69: mov     [rsp+arg_8], rbp
 * 00000001C0075D6E: mov     [rsp+arg_10], rsi
 * 00000001C0075D73: push    rdi
 * 00000001C0075D74: push    r14
 * 00000001C0075D76: push    r15
 * 00000001C0075D78: sub     rsp, 60h
 * 00000001C0075D7C: mov     r14d, r8d
 * 00000001C0075D7F: mov     r15, rcx
 * 00000001C0075D82: mov     edi, r8d
 * 00000001C0075D85: shr     rdi, 10h
 * 00000001C0075D89: movzx   esi, dl
 * 00000001C0075D8C: lea     ebx, [r14-1]
 * 00000001C0075D90: movzx   ebp, r9w
 * 00000001C0075D94: mov     r10d, ebx
 * 00000001C0075D97: and     ebx, 1Fh
 * 00000001C0075D9A: shr     r10, 5
 * 00000001C0075D9E: lea     rax, [rdi+rdi*4]
 * 00000001C0075DA2: and     r10d, 7FFh
 * 00000001C0075DA9: mov     edx, ebx
 * 00000001C0075DAB: mov     ebx, 8
 * 00000001C0075DB0: lea     r11, [r10+rax*4]
 * 00000001C0075DB4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0075DBB: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0075DC0: bt      eax, edx
 * 00000001C0075DC3: jb      loc_1C010029A
 * 00000001C0075DC9: and     [rsp+78h+var_20], 0
 * 00000001C0075DCF: lea     rax, [rsp+78h+arg_38]
 * 00000001C0075DD7: mov     r9, [rsp+78h+arg_20]
 * 00000001C0075DDF: mov     r8d, r14d
 * 00000001C0075DE2: mov     [rsp+78h+var_28], rbx
 * 00000001C0075DE7: mov     edx, esi
 * 00000001C0075DE9: mov     [rsp+78h+var_30], rax
 * 00000001C0075DEE: mov     rcx, r15
 * 00000001C0075DF1: mov     [rsp+78h+var_38], rbx
 * 00000001C0075DF6: lea     rax, [rsp+78h+arg_30]
 * 00000001C0075DFE: mov     [rsp+78h+var_40], rax
 * 00000001C0075E03: lea     rax, [rsp+78h+arg_28]
 * 00000001C0075E0B: mov     [rsp+78h+var_48], rbx
 * 00000001C0075E10: mov     [rsp+78h+var_50], rax
 * 00000001C0075E15: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0075E1A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0075E21: nop     dword ptr [rax+rax+00h]
 * 00000001C0075E26: lea     r11, [rsp+78h+var_18]
 * 00000001C0075E2B: mov     rbx, [r11+20h]
 * 00000001C0075E2F: mov     rbp, [r11+28h]
 * 00000001C0075E33: mov     rsi, [r11+30h]
 * 00000001C0075E37: mov     rsp, r11
 * 00000001C0075E3A: pop     r15
 * 00000001C0075E3C: pop     r14
 * 00000001C0075E3E: pop     rdi
 * 00000001C0075E3F: retn
 * 00000001C010029A: lea     rcx, [rdi+rdi*4]
 * 00000001C010029E: add     rcx, rcx
 * 00000001C01002A1: cmp     [r10+rcx*8+29h], sil
 * 00000001C01002A6: jb      loc_1C0075DC9
 * 00000001C01002AC: and     [rsp+78h+var_28], 0
 * 00000001C01002B2: lea     rdx, [rsp+78h+arg_38]
 * 00000001C01002BA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01002C1: mov     r9d, ebp
 * 00000001C01002C4: mov     r8, [rsp+78h+arg_20]
 * 00000001C01002CC: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01002D1: mov     [rsp+78h+var_30], rbx
 * 00000001C01002D6: mov     [rsp+78h+var_38], rdx
 * 00000001C01002DB: lea     rdx, [rsp+78h+arg_30]
 * 00000001C01002E3: mov     [rsp+78h+var_40], rbx
 * 00000001C01002E8: mov     [rsp+78h+var_48], rdx
 * 00000001C01002ED: lea     rdx, [rsp+78h+arg_28]
 * 00000001C01002F5: mov     [rsp+78h+var_50], rbx
 * 00000001C01002FA: mov     [rsp+78h+var_58], rdx
 * 00000001C01002FF: mov     edx, 2Bh ; '+'
 * 00000001C0100304: call    cs:__guard_dispatch_icall_fptr
 * 00000001C010030A: nop
 * 00000001C010030B: jmp     loc_1C0075DC9
 */
