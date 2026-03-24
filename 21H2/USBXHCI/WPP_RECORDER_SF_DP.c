/*
 * XREFs of WPP_RECORDER_SF_DP @ 0x1C004F9B4
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F688 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DP @ 0x1C004F9B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C004F9B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004F9B4: mov     r11, rsp
 * 00000001C004F9B7: mov     [r11+8], rbx
 * 00000001C004F9BB: push    rbp
 * 00000001C004F9BC: sub     rsp, 50h
 * 00000001C004F9C0: mov     rbx, rcx
 * 00000001C004F9C3: mov     ebp, 0Fh
 * 00000001C004F9C8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004F9CF: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C004F9D6: jz      short loc_1C004FA22
 * 00000001C004F9D8: cmp     byte ptr [rcx+29h], 2
 * 00000001C004F9DC: jb      short loc_1C004FA22
 * 00000001C004F9DE: and     qword ptr [r11-18h], 0
 * 00000001C004F9E3: lea     rdx, [r11+38h]
 * 00000001C004F9E7: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004F9EE: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C004F9F5: mov     rcx, [rcx+18h]
 * 00000001C004F9F9: mov     qword ptr [r11-20h], 8
 * 00000001C004FA01: mov     [r11-28h], rdx
 * 00000001C004FA05: lea     rdx, [r11+30h]
 * 00000001C004FA09: mov     qword ptr [r11-30h], 4
 * 00000001C004FA11: mov     [r11-38h], rdx
 * 00000001C004FA15: lea     edx, [rbp+1Ch]
 * 00000001C004FA18: movzx   r9d, bp
 * 00000001C004FA1C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004FA22: and     [rsp+58h+var_10], 0
 * 00000001C004FA28: lea     rax, [rsp+58h+arg_30]
 * 00000001C004FA30: mov     [rsp+58h+var_18], 8
 * 00000001C004FA39: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C004FA40: mov     [rsp+58h+var_20], rax
 * 00000001C004FA45: mov     edx, 2
 * 00000001C004FA4A: lea     rax, [rsp+58h+arg_28]
 * 00000001C004FA52: mov     [rsp+58h+var_28], 4
 * 00000001C004FA5B: mov     [rsp+58h+var_30], rax
 * 00000001C004FA60: mov     rcx, rbx
 * 00000001C004FA63: mov     [rsp+58h+var_38], bp
 * 00000001C004FA68: lea     r8d, [rdx+11h]
 * 00000001C004FA6C: call    cs:__imp_WppAutoLogTrace
 * 00000001C004FA73: nop     dword ptr [rax+rax+00h]
 * 00000001C004FA78: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004FA7D: add     rsp, 50h
 * 00000001C004FA81: pop     rbp
 * 00000001C004FA82: retn
 */
