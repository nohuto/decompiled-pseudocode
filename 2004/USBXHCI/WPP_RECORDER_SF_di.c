/*
 * XREFs of WPP_RECORDER_SF_di @ 0x1C001602C
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C006E8E0 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C006EA54 (Controller_PopulateDeviceFlagsFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_di @ 0x1C001602C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001602C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001602C: mov     [rsp+arg_0], rbx
 * 00000001C0016031: mov     [rsp+arg_8], rsi
 * 00000001C0016036: push    rdi
 * 00000001C0016037: sub     rsp, 50h
 * 00000001C001603B: mov     rsi, rcx
 * 00000001C001603E: movzx   edi, r9w
 * 00000001C0016042: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0016049: movzx   ebx, dl
 * 00000001C001604C: mov     eax, [rcx+2Ch]
 * 00000001C001604F: test    al, 8
 * 00000001C0016051: jnz     loc_1C002A3A6
 * 00000001C0016057: and     [rsp+58h+var_10], 0
 * 00000001C001605D: lea     rax, [rsp+58h+arg_30]
 * 00000001C0016065: mov     [rsp+58h+var_18], 8
 * 00000001C001606E: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0016075: mov     [rsp+58h+var_20], rax
 * 00000001C001607A: mov     r8d, 4
 * 00000001C0016080: lea     rax, [rsp+58h+arg_28]
 * 00000001C0016088: mov     [rsp+58h+var_28], 4
 * 00000001C0016091: mov     [rsp+58h+var_30], rax
 * 00000001C0016096: mov     edx, ebx
 * 00000001C0016098: mov     rcx, rsi
 * 00000001C001609B: mov     word ptr [rsp+58h+var_38], di
 * 00000001C00160A0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00160A7: nop     dword ptr [rax+rax+00h]
 * 00000001C00160AC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00160B1: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00160B6: add     rsp, 50h
 * 00000001C00160BA: pop     rdi
 * 00000001C00160BB: retn
 * 00000001C002A3A6: cmp     [rcx+29h], bl
 * 00000001C002A3A9: jb      loc_1C0016057
 * 00000001C002A3AF: and     [rsp+58h+var_18], 0
 * 00000001C002A3B5: lea     rdx, [rsp+58h+arg_30]
 * 00000001C002A3BD: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002A3C4: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C002A3CB: mov     rcx, [rcx+18h]
 * 00000001C002A3CF: mov     r9d, edi
 * 00000001C002A3D2: mov     [rsp+58h+var_20], 8
 * 00000001C002A3DB: mov     [rsp+58h+var_28], rdx
 * 00000001C002A3E0: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002A3E8: mov     [rsp+58h+var_30], 4
 * 00000001C002A3F1: mov     [rsp+58h+var_38], rdx
 * 00000001C002A3F6: mov     edx, 2Bh ; '+'
 * 00000001C002A3FB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002A401: nop
 * 00000001C002A402: jmp     loc_1C0016057
 */
