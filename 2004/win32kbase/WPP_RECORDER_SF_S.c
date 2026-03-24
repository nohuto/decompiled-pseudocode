/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0155A3C
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C005CD24 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C005CD68 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C016397C (RIMConfigurePointerDevice.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0172768 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     tracePointerFlags @ 0x1C0172D48 (tracePointerFlags.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A5E04 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     UnpackMouseSettings @ 0x1C01AC7E0 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01AC930 (UnpackPenSettings.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B46E0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B4DD0 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B5500 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B5F30 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0155A3C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0155A3C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0155A3C: mov     [rsp+arg_0], rbx
 * 00000001C0155A41: mov     [rsp+arg_8], rbp
 * 00000001C0155A46: mov     [rsp+arg_10], rsi
 * 00000001C0155A4B: push    rdi
 * 00000001C0155A4C: push    r14
 * 00000001C0155A4E: push    r15
 * 00000001C0155A50: sub     rsp, 40h
 * 00000001C0155A54: mov     rbx, [rsp+58h+arg_28]
 * 00000001C0155A5C: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0155A60: mov     r14d, r8d
 * 00000001C0155A63: mov     r15, rcx
 * 00000001C0155A66: mov     esi, r8d
 * 00000001C0155A69: lea     r8, aNull; "NULL"
 * 00000001C0155A70: shr     rsi, 10h
 * 00000001C0155A74: movzx   ebp, r9w
 * 00000001C0155A78: lea     r11d, [r14-1]
 * 00000001C0155A7C: mov     edx, r11d
 * 00000001C0155A7F: and     r11d, 1Fh
 * 00000001C0155A83: shr     rdx, 5
 * 00000001C0155A87: lea     rax, [rsi+rsi*4]
 * 00000001C0155A8B: and     edx, 7FFh
 * 00000001C0155A91: lea     r10, [rdx+rax*4]
 * 00000001C0155A95: mov     edx, r11d
 * 00000001C0155A98: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0155A9F: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0155AA4: bt      eax, edx
 * 00000001C0155AA7: jnb     short loc_1C0155B16
 * 00000001C0155AA9: lea     r10, [rsi+rsi*4]
 * 00000001C0155AAD: add     r10, r10
 * 00000001C0155AB0: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C0155AB6: jb      short loc_1C0155B16
 * 00000001C0155AB8: test    rbx, rbx
 * 00000001C0155ABB: jz      short loc_1C0155ACE
 * 00000001C0155ABD: mov     rdx, rdi
 * 00000001C0155AC0: inc     rdx
 * 00000001C0155AC3: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0155AC7: jnz     short loc_1C0155AC0
 * 00000001C0155AC9: inc     rdx
 * 00000001C0155ACC: jmp     short loc_1C0155AD3
 * 00000001C0155ACE: mov     edx, 5
 * 00000001C0155AD3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0155ADA: test    rbx, rbx
 * 00000001C0155ADD: mov     rcx, rbx
 * 00000001C0155AE0: mov     r9d, ebp
 * 00000001C0155AE3: cmovz   rcx, r8
 * 00000001C0155AE7: and     [rsp+58h+var_28], 0
 * 00000001C0155AED: mov     r8, [rsp+58h+arg_20]
 * 00000001C0155AF5: mov     [rsp+58h+var_30], rdx
 * 00000001C0155AFA: mov     edx, 2Bh ; '+'
 * 00000001C0155AFF: mov     [rsp+58h+var_38], rcx
 * 00000001C0155B04: mov     rcx, [r11+r10*8+18h]
 * 00000001C0155B09: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0155B0F: lea     r8, aNull; "NULL"
 * 00000001C0155B16: test    rbx, rbx
 * 00000001C0155B19: jz      short loc_1C0155B29
 * 00000001C0155B1B: inc     rdi
 * 00000001C0155B1E: cmp     byte ptr [rbx+rdi], 0
 * 00000001C0155B22: jnz     short loc_1C0155B1B
 * 00000001C0155B24: inc     rdi
 * 00000001C0155B27: jmp     short loc_1C0155B2E
 * 00000001C0155B29: mov     edi, 5
 * 00000001C0155B2E: mov     r9, [rsp+58h+arg_20]
 * 00000001C0155B36: test    rbx, rbx
 * 00000001C0155B39: mov     edx, 4
 * 00000001C0155B3E: mov     rcx, r15
 * 00000001C0155B41: cmovz   rbx, r8
 * 00000001C0155B45: and     [rsp+58h+var_20], 0
 * 00000001C0155B4B: mov     [rsp+58h+var_28], rdi
 * 00000001C0155B50: mov     r8d, r14d
 * 00000001C0155B53: mov     [rsp+58h+var_30], rbx
 * 00000001C0155B58: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0155B5D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0155B64: nop     dword ptr [rax+rax+00h]
 * 00000001C0155B69: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0155B6E: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0155B73: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0155B78: add     rsp, 40h
 * 00000001C0155B7C: pop     r15
 * 00000001C0155B7E: pop     r14
 * 00000001C0155B80: pop     rdi
 * 00000001C0155B81: retn
 */
