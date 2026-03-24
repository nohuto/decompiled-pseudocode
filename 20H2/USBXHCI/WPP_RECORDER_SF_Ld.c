/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C00506EC
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C00506EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00506EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00506EC: mov     r11, rsp
 * 00000001C00506EF: mov     [r11+8], rbx
 * 00000001C00506F3: mov     [r11+10h], rsi
 * 00000001C00506F7: push    rdi
 * 00000001C00506F8: sub     rsp, 50h
 * 00000001C00506FC: mov     rbx, rcx
 * 00000001C00506FF: mov     esi, 10h
 * 00000001C0050704: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005070B: lea     edi, [rsi-0Ch]
 * 00000001C005070E: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C0050715: jz      short loc_1C0050759
 * 00000001C0050717: cmp     byte ptr [rcx+29h], 2
 * 00000001C005071B: jb      short loc_1C0050759
 * 00000001C005071D: and     qword ptr [r11-18h], 0
 * 00000001C0050722: lea     rdx, [r11+38h]
 * 00000001C0050726: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C005072D: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C0050734: mov     rcx, [rcx+18h]
 * 00000001C0050738: mov     [r11-20h], rdi
 * 00000001C005073C: mov     [r11-28h], rdx
 * 00000001C0050740: lea     rdx, [r11+30h]
 * 00000001C0050744: mov     [r11-30h], rdi
 * 00000001C0050748: mov     [r11-38h], rdx
 * 00000001C005074C: lea     edx, [rsi+1Bh]
 * 00000001C005074F: movzx   r9d, si
 * 00000001C0050753: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0050759: and     [rsp+58h+var_10], 0
 * 00000001C005075F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0050767: mov     [rsp+58h+var_18], rdi
 * 00000001C005076C: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C0050773: mov     [rsp+58h+var_20], rax
 * 00000001C0050778: mov     edx, 2
 * 00000001C005077D: lea     rax, [rsp+58h+arg_28]
 * 00000001C0050785: mov     [rsp+58h+var_28], rdi
 * 00000001C005078A: mov     [rsp+58h+var_30], rax
 * 00000001C005078F: mov     rcx, rbx
 * 00000001C0050792: mov     [rsp+58h+var_38], si
 * 00000001C0050797: lea     r8d, [rdx+11h]
 * 00000001C005079B: call    cs:__imp_WppAutoLogTrace
 * 00000001C00507A2: nop     dword ptr [rax+rax+00h]
 * 00000001C00507A7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00507AC: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00507B1: add     rsp, 50h
 * 00000001C00507B5: pop     rdi
 * 00000001C00507B6: retn
 */
