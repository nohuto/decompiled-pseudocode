/*
 * XREFs of WPP_RECORDER_SF_DDDDD @ 0x1C003EF90
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     TR_EnsureSegments @ 0x1C0008EF0 (TR_EnsureSegments.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000B5E4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C000D190 (Bulk_Stage_EstimateRequiredSegments.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C000D258 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000D328 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDD @ 0x1C003EF90
 * Reason: Hex-Rays returned no pseudocode for 0x1C003EF90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003EF90: mov     r11, rsp
 * 00000001C003EF93: mov     [r11+8], rbx
 * 00000001C003EF97: mov     [r11+10h], rbp
 * 00000001C003EF9B: mov     [r11+18h], rsi
 * 00000001C003EF9F: push    rdi
 * 00000001C003EFA0: sub     rsp, 80h
 * 00000001C003EFA7: mov     rsi, rcx
 * 00000001C003EFAA: movzx   edi, r9w
 * 00000001C003EFAE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003EFB5: mov     ebp, 4
 * 00000001C003EFBA: movzx   ebx, dl
 * 00000001C003EFBD: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C003EFC4: jz      short loc_1C003F02B
 * 00000001C003EFC6: cmp     [rcx+29h], bl
 * 00000001C003EFC9: jb      short loc_1C003F02B
 * 00000001C003EFCB: and     qword ptr [r11-18h], 0
 * 00000001C003EFD0: lea     rdx, [r11+50h]
 * 00000001C003EFD4: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003EFDB: mov     r9d, edi
 * 00000001C003EFDE: mov     r8, [rsp+88h+arg_20]
 * 00000001C003EFE6: mov     rcx, [rcx+18h]
 * 00000001C003EFEA: mov     [r11-20h], rbp
 * 00000001C003EFEE: mov     [r11-28h], rdx
 * 00000001C003EFF2: lea     rdx, [r11+48h]
 * 00000001C003EFF6: mov     [r11-30h], rbp
 * 00000001C003EFFA: mov     [r11-38h], rdx
 * 00000001C003EFFE: lea     rdx, [r11+40h]
 * 00000001C003F002: mov     [r11-40h], rbp
 * 00000001C003F006: mov     [r11-48h], rdx
 * 00000001C003F00A: lea     rdx, [r11+38h]
 * 00000001C003F00E: mov     [r11-50h], rbp
 * 00000001C003F012: mov     [r11-58h], rdx
 * 00000001C003F016: lea     rdx, [r11+30h]
 * 00000001C003F01A: mov     [r11-60h], rbp
 * 00000001C003F01E: mov     [r11-68h], rdx
 * 00000001C003F022: lea     edx, [rbp+27h]
 * 00000001C003F025: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003F02B: and     [rsp+88h+var_10], 0
 * 00000001C003F031: lea     rax, [rsp+88h+arg_48]
 * 00000001C003F039: mov     r9, [rsp+88h+arg_20]
 * 00000001C003F041: mov     r8d, 0Eh
 * 00000001C003F047: mov     [rsp+88h+var_18], rbp
 * 00000001C003F04C: mov     edx, ebx
 * 00000001C003F04E: mov     [rsp+88h+var_20], rax
 * 00000001C003F053: mov     rcx, rsi
 * 00000001C003F056: mov     [rsp+88h+var_28], rbp
 * 00000001C003F05B: lea     rax, [rsp+88h+arg_40]
 * 00000001C003F063: mov     [rsp+88h+var_30], rax
 * 00000001C003F068: lea     rax, [rsp+88h+arg_38]
 * 00000001C003F070: mov     [rsp+88h+var_38], rbp
 * 00000001C003F075: mov     [rsp+88h+var_40], rax
 * 00000001C003F07A: lea     rax, [rsp+88h+arg_30]
 * 00000001C003F082: mov     [rsp+88h+var_48], rbp
 * 00000001C003F087: mov     [rsp+88h+var_50], rax
 * 00000001C003F08C: lea     rax, [rsp+88h+arg_28]
 * 00000001C003F094: mov     [rsp+88h+var_58], rbp
 * 00000001C003F099: mov     [rsp+88h+var_60], rax
 * 00000001C003F09E: mov     [rsp+88h+var_68], di
 * 00000001C003F0A3: call    cs:__imp_WppAutoLogTrace
 * 00000001C003F0AA: nop     dword ptr [rax+rax+00h]
 * 00000001C003F0AF: lea     r11, [rsp+88h+var_8]
 * 00000001C003F0B7: mov     rbx, [r11+10h]
 * 00000001C003F0BB: mov     rbp, [r11+18h]
 * 00000001C003F0BF: mov     rsi, [r11+20h]
 * 00000001C003F0C3: mov     rsp, r11
 * 00000001C003F0C6: pop     rdi
 * 00000001C003F0C7: retn
 */
