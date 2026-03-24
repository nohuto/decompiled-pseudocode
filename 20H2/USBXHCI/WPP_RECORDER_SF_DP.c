/*
 * XREFs of WPP_RECORDER_SF_DP @ 0x1C0050614
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DP @ 0x1C0050614
 * Reason: Hex-Rays returned no pseudocode for 0x1C0050614
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0050614: mov     r11, rsp
 * 00000001C0050617: mov     [r11+8], rbx
 * 00000001C005061B: push    rbp
 * 00000001C005061C: sub     rsp, 50h
 * 00000001C0050620: mov     rbx, rcx
 * 00000001C0050623: mov     ebp, 0Fh
 * 00000001C0050628: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005062F: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C0050636: jz      short loc_1C0050682
 * 00000001C0050638: cmp     byte ptr [rcx+29h], 2
 * 00000001C005063C: jb      short loc_1C0050682
 * 00000001C005063E: and     qword ptr [r11-18h], 0
 * 00000001C0050643: lea     rdx, [r11+38h]
 * 00000001C0050647: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C005064E: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C0050655: mov     rcx, [rcx+18h]
 * 00000001C0050659: mov     qword ptr [r11-20h], 8
 * 00000001C0050661: mov     [r11-28h], rdx
 * 00000001C0050665: lea     rdx, [r11+30h]
 * 00000001C0050669: mov     qword ptr [r11-30h], 4
 * 00000001C0050671: mov     [r11-38h], rdx
 * 00000001C0050675: lea     edx, [rbp+1Ch]
 * 00000001C0050678: movzx   r9d, bp
 * 00000001C005067C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0050682: and     [rsp+58h+var_10], 0
 * 00000001C0050688: lea     rax, [rsp+58h+arg_30]
 * 00000001C0050690: mov     [rsp+58h+var_18], 8
 * 00000001C0050699: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C00506A0: mov     [rsp+58h+var_20], rax
 * 00000001C00506A5: mov     edx, 2
 * 00000001C00506AA: lea     rax, [rsp+58h+arg_28]
 * 00000001C00506B2: mov     [rsp+58h+var_28], 4
 * 00000001C00506BB: mov     [rsp+58h+var_30], rax
 * 00000001C00506C0: mov     rcx, rbx
 * 00000001C00506C3: mov     [rsp+58h+var_38], bp
 * 00000001C00506C8: lea     r8d, [rdx+11h]
 * 00000001C00506CC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00506D3: nop     dword ptr [rax+rax+00h]
 * 00000001C00506D8: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00506DD: add     rsp, 50h
 * 00000001C00506E1: pop     rbp
 * 00000001C00506E2: retn
 */
