/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C01D9440
 * Callers:
 *     NtUserSetCursorPos @ 0x1C002E040 (NtUserSetCursorPos.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00BD284 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00D799C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DB758 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 *     NtUserInjectTouchInput @ 0x1C01FD9E0 (NtUserInjectTouchInput.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B088 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C01D9440
 * Reason: Hex-Rays returned no pseudocode for 0x1C01D9440
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01D9440: mov     [rsp+arg_0], rbx
 * 00000001C01D9445: mov     [rsp+arg_8], rbp
 * 00000001C01D944A: mov     [rsp+arg_10], rsi
 * 00000001C01D944F: push    rdi
 * 00000001C01D9450: sub     rsp, 40h
 * 00000001C01D9454: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01D945B: mov     esi, r8d
 * 00000001C01D945E: mov     r11d, r8d
 * 00000001C01D9461: shr     r11, 10h
 * 00000001C01D9465: movzx   edi, r9w
 * 00000001C01D9469: lea     r10d, [rsi-1]
 * 00000001C01D946D: movzx   ebx, dl
 * 00000001C01D9470: mov     ecx, r10d
 * 00000001C01D9473: and     r10d, 1Fh
 * 00000001C01D9477: shr     rcx, 5
 * 00000001C01D947B: lea     rax, [r11+r11*4]
 * 00000001C01D947F: and     ecx, 7FFh
 * 00000001C01D9485: lea     r9, [rcx+rax*4]
 * 00000001C01D9489: mov     ecx, r10d
 * 00000001C01D948C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C01D9493: mov     eax, [r10+r9*4+2Ch]
 * 00000001C01D9498: bt      eax, ecx
 * 00000001C01D949B: jnb     short loc_1C01D94E3
 * 00000001C01D949D: lea     rcx, [r11+r11*4]
 * 00000001C01D94A1: add     rcx, rcx
 * 00000001C01D94A4: cmp     [r10+rcx*8+29h], bl
 * 00000001C01D94A9: jb      short loc_1C01D94E3
 * 00000001C01D94AB: and     [rsp+48h+var_18], 0
 * 00000001C01D94B1: lea     rdx, [rsp+48h+arg_28]
 * 00000001C01D94B6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01D94BD: mov     r9d, edi
 * 00000001C01D94C0: mov     r8, [rsp+48h+arg_20]
 * 00000001C01D94C5: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01D94CA: mov     [rsp+48h+var_20], 4
 * 00000001C01D94D3: mov     [rsp+48h+var_28], rdx
 * 00000001C01D94D8: mov     edx, 2Bh ; '+'
 * 00000001C01D94DD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01D94E3: and     [rsp+48h+var_10], 0
 * 00000001C01D94E9: lea     rax, [rsp+48h+arg_28]
 * 00000001C01D94EE: mov     r9, [rsp+48h+arg_20]
 * 00000001C01D94F3: mov     r8d, esi
 * 00000001C01D94F6: mov     [rsp+48h+var_18], 4
 * 00000001C01D94FF: mov     edx, ebx
 * 00000001C01D9501: mov     [rsp+48h+var_20], rax
 * 00000001C01D9506: mov     rcx, rbp
 * 00000001C01D9509: mov     word ptr [rsp+48h+var_28], di
 * 00000001C01D950E: call    cs:__imp_WppAutoLogTrace
 * 00000001C01D9515: nop     dword ptr [rax+rax+00h]
 * 00000001C01D951A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01D951F: mov     rbp, [rsp+48h+arg_8]
 * 00000001C01D9524: mov     rsi, [rsp+48h+arg_10]
 * 00000001C01D9529: add     rsp, 40h
 * 00000001C01D952D: pop     rdi
 * 00000001C01D952E: retn
 */
