/*
 * XREFs of WPP_RECORDER_SF_DDLi @ 0x1C00443C8
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0042BE8 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLi @ 0x1C00443C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00443C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00443C8: mov     r11, rsp
 * 00000001C00443CB: mov     [r11+8], rbx
 * 00000001C00443CF: mov     [r11+10h], rbp
 * 00000001C00443D3: push    rdi
 * 00000001C00443D4: sub     rsp, 70h
 * 00000001C00443D8: mov     rbx, rcx
 * 00000001C00443DB: mov     edi, 4
 * 00000001C00443E0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00443E7: lea     ebp, [rdi+26h]
 * 00000001C00443EA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00443F1: jz      short loc_1C0044451
 * 00000001C00443F3: cmp     [rcx+29h], dil
 * 00000001C00443F7: jb      short loc_1C0044451
 * 00000001C00443F9: and     qword ptr [r11-18h], 0
 * 00000001C00443FE: lea     rdx, [r11+48h]
 * 00000001C0044402: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0044409: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0044410: mov     rcx, [rcx+18h]
 * 00000001C0044414: mov     qword ptr [r11-20h], 8
 * 00000001C004441C: mov     [r11-28h], rdx
 * 00000001C0044420: lea     rdx, [r11+40h]
 * 00000001C0044424: mov     [r11-30h], rdi
 * 00000001C0044428: mov     [r11-38h], rdx
 * 00000001C004442C: lea     rdx, [r11+38h]
 * 00000001C0044430: mov     [r11-40h], rdi
 * 00000001C0044434: mov     [r11-48h], rdx
 * 00000001C0044438: lea     rdx, [r11+30h]
 * 00000001C004443C: mov     [r11-50h], rdi
 * 00000001C0044440: mov     [r11-58h], rdx
 * 00000001C0044444: lea     edx, [rdi+27h]
 * 00000001C0044447: movzx   r9d, bp
 * 00000001C004444B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0044451: and     [rsp+78h+var_10], 0
 * 00000001C0044457: lea     rax, [rsp+78h+arg_40]
 * 00000001C004445F: mov     [rsp+78h+var_18], 8
 * 00000001C0044468: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C004446F: mov     [rsp+78h+var_20], rax
 * 00000001C0044474: mov     r8d, 0Eh
 * 00000001C004447A: mov     [rsp+78h+var_28], rdi
 * 00000001C004447F: lea     rax, [rsp+78h+arg_38]
 * 00000001C0044487: mov     [rsp+78h+var_30], rax
 * 00000001C004448C: mov     edx, edi
 * 00000001C004448E: mov     [rsp+78h+var_38], rdi
 * 00000001C0044493: lea     rax, [rsp+78h+arg_30]
 * 00000001C004449B: mov     [rsp+78h+var_40], rax
 * 00000001C00444A0: mov     rcx, rbx
 * 00000001C00444A3: lea     rax, [rsp+78h+arg_28]
 * 00000001C00444AB: mov     [rsp+78h+var_48], rdi
 * 00000001C00444B0: mov     [rsp+78h+var_50], rax
 * 00000001C00444B5: mov     [rsp+78h+var_58], bp
 * 00000001C00444BA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00444C1: nop     dword ptr [rax+rax+00h]
 * 00000001C00444C6: lea     r11, [rsp+78h+var_8]
 * 00000001C00444CB: mov     rbx, [r11+10h]
 * 00000001C00444CF: mov     rbp, [r11+18h]
 * 00000001C00444D3: mov     rsp, r11
 * 00000001C00444D6: pop     rdi
 * 00000001C00444D7: retn
 */
