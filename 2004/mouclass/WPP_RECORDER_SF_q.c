/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00058B0
 * Callers:
 *     MouseClassPoRequestComplete @ 0x1C0001910 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C00050D0 (MouseClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00058B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00058B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00058B0: mov     r11, rsp
 * 00000001C00058B3: mov     [r11+8], rbx
 * 00000001C00058B7: push    rdi
 * 00000001C00058B8: sub     rsp, 40h
 * 00000001C00058BC: mov     rdi, rcx
 * 00000001C00058BF: movzx   ebx, r9w
 * 00000001C00058C3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00058CA: mov     eax, [rcx+2Ch]
 * 00000001C00058CD: test    al, 10h
 * 00000001C00058CF: jz      short loc_1C000590C
 * 00000001C00058D1: cmp     byte ptr [rcx+29h], 2
 * 00000001C00058D5: jb      short loc_1C000590C
 * 00000001C00058D7: and     qword ptr [r11-18h], 0
 * 00000001C00058DC: lea     rdx, [r11+30h]
 * 00000001C00058E0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00058E7: lea     r8, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C00058EE: mov     rcx, [rcx+18h]
 * 00000001C00058F2: mov     r9d, ebx
 * 00000001C00058F5: mov     qword ptr [r11-20h], 8
 * 00000001C00058FD: mov     [r11-28h], rdx
 * 00000001C0005901: mov     edx, 2Bh ; '+'
 * 00000001C0005906: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000590C: and     [rsp+48h+var_10], 0
 * 00000001C0005912: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005917: mov     edx, 2
 * 00000001C000591C: mov     [rsp+48h+var_18], 8
 * 00000001C0005925: mov     [rsp+48h+var_20], rax
 * 00000001C000592A: lea     r9, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C0005931: mov     rcx, rdi
 * 00000001C0005934: mov     [rsp+48h+var_28], bx
 * 00000001C0005939: lea     r8d, [rdx+3]
 * 00000001C000593D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005944: nop     dword ptr [rax+rax+00h]
 * 00000001C0005949: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000594E: add     rsp, 40h
 * 00000001C0005952: pop     rdi
 * 00000001C0005953: retn
 */
