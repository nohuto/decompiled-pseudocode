/*
 * XREFs of WPP_RECORDER_SF_ddqqq @ 0x1C003C380
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C0039190 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C0039320 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqq @ 0x1C003C380
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C380
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C380: mov     r11, rsp
 * 00000001C003C383: mov     [r11+8], rbx
 * 00000001C003C387: mov     [r11+10h], rbp
 * 00000001C003C38B: mov     [r11+18h], rsi
 * 00000001C003C38F: push    rdi
 * 00000001C003C390: sub     rsp, 80h
 * 00000001C003C397: mov     rdi, rcx
 * 00000001C003C39A: movzx   ebx, r9w
 * 00000001C003C39E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C3A5: mov     esi, 4
 * 00000001C003C3AA: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003C3B1: lea     ebp, [rsi+4]
 * 00000001C003C3B4: jz      short loc_1C003C41B
 * 00000001C003C3B6: cmp     [rcx+29h], sil
 * 00000001C003C3BA: jb      short loc_1C003C41B
 * 00000001C003C3BC: and     qword ptr [r11-18h], 0
 * 00000001C003C3C1: lea     rdx, [r11+50h]
 * 00000001C003C3C5: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C003C3CC: lea     r8, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003C3D3: mov     rcx, [rcx+18h]
 * 00000001C003C3D7: mov     r9d, ebx
 * 00000001C003C3DA: mov     [r11-20h], rbp
 * 00000001C003C3DE: mov     [r11-28h], rdx
 * 00000001C003C3E2: lea     rdx, [r11+48h]
 * 00000001C003C3E6: mov     [r11-30h], rbp
 * 00000001C003C3EA: mov     [r11-38h], rdx
 * 00000001C003C3EE: lea     rdx, [r11+40h]
 * 00000001C003C3F2: mov     [r11-40h], rbp
 * 00000001C003C3F6: mov     [r11-48h], rdx
 * 00000001C003C3FA: lea     rdx, [r11+38h]
 * 00000001C003C3FE: mov     [r11-50h], rsi
 * 00000001C003C402: mov     [r11-58h], rdx
 * 00000001C003C406: lea     rdx, [r11+30h]
 * 00000001C003C40A: mov     [r11-60h], rsi
 * 00000001C003C40E: mov     [r11-68h], rdx
 * 00000001C003C412: lea     edx, [rsi+27h]
 * 00000001C003C415: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C41B: and     [rsp+88h+var_10], 0
 * 00000001C003C421: lea     rax, [rsp+88h+arg_48]
 * 00000001C003C429: mov     [rsp+88h+var_18], rbp
 * 00000001C003C42E: lea     r9, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003C435: mov     [rsp+88h+var_20], rax
 * 00000001C003C43A: mov     r8d, 0Dh
 * 00000001C003C440: mov     [rsp+88h+var_28], rbp
 * 00000001C003C445: lea     rax, [rsp+88h+arg_40]
 * 00000001C003C44D: mov     [rsp+88h+var_30], rax
 * 00000001C003C452: mov     edx, esi
 * 00000001C003C454: mov     [rsp+88h+var_38], rbp
 * 00000001C003C459: lea     rax, [rsp+88h+arg_38]
 * 00000001C003C461: mov     [rsp+88h+var_40], rax
 * 00000001C003C466: mov     rcx, rdi
 * 00000001C003C469: mov     [rsp+88h+var_48], rsi
 * 00000001C003C46E: lea     rax, [rsp+88h+arg_30]
 * 00000001C003C476: mov     [rsp+88h+var_50], rax
 * 00000001C003C47B: lea     rax, [rsp+88h+arg_28]
 * 00000001C003C483: mov     [rsp+88h+var_58], rsi
 * 00000001C003C488: mov     [rsp+88h+var_60], rax
 * 00000001C003C48D: mov     [rsp+88h+var_68], bx
 * 00000001C003C492: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C499: nop     dword ptr [rax+rax+00h]
 * 00000001C003C49E: lea     r11, [rsp+88h+var_8]
 * 00000001C003C4A6: mov     rbx, [r11+10h]
 * 00000001C003C4AA: mov     rbp, [r11+18h]
 * 00000001C003C4AE: mov     rsi, [r11+20h]
 * 00000001C003C4B2: mov     rsp, r11
 * 00000001C003C4B5: pop     rdi
 * 00000001C003C4B6: retn
 */
