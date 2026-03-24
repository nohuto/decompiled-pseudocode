/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00061A4
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C00010D0 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0005A60 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002ED0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00061A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00061A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00061A4: mov     r11, rsp
 * 00000001C00061A7: mov     [r11+8], rbx
 * 00000001C00061AB: push    rdi
 * 00000001C00061AC: sub     rsp, 40h
 * 00000001C00061B0: mov     rdi, rcx
 * 00000001C00061B3: movzx   ebx, r9w
 * 00000001C00061B7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00061BE: mov     eax, [rcx+2Ch]
 * 00000001C00061C1: test    al, 10h
 * 00000001C00061C3: jz      short loc_1C0006200
 * 00000001C00061C5: cmp     byte ptr [rcx+29h], 2
 * 00000001C00061C9: jb      short loc_1C0006200
 * 00000001C00061CB: and     qword ptr [r11-18h], 0
 * 00000001C00061D0: lea     rdx, [r11+30h]
 * 00000001C00061D4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00061DB: lea     r8, WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids
 * 00000001C00061E2: mov     rcx, [rcx+18h]
 * 00000001C00061E6: mov     r9d, ebx
 * 00000001C00061E9: mov     qword ptr [r11-20h], 8
 * 00000001C00061F1: mov     [r11-28h], rdx
 * 00000001C00061F5: mov     edx, 2Bh ; '+'
 * 00000001C00061FA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0006200: and     [rsp+48h+var_10], 0
 * 00000001C0006206: lea     rax, [rsp+48h+arg_28]
 * 00000001C000620B: mov     edx, 2
 * 00000001C0006210: mov     [rsp+48h+var_18], 8
 * 00000001C0006219: mov     [rsp+48h+var_20], rax
 * 00000001C000621E: lea     r9, WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids
 * 00000001C0006225: mov     rcx, rdi
 * 00000001C0006228: mov     [rsp+48h+var_28], bx
 * 00000001C000622D: lea     r8d, [rdx+3]
 * 00000001C0006231: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006238: nop     dword ptr [rax+rax+00h]
 * 00000001C000623D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0006242: add     rsp, 40h
 * 00000001C0006246: pop     rdi
 * 00000001C0006247: retn
 */
