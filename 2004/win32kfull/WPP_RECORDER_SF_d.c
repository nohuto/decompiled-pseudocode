/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C01DA100
 * Callers:
 *     NtUserSetCursorPos @ 0x1C003A370 (NtUserSetCursorPos.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C003A428 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B340C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DC418 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     xxxInjectTouchInput @ 0x1C01DD30C (xxxInjectTouchInput.c)
 *     NtUserInjectTouchInput @ 0x1C01FE850 (NtUserInjectTouchInput.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BF18 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C01DA100
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DA100
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DA100: mov     [rsp+arg_0], rbx
 * 00000001C01DA105: mov     [rsp+arg_8], rbp
 * 00000001C01DA10A: mov     [rsp+arg_10], rsi
 * 00000001C01DA10F: push    rdi
 * 00000001C01DA110: sub     rsp, 40h
 * 00000001C01DA114: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01DA11B: mov     esi, r8d
 * 00000001C01DA11E: mov     r11d, r8d
 * 00000001C01DA121: shr     r11, 10h
 * 00000001C01DA125: movzx   edi, r9w
 * 00000001C01DA129: lea     r10d, [rsi-1]
 * 00000001C01DA12D: movzx   ebx, dl
 * 00000001C01DA130: mov     ecx, r10d
 * 00000001C01DA133: and     r10d, 1Fh
 * 00000001C01DA137: shr     rcx, 5
 * 00000001C01DA13B: lea     rax, [r11+r11*4]
 * 00000001C01DA13F: and     ecx, 7FFh
 * 00000001C01DA145: lea     r9, [rcx+rax*4]
 * 00000001C01DA149: mov     ecx, r10d
 * 00000001C01DA14C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C01DA153: mov     eax, [r10+r9*4+2Ch]
 * 00000001C01DA158: bt      eax, ecx
 * 00000001C01DA15B: jnb     short loc_1C01DA1A3
 * 00000001C01DA15D: lea     rcx, [r11+r11*4]
 * 00000001C01DA161: add     rcx, rcx
 * 00000001C01DA164: cmp     [r10+rcx*8+29h], bl
 * 00000001C01DA169: jb      short loc_1C01DA1A3
 * 00000001C01DA16B: and     [rsp+48h+var_18], 0
 * 00000001C01DA171: lea     rdx, [rsp+48h+arg_28]
 * 00000001C01DA176: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01DA17D: mov     r9d, edi
 * 00000001C01DA180: mov     r8, [rsp+48h+arg_20]
 * 00000001C01DA185: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01DA18A: mov     [rsp+48h+var_20], 4
 * 00000001C01DA193: mov     [rsp+48h+var_28], rdx
 * 00000001C01DA198: mov     edx, 2Bh ; '+'
 * 00000001C01DA19D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01DA1A3: and     [rsp+48h+var_10], 0
 * 00000001C01DA1A9: lea     rax, [rsp+48h+arg_28]
 * 00000001C01DA1AE: mov     r9, [rsp+48h+arg_20]
 * 00000001C01DA1B3: mov     r8d, esi
 * 00000001C01DA1B6: mov     [rsp+48h+var_18], 4
 * 00000001C01DA1BF: mov     edx, ebx
 * 00000001C01DA1C1: mov     [rsp+48h+var_20], rax
 * 00000001C01DA1C6: mov     rcx, rbp
 * 00000001C01DA1C9: mov     word ptr [rsp+48h+var_28], di
 * 00000001C01DA1CE: call    cs:__imp_WppAutoLogTrace
 * 00000001C01DA1D5: nop     dword ptr [rax+rax+00h]
 * 00000001C01DA1DA: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01DA1DF: mov     rbp, [rsp+48h+arg_8]
 * 00000001C01DA1E4: mov     rsi, [rsp+48h+arg_10]
 * 00000001C01DA1E9: add     rsp, 40h
 * 00000001C01DA1ED: pop     rdi
 * 00000001C01DA1EE: retn
 */
