/*
 * XREFs of WPP_RECORDER_SF_DDL @ 0x1C004416C
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C0042604 (Isoch_ProcessSegment.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0042BE8 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDL @ 0x1C004416C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004416C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004416C: mov     r11, rsp
 * 00000001C004416F: mov     [r11+8], rbx
 * 00000001C0044173: mov     [r11+10h], rbp
 * 00000001C0044177: mov     [r11+18h], rsi
 * 00000001C004417B: push    rdi
 * 00000001C004417C: sub     rsp, 60h
 * 00000001C0044180: mov     rsi, rcx
 * 00000001C0044183: movzx   edi, r9w
 * 00000001C0044187: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004418E: mov     ebp, 4
 * 00000001C0044193: movzx   ebx, dl
 * 00000001C0044196: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004419D: jz      short loc_1C00441EB
 * 00000001C004419F: cmp     [rcx+29h], bl
 * 00000001C00441A2: jb      short loc_1C00441EB
 * 00000001C00441A4: and     qword ptr [r11-18h], 0
 * 00000001C00441A9: lea     rdx, [r11+40h]
 * 00000001C00441AD: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00441B4: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00441BB: mov     rcx, [rcx+18h]
 * 00000001C00441BF: mov     r9d, edi
 * 00000001C00441C2: mov     [r11-20h], rbp
 * 00000001C00441C6: mov     [r11-28h], rdx
 * 00000001C00441CA: lea     rdx, [r11+38h]
 * 00000001C00441CE: mov     [r11-30h], rbp
 * 00000001C00441D2: mov     [r11-38h], rdx
 * 00000001C00441D6: lea     rdx, [r11+30h]
 * 00000001C00441DA: mov     [r11-40h], rbp
 * 00000001C00441DE: mov     [r11-48h], rdx
 * 00000001C00441E2: lea     edx, [rbp+27h]
 * 00000001C00441E5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00441EB: and     [rsp+68h+var_10], 0
 * 00000001C00441F1: lea     rax, [rsp+68h+arg_38]
 * 00000001C00441F9: mov     [rsp+68h+var_18], rbp
 * 00000001C00441FE: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0044205: mov     [rsp+68h+var_20], rax
 * 00000001C004420A: mov     r8d, 0Eh
 * 00000001C0044210: mov     [rsp+68h+var_28], rbp
 * 00000001C0044215: lea     rax, [rsp+68h+arg_30]
 * 00000001C004421D: mov     [rsp+68h+var_30], rax
 * 00000001C0044222: mov     edx, ebx
 * 00000001C0044224: lea     rax, [rsp+68h+arg_28]
 * 00000001C004422C: mov     [rsp+68h+var_38], rbp
 * 00000001C0044231: mov     [rsp+68h+var_40], rax
 * 00000001C0044236: mov     rcx, rsi
 * 00000001C0044239: mov     [rsp+68h+var_48], di
 * 00000001C004423E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0044245: nop     dword ptr [rax+rax+00h]
 * 00000001C004424A: lea     r11, [rsp+68h+var_8]
 * 00000001C004424F: mov     rbx, [r11+10h]
 * 00000001C0044253: mov     rbp, [r11+18h]
 * 00000001C0044257: mov     rsi, [r11+20h]
 * 00000001C004425B: mov     rsp, r11
 * 00000001C004425E: pop     rdi
 * 00000001C004425F: retn
 */
