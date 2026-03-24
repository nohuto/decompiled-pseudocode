/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0005C40
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C0005230 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C0005C40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005C40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005C40: mov     r11, rsp
 * 00000001C0005C43: mov     [r11+8], rbx
 * 00000001C0005C47: push    rbp
 * 00000001C0005C48: sub     rsp, 50h
 * 00000001C0005C4C: mov     rbx, rcx
 * 00000001C0005C4F: mov     ebp, 5Ah ; 'Z'
 * 00000001C0005C54: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005C5B: mov     eax, [rcx+2Ch]
 * 00000001C0005C5E: test    al, 10h
 * 00000001C0005C60: jz      short loc_1C0005CAC
 * 00000001C0005C62: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005C66: jb      short loc_1C0005CAC
 * 00000001C0005C68: and     qword ptr [r11-18h], 0
 * 00000001C0005C6D: lea     rdx, [r11+38h]
 * 00000001C0005C71: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005C78: lea     r8, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C0005C7F: mov     rcx, [rcx+18h]
 * 00000001C0005C83: mov     qword ptr [r11-20h], 4
 * 00000001C0005C8B: mov     [r11-28h], rdx
 * 00000001C0005C8F: lea     rdx, [r11+30h]
 * 00000001C0005C93: mov     qword ptr [r11-30h], 8
 * 00000001C0005C9B: mov     [r11-38h], rdx
 * 00000001C0005C9F: lea     edx, [rbp-2Fh]
 * 00000001C0005CA2: movzx   r9d, bp
 * 00000001C0005CA6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005CAC: and     [rsp+58h+var_10], 0
 * 00000001C0005CB2: lea     rax, [rsp+58h+arg_30]
 * 00000001C0005CBA: mov     [rsp+58h+var_18], 4
 * 00000001C0005CC3: lea     r9, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C0005CCA: mov     [rsp+58h+var_20], rax
 * 00000001C0005CCF: mov     edx, 2
 * 00000001C0005CD4: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005CDC: mov     [rsp+58h+var_28], 8
 * 00000001C0005CE5: mov     [rsp+58h+var_30], rax
 * 00000001C0005CEA: mov     rcx, rbx
 * 00000001C0005CED: mov     [rsp+58h+var_38], bp
 * 00000001C0005CF2: lea     r8d, [rdx+3]
 * 00000001C0005CF6: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005CFD: nop     dword ptr [rax+rax+00h]
 * 00000001C0005D02: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005D07: add     rsp, 50h
 * 00000001C0005D0B: pop     rbp
 * 00000001C0005D0C: retn
 */
