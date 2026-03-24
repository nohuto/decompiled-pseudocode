/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C01534DC
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00BD2F4 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00BD338 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C016141C (RIMConfigurePointerDevice.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0170338 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     tracePointerFlags @ 0x1C0170918 (tracePointerFlags.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A3A84 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     UnpackMouseSettings @ 0x1C01AA460 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01AA5B0 (UnpackPenSettings.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2370 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2A60 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3190 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3BC0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C01534DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C01534DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01534DC: mov     [rsp+arg_0], rbx
 * 00000001C01534E1: mov     [rsp+arg_8], rbp
 * 00000001C01534E6: mov     [rsp+arg_10], rsi
 * 00000001C01534EB: push    rdi
 * 00000001C01534EC: push    r14
 * 00000001C01534EE: push    r15
 * 00000001C01534F0: sub     rsp, 40h
 * 00000001C01534F4: mov     rbx, [rsp+58h+arg_28]
 * 00000001C01534FC: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0153500: mov     r14d, r8d
 * 00000001C0153503: mov     r15, rcx
 * 00000001C0153506: mov     esi, r8d
 * 00000001C0153509: lea     r8, aNull; "NULL"
 * 00000001C0153510: shr     rsi, 10h
 * 00000001C0153514: movzx   ebp, r9w
 * 00000001C0153518: lea     r11d, [r14-1]
 * 00000001C015351C: mov     edx, r11d
 * 00000001C015351F: and     r11d, 1Fh
 * 00000001C0153523: shr     rdx, 5
 * 00000001C0153527: lea     rax, [rsi+rsi*4]
 * 00000001C015352B: and     edx, 7FFh
 * 00000001C0153531: lea     r10, [rdx+rax*4]
 * 00000001C0153535: mov     edx, r11d
 * 00000001C0153538: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C015353F: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0153544: bt      eax, edx
 * 00000001C0153547: jnb     short loc_1C01535B6
 * 00000001C0153549: lea     r10, [rsi+rsi*4]
 * 00000001C015354D: add     r10, r10
 * 00000001C0153550: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C0153556: jb      short loc_1C01535B6
 * 00000001C0153558: test    rbx, rbx
 * 00000001C015355B: jz      short loc_1C015356E
 * 00000001C015355D: mov     rdx, rdi
 * 00000001C0153560: inc     rdx
 * 00000001C0153563: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0153567: jnz     short loc_1C0153560
 * 00000001C0153569: inc     rdx
 * 00000001C015356C: jmp     short loc_1C0153573
 * 00000001C015356E: mov     edx, 5
 * 00000001C0153573: mov     rax, cs:pfnWppTraceMessage
 * 00000001C015357A: test    rbx, rbx
 * 00000001C015357D: mov     rcx, rbx
 * 00000001C0153580: mov     r9d, ebp
 * 00000001C0153583: cmovz   rcx, r8
 * 00000001C0153587: and     [rsp+58h+var_28], 0
 * 00000001C015358D: mov     r8, [rsp+58h+arg_20]
 * 00000001C0153595: mov     [rsp+58h+var_30], rdx
 * 00000001C015359A: mov     edx, 2Bh ; '+'
 * 00000001C015359F: mov     [rsp+58h+var_38], rcx
 * 00000001C01535A4: mov     rcx, [r11+r10*8+18h]
 * 00000001C01535A9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01535AF: lea     r8, aNull; "NULL"
 * 00000001C01535B6: test    rbx, rbx
 * 00000001C01535B9: jz      short loc_1C01535C9
 * 00000001C01535BB: inc     rdi
 * 00000001C01535BE: cmp     byte ptr [rbx+rdi], 0
 * 00000001C01535C2: jnz     short loc_1C01535BB
 * 00000001C01535C4: inc     rdi
 * 00000001C01535C7: jmp     short loc_1C01535CE
 * 00000001C01535C9: mov     edi, 5
 * 00000001C01535CE: mov     r9, [rsp+58h+arg_20]
 * 00000001C01535D6: test    rbx, rbx
 * 00000001C01535D9: mov     edx, 4
 * 00000001C01535DE: mov     rcx, r15
 * 00000001C01535E1: cmovz   rbx, r8
 * 00000001C01535E5: and     [rsp+58h+var_20], 0
 * 00000001C01535EB: mov     [rsp+58h+var_28], rdi
 * 00000001C01535F0: mov     r8d, r14d
 * 00000001C01535F3: mov     [rsp+58h+var_30], rbx
 * 00000001C01535F8: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C01535FD: call    cs:__imp_WppAutoLogTrace
 * 00000001C0153604: nop     dword ptr [rax+rax+00h]
 * 00000001C0153609: mov     rbx, [rsp+58h+arg_0]
 * 00000001C015360E: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0153613: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0153618: add     rsp, 40h
 * 00000001C015361C: pop     r15
 * 00000001C015361E: pop     r14
 * 00000001C0153620: pop     rdi
 * 00000001C0153621: retn
 */
