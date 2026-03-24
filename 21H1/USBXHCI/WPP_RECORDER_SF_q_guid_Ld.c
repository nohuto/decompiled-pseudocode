/*
 * XREFs of WPP_RECORDER_SF_q_guid_Ld @ 0x1C0015648
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006CDA8 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_Ld @ 0x1C0015648
 * Reason: Hex-Rays returned no pseudocode for 0x1C0015648
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0015648: mov     [rsp+arg_0], rbx
 * 00000001C001564D: mov     [rsp+arg_8], rsi
 * 00000001C0015652: mov     [rsp+arg_10], rdi
 * 00000001C0015657: push    r15
 * 00000001C0015659: sub     rsp, 70h
 * 00000001C001565D: mov     rbx, [rsp+78h+arg_30]
 * 00000001C0015665: mov     rdi, rcx
 * 00000001C0015668: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001566F: mov     esi, 4
 * 00000001C0015674: mov     r15d, 0FFh
 * 00000001C001567A: mov     eax, [rcx+2Ch]
 * 00000001C001567D: test    al, 8
 * 00000001C001567F: jnz     loc_1C0026616
 * 00000001C0015685: and     [rsp+78h+var_10], 0
 * 00000001C001568B: lea     rax, [rsp+78h+arg_40]
 * 00000001C0015693: mov     [rsp+78h+var_18], rsi
 * 00000001C0015698: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C001569F: mov     [rsp+78h+var_20], rax
 * 00000001C00156A4: mov     r8d, esi
 * 00000001C00156A7: mov     [rsp+78h+var_28], rsi
 * 00000001C00156AC: lea     rax, [rsp+78h+arg_38]
 * 00000001C00156B4: mov     [rsp+78h+var_30], rax
 * 00000001C00156B9: mov     edx, esi
 * 00000001C00156BB: mov     [rsp+78h+var_38], 10h
 * 00000001C00156C4: lea     rax, [rsp+78h+arg_28]
 * 00000001C00156CC: mov     [rsp+78h+var_40], rbx
 * 00000001C00156D1: mov     rcx, rdi
 * 00000001C00156D4: mov     [rsp+78h+var_48], 8
 * 00000001C00156DD: mov     [rsp+78h+var_50], rax
 * 00000001C00156E2: mov     word ptr [rsp+78h+var_58], r15w
 * 00000001C00156E8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00156EF: nop     dword ptr [rax+rax+00h]
 * 00000001C00156F4: lea     r11, [rsp+78h+var_8]
 * 00000001C00156F9: mov     rbx, [r11+10h]
 * 00000001C00156FD: mov     rsi, [r11+18h]
 * 00000001C0015701: mov     rdi, [r11+20h]
 * 00000001C0015705: mov     rsp, r11
 * 00000001C0015708: pop     r15
 * 00000001C001570A: retn
 * 00000001C0026616: cmp     [rcx+29h], sil
 * 00000001C002661A: jb      loc_1C0015685
 * 00000001C0026620: and     [rsp+78h+var_18], 0
 * 00000001C0026626: lea     rdx, [rsp+78h+arg_40]
 * 00000001C002662E: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0026635: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C002663C: mov     rcx, [rcx+18h]
 * 00000001C0026640: mov     [rsp+78h+var_20], rsi
 * 00000001C0026645: mov     [rsp+78h+var_28], rdx
 * 00000001C002664A: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0026652: mov     [rsp+78h+var_30], rsi
 * 00000001C0026657: mov     [rsp+78h+var_38], rdx
 * 00000001C002665C: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0026664: mov     [rsp+78h+var_40], 10h
 * 00000001C002666D: mov     [rsp+78h+var_48], rbx
 * 00000001C0026672: mov     [rsp+78h+var_50], 8
 * 00000001C002667B: mov     [rsp+78h+var_58], rdx
 * 00000001C0026680: mov     edx, 2Bh ; '+'
 * 00000001C0026685: movzx   r9d, r15w
 * 00000001C0026689: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002668F: nop
 * 00000001C0026690: jmp     loc_1C0015685
 */
