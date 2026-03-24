/*
 * XREFs of WPP_RECORDER_SF_PP @ 0x1C003D3C8
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003CDE0 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PP @ 0x1C003D3C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C003D3C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003D3C8: mov     r11, rsp
 * 00000001C003D3CB: mov     [r11+8], rbx
 * 00000001C003D3CF: mov     [r11+10h], rsi
 * 00000001C003D3D3: push    rdi
 * 00000001C003D3D4: sub     rsp, 50h
 * 00000001C003D3D8: mov     rbx, rcx
 * 00000001C003D3DB: mov     esi, 0Ch
 * 00000001C003D3E0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003D3E7: lea     edi, [rsi-4]
 * 00000001C003D3EA: mov     eax, [rcx+2Ch]
 * 00000001C003D3ED: test    al, 10h
 * 00000001C003D3EF: jz      short loc_1C003D433
 * 00000001C003D3F1: cmp     byte ptr [rcx+29h], 3
 * 00000001C003D3F5: jb      short loc_1C003D433
 * 00000001C003D3F7: and     qword ptr [r11-18h], 0
 * 00000001C003D3FC: lea     rdx, [r11+38h]
 * 00000001C003D400: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C003D407: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003D40E: mov     rcx, [rcx+18h]
 * 00000001C003D412: mov     [r11-20h], rdi
 * 00000001C003D416: mov     [r11-28h], rdx
 * 00000001C003D41A: lea     rdx, [r11+30h]
 * 00000001C003D41E: mov     [r11-30h], rdi
 * 00000001C003D422: mov     [r11-38h], rdx
 * 00000001C003D426: lea     edx, [rsi+1Fh]
 * 00000001C003D429: movzx   r9d, si
 * 00000001C003D42D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003D433: and     [rsp+58h+var_10], 0
 * 00000001C003D439: lea     rax, [rsp+58h+arg_30]
 * 00000001C003D441: mov     [rsp+58h+var_18], rdi
 * 00000001C003D446: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003D44D: mov     [rsp+58h+var_20], rax
 * 00000001C003D452: mov     edx, 3
 * 00000001C003D457: lea     rax, [rsp+58h+arg_28]
 * 00000001C003D45F: mov     [rsp+58h+var_28], rdi
 * 00000001C003D464: mov     [rsp+58h+var_30], rax
 * 00000001C003D469: mov     rcx, rbx
 * 00000001C003D46C: mov     [rsp+58h+var_38], si
 * 00000001C003D471: lea     r8d, [rdx+2]
 * 00000001C003D475: call    cs:__imp_WppAutoLogTrace
 * 00000001C003D47C: nop     dword ptr [rax+rax+00h]
 * 00000001C003D481: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003D486: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003D48B: add     rsp, 50h
 * 00000001C003D48F: pop     rdi
 * 00000001C003D490: retn
 */
