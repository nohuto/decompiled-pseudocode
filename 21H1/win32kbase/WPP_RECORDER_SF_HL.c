/*
 * XREFs of WPP_RECORDER_SF_HL @ 0x1C01A42E4
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0195B88 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0196198 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019BD4C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_HL @ 0x1C01A42E4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A42E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A42E4: mov     r11, rsp
 * 00000001C01A42E7: mov     [r11+8], rbx
 * 00000001C01A42EB: push    rdi
 * 00000001C01A42EC: sub     rsp, 50h
 * 00000001C01A42F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01A42F7: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01A42FE: movzx   ebx, r9w
 * 00000001C01A4302: mov     eax, [rcx+2Ch]
 * 00000001C01A4305: test    al, 40h
 * 00000001C01A4307: jz      short loc_1C01A4354
 * 00000001C01A4309: cmp     byte ptr [rcx+29h], 2
 * 00000001C01A430D: jb      short loc_1C01A4354
 * 00000001C01A430F: and     qword ptr [r11-18h], 0
 * 00000001C01A4314: lea     rdx, [r11+38h]
 * 00000001C01A4318: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A431F: lea     r8, WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids
 * 00000001C01A4326: mov     rcx, [rcx+18h]
 * 00000001C01A432A: mov     r9d, ebx
 * 00000001C01A432D: mov     qword ptr [r11-20h], 4
 * 00000001C01A4335: mov     [r11-28h], rdx
 * 00000001C01A4339: lea     rdx, [r11+30h]
 * 00000001C01A433D: mov     qword ptr [r11-30h], 2
 * 00000001C01A4345: mov     [r11-38h], rdx
 * 00000001C01A4349: mov     edx, 2Bh ; '+'
 * 00000001C01A434E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A4354: and     [rsp+58h+var_10], 0
 * 00000001C01A435A: lea     rax, [rsp+58h+arg_30]
 * 00000001C01A4362: mov     [rsp+58h+var_18], 4
 * 00000001C01A436B: lea     r9, WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids
 * 00000001C01A4372: mov     [rsp+58h+var_20], rax
 * 00000001C01A4377: mov     edx, 2
 * 00000001C01A437C: lea     rax, [rsp+58h+arg_28]
 * 00000001C01A4384: mov     [rsp+58h+var_28], 2
 * 00000001C01A438D: mov     [rsp+58h+var_30], rax
 * 00000001C01A4392: mov     rcx, rdi
 * 00000001C01A4395: mov     [rsp+58h+var_38], bx
 * 00000001C01A439A: lea     r8d, [rdx+5]
 * 00000001C01A439E: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A43A5: nop     dword ptr [rax+rax+00h]
 * 00000001C01A43AA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A43AF: add     rsp, 50h
 * 00000001C01A43B3: pop     rdi
 * 00000001C01A43B4: retn
 */
