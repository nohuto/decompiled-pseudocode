/*
 * XREFs of WPP_RECORDER_SF_DP @ 0x1C004FAA4
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DP @ 0x1C004FAA4
 * Reason: Hex-Rays returned no pseudocode for 0x1C004FAA4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004FAA4: mov     r11, rsp
 * 00000001C004FAA7: mov     [r11+8], rbx
 * 00000001C004FAAB: push    rbp
 * 00000001C004FAAC: sub     rsp, 50h
 * 00000001C004FAB0: mov     rbx, rcx
 * 00000001C004FAB3: mov     ebp, 0Fh
 * 00000001C004FAB8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004FABF: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C004FAC6: jz      short loc_1C004FB12
 * 00000001C004FAC8: cmp     byte ptr [rcx+29h], 2
 * 00000001C004FACC: jb      short loc_1C004FB12
 * 00000001C004FACE: and     qword ptr [r11-18h], 0
 * 00000001C004FAD3: lea     rdx, [r11+38h]
 * 00000001C004FAD7: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004FADE: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C004FAE5: mov     rcx, [rcx+18h]
 * 00000001C004FAE9: mov     qword ptr [r11-20h], 8
 * 00000001C004FAF1: mov     [r11-28h], rdx
 * 00000001C004FAF5: lea     rdx, [r11+30h]
 * 00000001C004FAF9: mov     qword ptr [r11-30h], 4
 * 00000001C004FB01: mov     [r11-38h], rdx
 * 00000001C004FB05: lea     edx, [rbp+1Ch]
 * 00000001C004FB08: movzx   r9d, bp
 * 00000001C004FB0C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004FB12: and     [rsp+58h+var_10], 0
 * 00000001C004FB18: lea     rax, [rsp+58h+arg_30]
 * 00000001C004FB20: mov     [rsp+58h+var_18], 8
 * 00000001C004FB29: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C004FB30: mov     [rsp+58h+var_20], rax
 * 00000001C004FB35: mov     edx, 2
 * 00000001C004FB3A: lea     rax, [rsp+58h+arg_28]
 * 00000001C004FB42: mov     [rsp+58h+var_28], 4
 * 00000001C004FB4B: mov     [rsp+58h+var_30], rax
 * 00000001C004FB50: mov     rcx, rbx
 * 00000001C004FB53: mov     [rsp+58h+var_38], bp
 * 00000001C004FB58: lea     r8d, [rdx+11h]
 * 00000001C004FB5C: call    cs:__imp_WppAutoLogTrace
 * 00000001C004FB63: nop     dword ptr [rax+rax+00h]
 * 00000001C004FB68: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004FB6D: add     rsp, 50h
 * 00000001C004FB71: pop     rbp
 * 00000001C004FB72: retn
 */
