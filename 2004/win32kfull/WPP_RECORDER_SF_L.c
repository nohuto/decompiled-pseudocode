/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C01F0574
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EFD44 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C01F0574
 * Reason: Hex-Rays returned no pseudocode for 0x1C01F0574
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01F0574: mov     r11, rsp
 * 00000001C01F0577: mov     [r11+8], rbx
 * 00000001C01F057B: push    rsi
 * 00000001C01F057C: sub     rsp, 40h
 * 00000001C01F0580: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01F0587: mov     esi, 0Eh
 * 00000001C01F058C: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01F0593: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C01F059A: jz      short loc_1C01F05D6
 * 00000001C01F059C: cmp     byte ptr [rcx+29h], 4
 * 00000001C01F05A0: jb      short loc_1C01F05D6
 * 00000001C01F05A2: and     qword ptr [r11-18h], 0
 * 00000001C01F05A7: lea     rdx, [r11+30h]
 * 00000001C01F05AB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01F05B2: lea     r8, WPP_b43beeb5a22232e36856aa8311da4939_Traceguids
 * 00000001C01F05B9: mov     rcx, [rcx+18h]
 * 00000001C01F05BD: mov     qword ptr [r11-20h], 4
 * 00000001C01F05C5: mov     [r11-28h], rdx
 * 00000001C01F05C9: lea     edx, [rsi+1Dh]
 * 00000001C01F05CC: movzx   r9d, si
 * 00000001C01F05D0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01F05D6: and     [rsp+48h+var_10], 0
 * 00000001C01F05DC: lea     rax, [rsp+48h+arg_28]
 * 00000001C01F05E1: mov     edx, 4
 * 00000001C01F05E6: mov     [rsp+48h+var_18], 4
 * 00000001C01F05EF: mov     [rsp+48h+var_20], rax
 * 00000001C01F05F4: lea     r9, WPP_b43beeb5a22232e36856aa8311da4939_Traceguids
 * 00000001C01F05FB: mov     rcx, rbx
 * 00000001C01F05FE: mov     [rsp+48h+var_28], si
 * 00000001C01F0603: lea     r8d, [rdx+0Fh]
 * 00000001C01F0607: call    cs:__imp_WppAutoLogTrace
 * 00000001C01F060E: nop     dword ptr [rax+rax+00h]
 * 00000001C01F0613: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01F0618: add     rsp, 40h
 * 00000001C01F061C: pop     rsi
 * 00000001C01F061D: retn
 */
