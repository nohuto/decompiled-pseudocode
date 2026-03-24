/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C01A43BC
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01998CC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C019BA40 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019BD4C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019F4BC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019FD74 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AFEAC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C01A43BC
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A43BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A43BC: mov     [rsp+arg_0], rbx
 * 00000001C01A43C1: mov     [rsp+arg_8], rbp
 * 00000001C01A43C6: mov     [rsp+arg_10], rsi
 * 00000001C01A43CB: push    rdi
 * 00000001C01A43CC: sub     rsp, 40h
 * 00000001C01A43D0: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01A43D7: mov     esi, r8d
 * 00000001C01A43DA: mov     r11d, r8d
 * 00000001C01A43DD: shr     r11, 10h
 * 00000001C01A43E1: movzx   edi, r9w
 * 00000001C01A43E5: lea     r10d, [rsi-1]
 * 00000001C01A43E9: movzx   ebx, dl
 * 00000001C01A43EC: mov     ecx, r10d
 * 00000001C01A43EF: and     r10d, 1Fh
 * 00000001C01A43F3: shr     rcx, 5
 * 00000001C01A43F7: lea     rax, [r11+r11*4]
 * 00000001C01A43FB: and     ecx, 7FFh
 * 00000001C01A4401: lea     r9, [rcx+rax*4]
 * 00000001C01A4405: mov     ecx, r10d
 * 00000001C01A4408: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C01A440F: mov     eax, [r10+r9*4+2Ch]
 * 00000001C01A4414: bt      eax, ecx
 * 00000001C01A4417: jnb     short loc_1C01A445F
 * 00000001C01A4419: lea     rcx, [r11+r11*4]
 * 00000001C01A441D: add     rcx, rcx
 * 00000001C01A4420: cmp     [r10+rcx*8+29h], bl
 * 00000001C01A4425: jb      short loc_1C01A445F
 * 00000001C01A4427: and     [rsp+48h+var_18], 0
 * 00000001C01A442D: lea     rdx, [rsp+48h+arg_28]
 * 00000001C01A4432: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A4439: mov     r9d, edi
 * 00000001C01A443C: mov     r8, [rsp+48h+arg_20]
 * 00000001C01A4441: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01A4446: mov     [rsp+48h+var_20], 4
 * 00000001C01A444F: mov     [rsp+48h+var_28], rdx
 * 00000001C01A4454: mov     edx, 2Bh ; '+'
 * 00000001C01A4459: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A445F: and     [rsp+48h+var_10], 0
 * 00000001C01A4465: lea     rax, [rsp+48h+arg_28]
 * 00000001C01A446A: mov     r9, [rsp+48h+arg_20]
 * 00000001C01A446F: mov     r8d, esi
 * 00000001C01A4472: mov     [rsp+48h+var_18], 4
 * 00000001C01A447B: mov     edx, ebx
 * 00000001C01A447D: mov     [rsp+48h+var_20], rax
 * 00000001C01A4482: mov     rcx, rbp
 * 00000001C01A4485: mov     word ptr [rsp+48h+var_28], di
 * 00000001C01A448A: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A4491: nop     dword ptr [rax+rax+00h]
 * 00000001C01A4496: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01A449B: mov     rbp, [rsp+48h+arg_8]
 * 00000001C01A44A0: mov     rsi, [rsp+48h+arg_10]
 * 00000001C01A44A5: add     rsp, 40h
 * 00000001C01A44A9: pop     rdi
 * 00000001C01A44AA: retn
 */
