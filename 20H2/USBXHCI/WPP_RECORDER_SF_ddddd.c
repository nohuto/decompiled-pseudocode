/*
 * XREFs of WPP_RECORDER_SF_DDDDD @ 0x1C0040470
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     TR_EnsureSegments @ 0x1C00098D0 (TR_EnsureSegments.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C000DA60 (Bulk_Stage_EstimateRequiredSegments.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C000DB28 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DBF8 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDD @ 0x1C0040470
 * Reason: Hex-Rays returned no pseudocode for 0x1C0040470
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0040470: mov     r11, rsp
 * 00000001C0040473: mov     [r11+8], rbx
 * 00000001C0040477: mov     [r11+10h], rbp
 * 00000001C004047B: mov     [r11+18h], rsi
 * 00000001C004047F: push    rdi
 * 00000001C0040480: sub     rsp, 80h
 * 00000001C0040487: mov     rsi, rcx
 * 00000001C004048A: movzx   edi, r9w
 * 00000001C004048E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0040495: mov     ebp, 4
 * 00000001C004049A: movzx   ebx, dl
 * 00000001C004049D: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00404A4: jz      short loc_1C004050B
 * 00000001C00404A6: cmp     [rcx+29h], bl
 * 00000001C00404A9: jb      short loc_1C004050B
 * 00000001C00404AB: and     qword ptr [r11-18h], 0
 * 00000001C00404B0: lea     rdx, [r11+50h]
 * 00000001C00404B4: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C00404BB: mov     r9d, edi
 * 00000001C00404BE: mov     r8, [rsp+88h+arg_20]
 * 00000001C00404C6: mov     rcx, [rcx+18h]
 * 00000001C00404CA: mov     [r11-20h], rbp
 * 00000001C00404CE: mov     [r11-28h], rdx
 * 00000001C00404D2: lea     rdx, [r11+48h]
 * 00000001C00404D6: mov     [r11-30h], rbp
 * 00000001C00404DA: mov     [r11-38h], rdx
 * 00000001C00404DE: lea     rdx, [r11+40h]
 * 00000001C00404E2: mov     [r11-40h], rbp
 * 00000001C00404E6: mov     [r11-48h], rdx
 * 00000001C00404EA: lea     rdx, [r11+38h]
 * 00000001C00404EE: mov     [r11-50h], rbp
 * 00000001C00404F2: mov     [r11-58h], rdx
 * 00000001C00404F6: lea     rdx, [r11+30h]
 * 00000001C00404FA: mov     [r11-60h], rbp
 * 00000001C00404FE: mov     [r11-68h], rdx
 * 00000001C0040502: lea     edx, [rbp+27h]
 * 00000001C0040505: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004050B: and     [rsp+88h+var_10], 0
 * 00000001C0040511: lea     rax, [rsp+88h+arg_48]
 * 00000001C0040519: mov     r9, [rsp+88h+arg_20]
 * 00000001C0040521: mov     r8d, 0Eh
 * 00000001C0040527: mov     [rsp+88h+var_18], rbp
 * 00000001C004052C: mov     edx, ebx
 * 00000001C004052E: mov     [rsp+88h+var_20], rax
 * 00000001C0040533: mov     rcx, rsi
 * 00000001C0040536: mov     [rsp+88h+var_28], rbp
 * 00000001C004053B: lea     rax, [rsp+88h+arg_40]
 * 00000001C0040543: mov     [rsp+88h+var_30], rax
 * 00000001C0040548: lea     rax, [rsp+88h+arg_38]
 * 00000001C0040550: mov     [rsp+88h+var_38], rbp
 * 00000001C0040555: mov     [rsp+88h+var_40], rax
 * 00000001C004055A: lea     rax, [rsp+88h+arg_30]
 * 00000001C0040562: mov     [rsp+88h+var_48], rbp
 * 00000001C0040567: mov     [rsp+88h+var_50], rax
 * 00000001C004056C: lea     rax, [rsp+88h+arg_28]
 * 00000001C0040574: mov     [rsp+88h+var_58], rbp
 * 00000001C0040579: mov     [rsp+88h+var_60], rax
 * 00000001C004057E: mov     [rsp+88h+var_68], di
 * 00000001C0040583: call    cs:__imp_WppAutoLogTrace
 * 00000001C004058A: nop     dword ptr [rax+rax+00h]
 * 00000001C004058F: lea     r11, [rsp+88h+var_8]
 * 00000001C0040597: mov     rbx, [r11+10h]
 * 00000001C004059B: mov     rbp, [r11+18h]
 * 00000001C004059F: mov     rsi, [r11+20h]
 * 00000001C00405A3: mov     rsp, r11
 * 00000001C00405A6: pop     rdi
 * 00000001C00405A7: retn
 */
