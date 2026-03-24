/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C01F5644
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0006CBC (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C01F5644
 * Reason: Hex-Rays returned no pseudocode for 0x1C01F5644
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01F5644: mov     r11, rsp
 * 00000001C01F5647: mov     [r11+8], rbx
 * 00000001C01F564B: push    rsi
 * 00000001C01F564C: sub     rsp, 40h
 * 00000001C01F5650: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01F5657: mov     esi, 0Ch
 * 00000001C01F565C: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01F5663: test    dword ptr [rcx+2Ch], 200h
 * 00000001C01F566A: jz      short loc_1C01F56A6
 * 00000001C01F566C: cmp     byte ptr [rcx+29h], 4
 * 00000001C01F5670: jb      short loc_1C01F56A6
 * 00000001C01F5672: and     qword ptr [r11-18h], 0
 * 00000001C01F5677: lea     rdx, [r11+30h]
 * 00000001C01F567B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01F5682: lea     r8, WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids
 * 00000001C01F5689: mov     rcx, [rcx+18h]
 * 00000001C01F568D: mov     qword ptr [r11-20h], 8
 * 00000001C01F5695: mov     [r11-28h], rdx
 * 00000001C01F5699: lea     edx, [rsi+1Fh]
 * 00000001C01F569C: movzx   r9d, si
 * 00000001C01F56A0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01F56A6: and     [rsp+48h+var_10], 0
 * 00000001C01F56AC: lea     rax, [rsp+48h+arg_28]
 * 00000001C01F56B1: mov     edx, 4
 * 00000001C01F56B6: mov     [rsp+48h+var_18], 8
 * 00000001C01F56BF: mov     [rsp+48h+var_20], rax
 * 00000001C01F56C4: lea     r9, WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids
 * 00000001C01F56CB: mov     rcx, rbx
 * 00000001C01F56CE: mov     [rsp+48h+var_28], si
 * 00000001C01F56D3: lea     r8d, [rdx+6]
 * 00000001C01F56D7: call    cs:__imp_WppAutoLogTrace
 * 00000001C01F56DE: nop     dword ptr [rax+rax+00h]
 * 00000001C01F56E3: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01F56E8: add     rsp, 40h
 * 00000001C01F56EC: pop     rsi
 * 00000001C01F56ED: retn
 */
