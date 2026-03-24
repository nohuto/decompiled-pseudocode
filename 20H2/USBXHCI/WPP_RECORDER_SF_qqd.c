/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C00314D8
 * Callers:
 *     CommonBuffer_WorkItem @ 0x1C0015DF0 (CommonBuffer_WorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C00314D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00314D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00314D8: mov     r11, rsp
 * 00000001C00314DB: mov     [r11+8], rbx
 * 00000001C00314DF: mov     [r11+10h], rbp
 * 00000001C00314E3: push    rdi
 * 00000001C00314E4: sub     rsp, 60h
 * 00000001C00314E8: mov     rbx, rcx
 * 00000001C00314EB: mov     ebp, 0Eh
 * 00000001C00314F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00314F7: lea     edi, [rbp-6]
 * 00000001C00314FA: mov     eax, [rcx+2Ch]
 * 00000001C00314FD: test    al, al
 * 00000001C00314FF: jns     short loc_1C0031553
 * 00000001C0031501: cmp     byte ptr [rcx+29h], 5
 * 00000001C0031505: jb      short loc_1C0031553
 * 00000001C0031507: and     qword ptr [r11-18h], 0
 * 00000001C003150C: lea     rdx, [r11+40h]
 * 00000001C0031510: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0031517: lea     r8, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C003151E: mov     rcx, [rcx+18h]
 * 00000001C0031522: mov     qword ptr [r11-20h], 4
 * 00000001C003152A: mov     [r11-28h], rdx
 * 00000001C003152E: lea     rdx, [r11+38h]
 * 00000001C0031532: mov     [r11-30h], rdi
 * 00000001C0031536: mov     [r11-38h], rdx
 * 00000001C003153A: lea     rdx, [r11+30h]
 * 00000001C003153E: mov     [r11-40h], rdi
 * 00000001C0031542: mov     [r11-48h], rdx
 * 00000001C0031546: lea     edx, [rbp+1Dh]
 * 00000001C0031549: movzx   r9d, bp
 * 00000001C003154D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0031553: and     [rsp+68h+var_10], 0
 * 00000001C0031559: lea     rax, [rsp+68h+arg_38]
 * 00000001C0031561: mov     [rsp+68h+var_18], 4
 * 00000001C003156A: lea     r9, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C0031571: mov     [rsp+68h+var_20], rax
 * 00000001C0031576: mov     r8d, edi
 * 00000001C0031579: mov     [rsp+68h+var_28], rdi
 * 00000001C003157E: lea     rax, [rsp+68h+arg_30]
 * 00000001C0031586: mov     [rsp+68h+var_30], rax
 * 00000001C003158B: mov     edx, 5
 * 00000001C0031590: lea     rax, [rsp+68h+arg_28]
 * 00000001C0031598: mov     [rsp+68h+var_38], rdi
 * 00000001C003159D: mov     [rsp+68h+var_40], rax
 * 00000001C00315A2: mov     rcx, rbx
 * 00000001C00315A5: mov     [rsp+68h+var_48], bp
 * 00000001C00315AA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00315B1: nop     dword ptr [rax+rax+00h]
 * 00000001C00315B6: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00315BB: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00315C0: add     rsp, 60h
 * 00000001C00315C4: pop     rdi
 * 00000001C00315C5: retn
 */
