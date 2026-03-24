/*
 * XREFs of WPP_RECORDER_SF_ddqq @ 0x1C00484CC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqq @ 0x1C00484CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00484CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00484CC: mov     r11, rsp
 * 00000001C00484CF: mov     [r11+8], rbx
 * 00000001C00484D3: mov     [r11+10h], rbp
 * 00000001C00484D7: mov     [r11+18h], rsi
 * 00000001C00484DB: push    rdi
 * 00000001C00484DC: sub     rsp, 70h
 * 00000001C00484E0: mov     ebp, 42h ; 'B'
 * 00000001C00484E5: mov     rbx, rcx
 * 00000001C00484E8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00484EF: lea     edi, [rbp-3Ah]
 * 00000001C00484F2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C00484F9: lea     esi, [rbp-3Eh]
 * 00000001C00484FC: jz      short loc_1C0048558
 * 00000001C00484FE: cmp     byte ptr [rcx+29h], 5
 * 00000001C0048502: jb      short loc_1C0048558
 * 00000001C0048504: and     qword ptr [r11-18h], 0
 * 00000001C0048509: lea     rdx, [r11+48h]
 * 00000001C004850D: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0048514: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C004851B: mov     rcx, [rcx+18h]
 * 00000001C004851F: mov     [r11-20h], rdi
 * 00000001C0048523: mov     [r11-28h], rdx
 * 00000001C0048527: lea     rdx, [r11+40h]
 * 00000001C004852B: mov     [r11-30h], rdi
 * 00000001C004852F: mov     [r11-38h], rdx
 * 00000001C0048533: lea     rdx, [r11+38h]
 * 00000001C0048537: mov     [r11-40h], rsi
 * 00000001C004853B: mov     [r11-48h], rdx
 * 00000001C004853F: lea     rdx, [r11+30h]
 * 00000001C0048543: mov     [r11-50h], rsi
 * 00000001C0048547: mov     [r11-58h], rdx
 * 00000001C004854B: lea     edx, [rbp-17h]
 * 00000001C004854E: movzx   r9d, bp
 * 00000001C0048552: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0048558: and     [rsp+78h+var_10], 0
 * 00000001C004855E: lea     rax, [rsp+78h+arg_40]
 * 00000001C0048566: mov     [rsp+78h+var_18], rdi
 * 00000001C004856B: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0048572: mov     [rsp+78h+var_20], rax
 * 00000001C0048577: mov     edx, 5
 * 00000001C004857C: mov     [rsp+78h+var_28], rdi
 * 00000001C0048581: lea     rax, [rsp+78h+arg_38]
 * 00000001C0048589: mov     [rsp+78h+var_30], rax
 * 00000001C004858E: mov     rcx, rbx
 * 00000001C0048591: mov     [rsp+78h+var_38], rsi
 * 00000001C0048596: lea     rax, [rsp+78h+arg_30]
 * 00000001C004859E: mov     [rsp+78h+var_40], rax
 * 00000001C00485A3: lea     r8d, [rdx+7]
 * 00000001C00485A7: lea     rax, [rsp+78h+arg_28]
 * 00000001C00485AF: mov     [rsp+78h+var_48], rsi
 * 00000001C00485B4: mov     [rsp+78h+var_50], rax
 * 00000001C00485B9: mov     [rsp+78h+var_58], bp
 * 00000001C00485BE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00485C5: nop     dword ptr [rax+rax+00h]
 * 00000001C00485CA: lea     r11, [rsp+78h+var_8]
 * 00000001C00485CF: mov     rbx, [r11+10h]
 * 00000001C00485D3: mov     rbp, [r11+18h]
 * 00000001C00485D7: mov     rsi, [r11+20h]
 * 00000001C00485DB: mov     rsp, r11
 * 00000001C00485DE: pop     rdi
 * 00000001C00485DF: retn
 */
