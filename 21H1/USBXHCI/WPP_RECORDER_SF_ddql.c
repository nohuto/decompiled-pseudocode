/*
 * XREFs of WPP_RECORDER_SF_ddqL @ 0x1C003AB24
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C00064C0 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqL @ 0x1C003AB24
 * Reason: Hex-Rays returned no pseudocode for 0x1C003AB24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003AB24: mov     r11, rsp
 * 00000001C003AB27: mov     [r11+8], rbx
 * 00000001C003AB2B: mov     [r11+10h], rsi
 * 00000001C003AB2F: push    rdi
 * 00000001C003AB30: sub     rsp, 70h
 * 00000001C003AB34: mov     rdi, rcx
 * 00000001C003AB37: movzx   ebx, r9w
 * 00000001C003AB3B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003AB42: mov     esi, 4
 * 00000001C003AB47: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003AB4E: jz      short loc_1C003ABAD
 * 00000001C003AB50: cmp     [rcx+29h], sil
 * 00000001C003AB54: jb      short loc_1C003ABAD
 * 00000001C003AB56: and     qword ptr [r11-18h], 0
 * 00000001C003AB5B: lea     rdx, [r11+48h]
 * 00000001C003AB5F: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003AB66: lea     r8, WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids
 * 00000001C003AB6D: mov     rcx, [rcx+18h]
 * 00000001C003AB71: mov     r9d, ebx
 * 00000001C003AB74: mov     [r11-20h], rsi
 * 00000001C003AB78: mov     [r11-28h], rdx
 * 00000001C003AB7C: lea     rdx, [r11+40h]
 * 00000001C003AB80: mov     qword ptr [r11-30h], 8
 * 00000001C003AB88: mov     [r11-38h], rdx
 * 00000001C003AB8C: lea     rdx, [r11+38h]
 * 00000001C003AB90: mov     [r11-40h], rsi
 * 00000001C003AB94: mov     [r11-48h], rdx
 * 00000001C003AB98: lea     rdx, [r11+30h]
 * 00000001C003AB9C: mov     [r11-50h], rsi
 * 00000001C003ABA0: mov     [r11-58h], rdx
 * 00000001C003ABA4: lea     edx, [rsi+27h]
 * 00000001C003ABA7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003ABAD: and     [rsp+78h+var_10], 0
 * 00000001C003ABB3: lea     rax, [rsp+78h+arg_40]
 * 00000001C003ABBB: mov     [rsp+78h+var_18], rsi
 * 00000001C003ABC0: lea     r9, WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids
 * 00000001C003ABC7: mov     [rsp+78h+var_20], rax
 * 00000001C003ABCC: mov     r8d, 0Dh
 * 00000001C003ABD2: mov     [rsp+78h+var_28], 8
 * 00000001C003ABDB: lea     rax, [rsp+78h+arg_38]
 * 00000001C003ABE3: mov     [rsp+78h+var_30], rax
 * 00000001C003ABE8: mov     edx, esi
 * 00000001C003ABEA: mov     [rsp+78h+var_38], rsi
 * 00000001C003ABEF: lea     rax, [rsp+78h+arg_30]
 * 00000001C003ABF7: mov     [rsp+78h+var_40], rax
 * 00000001C003ABFC: mov     rcx, rdi
 * 00000001C003ABFF: lea     rax, [rsp+78h+arg_28]
 * 00000001C003AC07: mov     [rsp+78h+var_48], rsi
 * 00000001C003AC0C: mov     [rsp+78h+var_50], rax
 * 00000001C003AC11: mov     [rsp+78h+var_58], bx
 * 00000001C003AC16: call    cs:__imp_WppAutoLogTrace
 * 00000001C003AC1D: nop     dword ptr [rax+rax+00h]
 * 00000001C003AC22: lea     r11, [rsp+78h+var_8]
 * 00000001C003AC27: mov     rbx, [r11+10h]
 * 00000001C003AC2B: mov     rsi, [r11+18h]
 * 00000001C003AC2F: mov     rsp, r11
 * 00000001C003AC32: pop     rdi
 * 00000001C003AC33: retn
 */
