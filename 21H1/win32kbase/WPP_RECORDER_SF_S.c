/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C015BD8C
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C004F1B4 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C004F1F8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C0169CCC (RIMConfigurePointerDevice.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0178A98 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     tracePointerFlags @ 0x1C0179078 (tracePointerFlags.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01ABB64 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     UnpackMouseSettings @ 0x1C01B2540 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01B2690 (UnpackPenSettings.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BA440 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BAB30 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB260 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BBC90 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C015BD8C
 * Reason: Hex-Rays returned no pseudocode for 0x1C015BD8C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C015BD8C: mov     [rsp+arg_0], rbx
 * 00000001C015BD91: mov     [rsp+arg_8], rbp
 * 00000001C015BD96: mov     [rsp+arg_10], rsi
 * 00000001C015BD9B: push    rdi
 * 00000001C015BD9C: push    r14
 * 00000001C015BD9E: push    r15
 * 00000001C015BDA0: sub     rsp, 40h
 * 00000001C015BDA4: mov     rbx, [rsp+58h+arg_28]
 * 00000001C015BDAC: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C015BDB0: mov     r14d, r8d
 * 00000001C015BDB3: mov     r15, rcx
 * 00000001C015BDB6: mov     esi, r8d
 * 00000001C015BDB9: lea     r8, aNull; "NULL"
 * 00000001C015BDC0: shr     rsi, 10h
 * 00000001C015BDC4: movzx   ebp, r9w
 * 00000001C015BDC8: lea     r11d, [r14-1]
 * 00000001C015BDCC: mov     edx, r11d
 * 00000001C015BDCF: and     r11d, 1Fh
 * 00000001C015BDD3: shr     rdx, 5
 * 00000001C015BDD7: lea     rax, [rsi+rsi*4]
 * 00000001C015BDDB: and     edx, 7FFh
 * 00000001C015BDE1: lea     r10, [rdx+rax*4]
 * 00000001C015BDE5: mov     edx, r11d
 * 00000001C015BDE8: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C015BDEF: mov     eax, [r11+r10*4+2Ch]
 * 00000001C015BDF4: bt      eax, edx
 * 00000001C015BDF7: jnb     short loc_1C015BE66
 * 00000001C015BDF9: lea     r10, [rsi+rsi*4]
 * 00000001C015BDFD: add     r10, r10
 * 00000001C015BE00: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C015BE06: jb      short loc_1C015BE66
 * 00000001C015BE08: test    rbx, rbx
 * 00000001C015BE0B: jz      short loc_1C015BE1E
 * 00000001C015BE0D: mov     rdx, rdi
 * 00000001C015BE10: inc     rdx
 * 00000001C015BE13: cmp     byte ptr [rbx+rdx], 0
 * 00000001C015BE17: jnz     short loc_1C015BE10
 * 00000001C015BE19: inc     rdx
 * 00000001C015BE1C: jmp     short loc_1C015BE23
 * 00000001C015BE1E: mov     edx, 5
 * 00000001C015BE23: mov     rax, cs:pfnWppTraceMessage
 * 00000001C015BE2A: test    rbx, rbx
 * 00000001C015BE2D: mov     rcx, rbx
 * 00000001C015BE30: mov     r9d, ebp
 * 00000001C015BE33: cmovz   rcx, r8
 * 00000001C015BE37: and     [rsp+58h+var_28], 0
 * 00000001C015BE3D: mov     r8, [rsp+58h+arg_20]
 * 00000001C015BE45: mov     [rsp+58h+var_30], rdx
 * 00000001C015BE4A: mov     edx, 2Bh ; '+'
 * 00000001C015BE4F: mov     [rsp+58h+var_38], rcx
 * 00000001C015BE54: mov     rcx, [r11+r10*8+18h]
 * 00000001C015BE59: call    cs:__guard_dispatch_icall_fptr
 * 00000001C015BE5F: lea     r8, aNull; "NULL"
 * 00000001C015BE66: test    rbx, rbx
 * 00000001C015BE69: jz      short loc_1C015BE79
 * 00000001C015BE6B: inc     rdi
 * 00000001C015BE6E: cmp     byte ptr [rbx+rdi], 0
 * 00000001C015BE72: jnz     short loc_1C015BE6B
 * 00000001C015BE74: inc     rdi
 * 00000001C015BE77: jmp     short loc_1C015BE7E
 * 00000001C015BE79: mov     edi, 5
 * 00000001C015BE7E: mov     r9, [rsp+58h+arg_20]
 * 00000001C015BE86: test    rbx, rbx
 * 00000001C015BE89: mov     edx, 4
 * 00000001C015BE8E: mov     rcx, r15
 * 00000001C015BE91: cmovz   rbx, r8
 * 00000001C015BE95: and     [rsp+58h+var_20], 0
 * 00000001C015BE9B: mov     [rsp+58h+var_28], rdi
 * 00000001C015BEA0: mov     r8d, r14d
 * 00000001C015BEA3: mov     [rsp+58h+var_30], rbx
 * 00000001C015BEA8: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C015BEAD: call    cs:__imp_WppAutoLogTrace
 * 00000001C015BEB4: nop     dword ptr [rax+rax+00h]
 * 00000001C015BEB9: mov     rbx, [rsp+58h+arg_0]
 * 00000001C015BEBE: mov     rbp, [rsp+58h+arg_8]
 * 00000001C015BEC3: mov     rsi, [rsp+58h+arg_10]
 * 00000001C015BEC8: add     rsp, 40h
 * 00000001C015BECC: pop     r15
 * 00000001C015BECE: pop     r14
 * 00000001C015BED0: pop     rdi
 * 00000001C015BED1: retn
 */
