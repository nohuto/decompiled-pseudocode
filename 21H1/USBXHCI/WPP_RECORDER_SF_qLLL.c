/*
 * XREFs of WPP_RECORDER_SF_qLLL @ 0x1C0008910
 * Callers:
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0008368 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_FindAndSetTargetState @ 0x1C0008760 (ESM_FindAndSetTargetState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLLL @ 0x1C0008910
 * Reason: Hex-Rays returned no pseudocode for 0x1C0008910
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0008910: mov     [rsp+arg_0], rbx
 * 00000001C0008915: mov     [rsp+arg_8], rbp
 * 00000001C000891A: push    rdi
 * 00000001C000891B: sub     rsp, 70h
 * 00000001C000891F: mov     rbx, rcx
 * 00000001C0008922: mov     edi, 4
 * 00000001C0008927: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000892E: lea     ebp, [rdi+8]
 * 00000001C0008931: test    dword ptr [rcx+2Ch], 10000h
 * 00000001C0008938: jnz     loc_1C002383A
 * 00000001C000893E: and     [rsp+78h+var_10], 0
 * 00000001C0008944: lea     rax, [rsp+78h+arg_40]
 * 00000001C000894C: mov     [rsp+78h+var_18], rdi
 * 00000001C0008951: lea     r9, WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids
 * 00000001C0008958: mov     [rsp+78h+var_20], rax
 * 00000001C000895D: mov     r8d, 11h
 * 00000001C0008963: mov     [rsp+78h+var_28], rdi
 * 00000001C0008968: lea     rax, [rsp+78h+arg_38]
 * 00000001C0008970: mov     [rsp+78h+var_30], rax
 * 00000001C0008975: mov     edx, edi
 * 00000001C0008977: mov     [rsp+78h+var_38], rdi
 * 00000001C000897C: lea     rax, [rsp+78h+arg_30]
 * 00000001C0008984: mov     [rsp+78h+var_40], rax
 * 00000001C0008989: mov     rcx, rbx
 * 00000001C000898C: lea     rax, [rsp+78h+arg_28]
 * 00000001C0008994: mov     [rsp+78h+var_48], 8
 * 00000001C000899D: mov     [rsp+78h+var_50], rax
 * 00000001C00089A2: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00089A7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00089AE: nop     dword ptr [rax+rax+00h]
 * 00000001C00089B3: lea     r11, [rsp+78h+var_8]
 * 00000001C00089B8: mov     rbx, [r11+10h]
 * 00000001C00089BC: mov     rbp, [r11+18h]
 * 00000001C00089C0: mov     rsp, r11
 * 00000001C00089C3: pop     rdi
 * 00000001C00089C4: retn
 * 00000001C002383A: cmp     [rcx+29h], dil
 * 00000001C002383E: jb      loc_1C000893E
 * 00000001C0023844: and     [rsp+78h+var_18], 0
 * 00000001C002384A: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0023852: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0023859: lea     r8, WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids
 * 00000001C0023860: mov     rcx, [rcx+18h]
 * 00000001C0023864: mov     [rsp+78h+var_20], rdi
 * 00000001C0023869: mov     [rsp+78h+var_28], rdx
 * 00000001C002386E: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0023876: mov     [rsp+78h+var_30], rdi
 * 00000001C002387B: mov     [rsp+78h+var_38], rdx
 * 00000001C0023880: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0023888: mov     [rsp+78h+var_40], rdi
 * 00000001C002388D: mov     [rsp+78h+var_48], rdx
 * 00000001C0023892: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002389A: mov     [rsp+78h+var_50], 8
 * 00000001C00238A3: mov     [rsp+78h+var_58], rdx
 * 00000001C00238A8: mov     edx, 2Bh ; '+'
 * 00000001C00238AD: movzx   r9d, bp
 * 00000001C00238B1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00238B7: nop
 * 00000001C00238B8: jmp     loc_1C000893E
 */
