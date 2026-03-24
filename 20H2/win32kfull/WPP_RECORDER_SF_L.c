/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C01EF904
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF0D4 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C01EF904
 * Reason: Hex-Rays returned no pseudocode for 0x1C01EF904
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01EF904: mov     r11, rsp
 * 00000001C01EF907: mov     [r11+8], rbx
 * 00000001C01EF90B: push    rsi
 * 00000001C01EF90C: sub     rsp, 40h
 * 00000001C01EF910: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01EF917: mov     esi, 0Eh
 * 00000001C01EF91C: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01EF923: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C01EF92A: jz      short loc_1C01EF966
 * 00000001C01EF92C: cmp     byte ptr [rcx+29h], 4
 * 00000001C01EF930: jb      short loc_1C01EF966
 * 00000001C01EF932: and     qword ptr [r11-18h], 0
 * 00000001C01EF937: lea     rdx, [r11+30h]
 * 00000001C01EF93B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01EF942: lea     r8, WPP_b43beeb5a22232e36856aa8311da4939_Traceguids
 * 00000001C01EF949: mov     rcx, [rcx+18h]
 * 00000001C01EF94D: mov     qword ptr [r11-20h], 4
 * 00000001C01EF955: mov     [r11-28h], rdx
 * 00000001C01EF959: lea     edx, [rsi+1Dh]
 * 00000001C01EF95C: movzx   r9d, si
 * 00000001C01EF960: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01EF966: and     [rsp+48h+var_10], 0
 * 00000001C01EF96C: lea     rax, [rsp+48h+arg_28]
 * 00000001C01EF971: mov     edx, 4
 * 00000001C01EF976: mov     [rsp+48h+var_18], 4
 * 00000001C01EF97F: mov     [rsp+48h+var_20], rax
 * 00000001C01EF984: lea     r9, WPP_b43beeb5a22232e36856aa8311da4939_Traceguids
 * 00000001C01EF98B: mov     rcx, rbx
 * 00000001C01EF98E: mov     [rsp+48h+var_28], si
 * 00000001C01EF993: lea     r8d, [rdx+0Fh]
 * 00000001C01EF997: call    cs:__imp_WppAutoLogTrace
 * 00000001C01EF99E: nop     dword ptr [rax+rax+00h]
 * 00000001C01EF9A3: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01EF9A8: add     rsp, 40h
 * 00000001C01EF9AC: pop     rsi
 * 00000001C01EF9AD: retn
 */
