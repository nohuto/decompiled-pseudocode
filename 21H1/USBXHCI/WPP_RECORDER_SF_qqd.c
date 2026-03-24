/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C002FFF8
 * Callers:
 *     CommonBuffer_WorkItem @ 0x1C00146F0 (CommonBuffer_WorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C002FFF8
 * Reason: Hex-Rays returned no pseudocode for 0x1C002FFF8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002FFF8: mov     r11, rsp
 * 00000001C002FFFB: mov     [r11+8], rbx
 * 00000001C002FFFF: mov     [r11+10h], rbp
 * 00000001C0030003: push    rdi
 * 00000001C0030004: sub     rsp, 60h
 * 00000001C0030008: mov     rbx, rcx
 * 00000001C003000B: mov     ebp, 0Eh
 * 00000001C0030010: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0030017: lea     edi, [rbp-6]
 * 00000001C003001A: mov     eax, [rcx+2Ch]
 * 00000001C003001D: test    al, al
 * 00000001C003001F: jns     short loc_1C0030073
 * 00000001C0030021: cmp     byte ptr [rcx+29h], 5
 * 00000001C0030025: jb      short loc_1C0030073
 * 00000001C0030027: and     qword ptr [r11-18h], 0
 * 00000001C003002C: lea     rdx, [r11+40h]
 * 00000001C0030030: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0030037: lea     r8, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C003003E: mov     rcx, [rcx+18h]
 * 00000001C0030042: mov     qword ptr [r11-20h], 4
 * 00000001C003004A: mov     [r11-28h], rdx
 * 00000001C003004E: lea     rdx, [r11+38h]
 * 00000001C0030052: mov     [r11-30h], rdi
 * 00000001C0030056: mov     [r11-38h], rdx
 * 00000001C003005A: lea     rdx, [r11+30h]
 * 00000001C003005E: mov     [r11-40h], rdi
 * 00000001C0030062: mov     [r11-48h], rdx
 * 00000001C0030066: lea     edx, [rbp+1Dh]
 * 00000001C0030069: movzx   r9d, bp
 * 00000001C003006D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0030073: and     [rsp+68h+var_10], 0
 * 00000001C0030079: lea     rax, [rsp+68h+arg_38]
 * 00000001C0030081: mov     [rsp+68h+var_18], 4
 * 00000001C003008A: lea     r9, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C0030091: mov     [rsp+68h+var_20], rax
 * 00000001C0030096: mov     r8d, edi
 * 00000001C0030099: mov     [rsp+68h+var_28], rdi
 * 00000001C003009E: lea     rax, [rsp+68h+arg_30]
 * 00000001C00300A6: mov     [rsp+68h+var_30], rax
 * 00000001C00300AB: mov     edx, 5
 * 00000001C00300B0: lea     rax, [rsp+68h+arg_28]
 * 00000001C00300B8: mov     [rsp+68h+var_38], rdi
 * 00000001C00300BD: mov     [rsp+68h+var_40], rax
 * 00000001C00300C2: mov     rcx, rbx
 * 00000001C00300C5: mov     [rsp+68h+var_48], bp
 * 00000001C00300CA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00300D1: nop     dword ptr [rax+rax+00h]
 * 00000001C00300D6: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00300DB: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00300E0: add     rsp, 60h
 * 00000001C00300E4: pop     rdi
 * 00000001C00300E5: retn
 */
