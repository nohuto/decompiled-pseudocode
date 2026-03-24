/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C003D574
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003CDE0 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C003D574
 * Reason: Hex-Rays returned no pseudocode for 0x1C003D574
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003D574: mov     r11, rsp
 * 00000001C003D577: mov     [r11+8], rbx
 * 00000001C003D57B: mov     [r11+10h], rsi
 * 00000001C003D57F: push    rdi
 * 00000001C003D580: sub     rsp, 50h
 * 00000001C003D584: mov     rbx, rcx
 * 00000001C003D587: mov     esi, 0Eh
 * 00000001C003D58C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003D593: lea     edi, [rsi-0Ah]
 * 00000001C003D596: mov     eax, [rcx+2Ch]
 * 00000001C003D599: test    al, 10h
 * 00000001C003D59B: jz      short loc_1C003D5DF
 * 00000001C003D59D: cmp     byte ptr [rcx+29h], 3
 * 00000001C003D5A1: jb      short loc_1C003D5DF
 * 00000001C003D5A3: and     qword ptr [r11-18h], 0
 * 00000001C003D5A8: lea     rdx, [r11+38h]
 * 00000001C003D5AC: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C003D5B3: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003D5BA: mov     rcx, [rcx+18h]
 * 00000001C003D5BE: mov     [r11-20h], rdi
 * 00000001C003D5C2: mov     [r11-28h], rdx
 * 00000001C003D5C6: lea     rdx, [r11+30h]
 * 00000001C003D5CA: mov     [r11-30h], rdi
 * 00000001C003D5CE: mov     [r11-38h], rdx
 * 00000001C003D5D2: lea     edx, [rsi+1Dh]
 * 00000001C003D5D5: movzx   r9d, si
 * 00000001C003D5D9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003D5DF: and     [rsp+58h+var_10], 0
 * 00000001C003D5E5: lea     rax, [rsp+58h+arg_30]
 * 00000001C003D5ED: mov     [rsp+58h+var_18], rdi
 * 00000001C003D5F2: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003D5F9: mov     [rsp+58h+var_20], rax
 * 00000001C003D5FE: mov     edx, 3
 * 00000001C003D603: lea     rax, [rsp+58h+arg_28]
 * 00000001C003D60B: mov     [rsp+58h+var_28], rdi
 * 00000001C003D610: mov     [rsp+58h+var_30], rax
 * 00000001C003D615: mov     rcx, rbx
 * 00000001C003D618: mov     [rsp+58h+var_38], si
 * 00000001C003D61D: lea     r8d, [rdx+2]
 * 00000001C003D621: call    cs:__imp_WppAutoLogTrace
 * 00000001C003D628: nop     dword ptr [rax+rax+00h]
 * 00000001C003D62D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003D632: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003D637: add     rsp, 50h
 * 00000001C003D63B: pop     rdi
 * 00000001C003D63C: retn
 */
