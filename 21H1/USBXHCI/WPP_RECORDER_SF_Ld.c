/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C004FB7C
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C004FB7C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004FB7C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004FB7C: mov     r11, rsp
 * 00000001C004FB7F: mov     [r11+8], rbx
 * 00000001C004FB83: mov     [r11+10h], rsi
 * 00000001C004FB87: push    rdi
 * 00000001C004FB88: sub     rsp, 50h
 * 00000001C004FB8C: mov     rbx, rcx
 * 00000001C004FB8F: mov     esi, 10h
 * 00000001C004FB94: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004FB9B: lea     edi, [rsi-0Ch]
 * 00000001C004FB9E: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C004FBA5: jz      short loc_1C004FBE9
 * 00000001C004FBA7: cmp     byte ptr [rcx+29h], 2
 * 00000001C004FBAB: jb      short loc_1C004FBE9
 * 00000001C004FBAD: and     qword ptr [r11-18h], 0
 * 00000001C004FBB2: lea     rdx, [r11+38h]
 * 00000001C004FBB6: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004FBBD: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C004FBC4: mov     rcx, [rcx+18h]
 * 00000001C004FBC8: mov     [r11-20h], rdi
 * 00000001C004FBCC: mov     [r11-28h], rdx
 * 00000001C004FBD0: lea     rdx, [r11+30h]
 * 00000001C004FBD4: mov     [r11-30h], rdi
 * 00000001C004FBD8: mov     [r11-38h], rdx
 * 00000001C004FBDC: lea     edx, [rsi+1Bh]
 * 00000001C004FBDF: movzx   r9d, si
 * 00000001C004FBE3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004FBE9: and     [rsp+58h+var_10], 0
 * 00000001C004FBEF: lea     rax, [rsp+58h+arg_30]
 * 00000001C004FBF7: mov     [rsp+58h+var_18], rdi
 * 00000001C004FBFC: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C004FC03: mov     [rsp+58h+var_20], rax
 * 00000001C004FC08: mov     edx, 2
 * 00000001C004FC0D: lea     rax, [rsp+58h+arg_28]
 * 00000001C004FC15: mov     [rsp+58h+var_28], rdi
 * 00000001C004FC1A: mov     [rsp+58h+var_30], rax
 * 00000001C004FC1F: mov     rcx, rbx
 * 00000001C004FC22: mov     [rsp+58h+var_38], si
 * 00000001C004FC27: lea     r8d, [rdx+11h]
 * 00000001C004FC2B: call    cs:__imp_WppAutoLogTrace
 * 00000001C004FC32: nop     dword ptr [rax+rax+00h]
 * 00000001C004FC37: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004FC3C: mov     rsi, [rsp+58h+arg_8]
 * 00000001C004FC41: add     rsp, 50h
 * 00000001C004FC45: pop     rdi
 * 00000001C004FC46: retn
 */
