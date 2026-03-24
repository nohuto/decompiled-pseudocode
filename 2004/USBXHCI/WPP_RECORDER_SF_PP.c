/*
 * XREFs of WPP_RECORDER_SF_PP @ 0x1C003BEE8
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003B900 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PP @ 0x1C003BEE8
 * Reason: Hex-Rays returned no pseudocode for 0x1C003BEE8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003BEE8: mov     r11, rsp
 * 00000001C003BEEB: mov     [r11+8], rbx
 * 00000001C003BEEF: mov     [r11+10h], rsi
 * 00000001C003BEF3: push    rdi
 * 00000001C003BEF4: sub     rsp, 50h
 * 00000001C003BEF8: mov     rbx, rcx
 * 00000001C003BEFB: mov     esi, 0Ch
 * 00000001C003BF00: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003BF07: lea     edi, [rsi-4]
 * 00000001C003BF0A: mov     eax, [rcx+2Ch]
 * 00000001C003BF0D: test    al, 10h
 * 00000001C003BF0F: jz      short loc_1C003BF53
 * 00000001C003BF11: cmp     byte ptr [rcx+29h], 3
 * 00000001C003BF15: jb      short loc_1C003BF53
 * 00000001C003BF17: and     qword ptr [r11-18h], 0
 * 00000001C003BF1C: lea     rdx, [r11+38h]
 * 00000001C003BF20: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003BF27: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003BF2E: mov     rcx, [rcx+18h]
 * 00000001C003BF32: mov     [r11-20h], rdi
 * 00000001C003BF36: mov     [r11-28h], rdx
 * 00000001C003BF3A: lea     rdx, [r11+30h]
 * 00000001C003BF3E: mov     [r11-30h], rdi
 * 00000001C003BF42: mov     [r11-38h], rdx
 * 00000001C003BF46: lea     edx, [rsi+1Fh]
 * 00000001C003BF49: movzx   r9d, si
 * 00000001C003BF4D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003BF53: and     [rsp+58h+var_10], 0
 * 00000001C003BF59: lea     rax, [rsp+58h+arg_30]
 * 00000001C003BF61: mov     [rsp+58h+var_18], rdi
 * 00000001C003BF66: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003BF6D: mov     [rsp+58h+var_20], rax
 * 00000001C003BF72: mov     edx, 3
 * 00000001C003BF77: lea     rax, [rsp+58h+arg_28]
 * 00000001C003BF7F: mov     [rsp+58h+var_28], rdi
 * 00000001C003BF84: mov     [rsp+58h+var_30], rax
 * 00000001C003BF89: mov     rcx, rbx
 * 00000001C003BF8C: mov     [rsp+58h+var_38], si
 * 00000001C003BF91: lea     r8d, [rdx+2]
 * 00000001C003BF95: call    cs:__imp_WppAutoLogTrace
 * 00000001C003BF9C: nop     dword ptr [rax+rax+00h]
 * 00000001C003BFA1: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003BFA6: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003BFAB: add     rsp, 50h
 * 00000001C003BFAF: pop     rdi
 * 00000001C003BFB0: retn
 */
