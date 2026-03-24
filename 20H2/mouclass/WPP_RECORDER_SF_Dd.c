/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C0002610
 * Callers:
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C0002610
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002610
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002610: mov     [rsp+arg_0], rbx
 * 00000001C0002615: push    rsi
 * 00000001C0002616: sub     rsp, 50h
 * 00000001C000261A: mov     rbx, rcx
 * 00000001C000261D: mov     esi, 43h ; 'C'
 * 00000001C0002622: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002629: mov     eax, [rcx+2Ch]
 * 00000001C000262C: test    al, 1
 * 00000001C000262E: jnz     loc_1C0004054
 * 00000001C0002634: mov     [rsp+58h+var_10], 0
 * 00000001C000263D: lea     rax, [rsp+58h+arg_30]
 * 00000001C0002645: mov     [rsp+58h+var_18], 4
 * 00000001C000264E: lea     r9, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C0002655: mov     [rsp+58h+var_20], rax
 * 00000001C000265A: mov     edx, 4
 * 00000001C000265F: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002667: mov     [rsp+58h+var_28], 4
 * 00000001C0002670: mov     [rsp+58h+var_30], rax
 * 00000001C0002675: mov     rcx, rbx
 * 00000001C0002678: mov     word ptr [rsp+58h+var_38], si
 * 00000001C000267D: lea     r8d, [rdx-3]
 * 00000001C0002681: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002688: nop     dword ptr [rax+rax+00h]
 * 00000001C000268D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002692: add     rsp, 50h
 * 00000001C0002696: pop     rsi
 * 00000001C0002697: retn
 * 00000001C0004054: cmp     byte ptr [rcx+29h], 4
 * 00000001C0004058: jb      loc_1C0002634
 * 00000001C000405E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004065: lea     rdx, [rsp+58h+arg_30]
 * 00000001C000406D: mov     rcx, [rcx+18h]
 * 00000001C0004071: lea     r8, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C0004078: mov     [rsp+58h+var_18], 0
 * 00000001C0004081: mov     [rsp+58h+var_20], 4
 * 00000001C000408A: mov     [rsp+58h+var_28], rdx
 * 00000001C000408F: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0004097: mov     [rsp+58h+var_30], 4
 * 00000001C00040A0: mov     [rsp+58h+var_38], rdx
 * 00000001C00040A5: mov     edx, 2Bh ; '+'
 * 00000001C00040AA: movzx   r9d, si
 * 00000001C00040AE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00040B4: nop
 * 00000001C00040B5: jmp     loc_1C0002634
 */
