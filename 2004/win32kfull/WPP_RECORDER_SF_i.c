/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C01F64B4
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0006E1C (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C01F64B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01F64B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01F64B4: mov     r11, rsp
 * 00000001C01F64B7: mov     [r11+8], rbx
 * 00000001C01F64BB: push    rsi
 * 00000001C01F64BC: sub     rsp, 40h
 * 00000001C01F64C0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01F64C7: mov     esi, 0Ch
 * 00000001C01F64CC: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01F64D3: test    dword ptr [rcx+2Ch], 200h
 * 00000001C01F64DA: jz      short loc_1C01F6516
 * 00000001C01F64DC: cmp     byte ptr [rcx+29h], 4
 * 00000001C01F64E0: jb      short loc_1C01F6516
 * 00000001C01F64E2: and     qword ptr [r11-18h], 0
 * 00000001C01F64E7: lea     rdx, [r11+30h]
 * 00000001C01F64EB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01F64F2: lea     r8, WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids
 * 00000001C01F64F9: mov     rcx, [rcx+18h]
 * 00000001C01F64FD: mov     qword ptr [r11-20h], 8
 * 00000001C01F6505: mov     [r11-28h], rdx
 * 00000001C01F6509: lea     edx, [rsi+1Fh]
 * 00000001C01F650C: movzx   r9d, si
 * 00000001C01F6510: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01F6516: and     [rsp+48h+var_10], 0
 * 00000001C01F651C: lea     rax, [rsp+48h+arg_28]
 * 00000001C01F6521: mov     edx, 4
 * 00000001C01F6526: mov     [rsp+48h+var_18], 8
 * 00000001C01F652F: mov     [rsp+48h+var_20], rax
 * 00000001C01F6534: lea     r9, WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids
 * 00000001C01F653B: mov     rcx, rbx
 * 00000001C01F653E: mov     [rsp+48h+var_28], si
 * 00000001C01F6543: lea     r8d, [rdx+6]
 * 00000001C01F6547: call    cs:__imp_WppAutoLogTrace
 * 00000001C01F654E: nop     dword ptr [rax+rax+00h]
 * 00000001C01F6553: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01F6558: add     rsp, 40h
 * 00000001C01F655C: pop     rsi
 * 00000001C01F655D: retn
 */
