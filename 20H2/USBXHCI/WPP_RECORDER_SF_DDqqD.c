/*
 * XREFs of WPP_RECORDER_SF_ddqqD @ 0x1C003C240
 * Callers:
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C003A870 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqD @ 0x1C003C240
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C240
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C240: mov     r11, rsp
 * 00000001C003C243: mov     [r11+8], rbx
 * 00000001C003C247: mov     [r11+10h], rbp
 * 00000001C003C24B: mov     [r11+18h], rsi
 * 00000001C003C24F: push    rdi
 * 00000001C003C250: sub     rsp, 80h
 * 00000001C003C257: mov     edi, 4
 * 00000001C003C25C: mov     rbx, rcx
 * 00000001C003C25F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C266: lea     ebp, [rdi+71h]
 * 00000001C003C269: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003C270: lea     esi, [rdi+4]
 * 00000001C003C273: jz      short loc_1C003C2DB
 * 00000001C003C275: cmp     [rcx+29h], dil
 * 00000001C003C279: jb      short loc_1C003C2DB
 * 00000001C003C27B: and     qword ptr [r11-18h], 0
 * 00000001C003C280: lea     rdx, [r11+50h]
 * 00000001C003C284: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C003C28B: lea     r8, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003C292: mov     rcx, [rcx+18h]
 * 00000001C003C296: mov     [r11-20h], rdi
 * 00000001C003C29A: mov     [r11-28h], rdx
 * 00000001C003C29E: lea     rdx, [r11+48h]
 * 00000001C003C2A2: mov     [r11-30h], rsi
 * 00000001C003C2A6: mov     [r11-38h], rdx
 * 00000001C003C2AA: lea     rdx, [r11+40h]
 * 00000001C003C2AE: mov     [r11-40h], rsi
 * 00000001C003C2B2: mov     [r11-48h], rdx
 * 00000001C003C2B6: lea     rdx, [r11+38h]
 * 00000001C003C2BA: mov     [r11-50h], rdi
 * 00000001C003C2BE: mov     [r11-58h], rdx
 * 00000001C003C2C2: lea     rdx, [r11+30h]
 * 00000001C003C2C6: mov     [r11-60h], rdi
 * 00000001C003C2CA: mov     [r11-68h], rdx
 * 00000001C003C2CE: lea     edx, [rdi+27h]
 * 00000001C003C2D1: movzx   r9d, bp
 * 00000001C003C2D5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C2DB: and     [rsp+88h+var_10], 0
 * 00000001C003C2E1: lea     rax, [rsp+88h+arg_48]
 * 00000001C003C2E9: mov     [rsp+88h+var_18], rdi
 * 00000001C003C2EE: lea     r9, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003C2F5: mov     [rsp+88h+var_20], rax
 * 00000001C003C2FA: mov     r8d, 0Dh
 * 00000001C003C300: mov     [rsp+88h+var_28], rsi
 * 00000001C003C305: lea     rax, [rsp+88h+arg_40]
 * 00000001C003C30D: mov     [rsp+88h+var_30], rax
 * 00000001C003C312: mov     edx, edi
 * 00000001C003C314: mov     [rsp+88h+var_38], rsi
 * 00000001C003C319: lea     rax, [rsp+88h+arg_38]
 * 00000001C003C321: mov     [rsp+88h+var_40], rax
 * 00000001C003C326: mov     rcx, rbx
 * 00000001C003C329: mov     [rsp+88h+var_48], rdi
 * 00000001C003C32E: lea     rax, [rsp+88h+arg_30]
 * 00000001C003C336: mov     [rsp+88h+var_50], rax
 * 00000001C003C33B: lea     rax, [rsp+88h+arg_28]
 * 00000001C003C343: mov     [rsp+88h+var_58], rdi
 * 00000001C003C348: mov     [rsp+88h+var_60], rax
 * 00000001C003C34D: mov     [rsp+88h+var_68], bp
 * 00000001C003C352: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C359: nop     dword ptr [rax+rax+00h]
 * 00000001C003C35E: lea     r11, [rsp+88h+var_8]
 * 00000001C003C366: mov     rbx, [r11+10h]
 * 00000001C003C36A: mov     rbp, [r11+18h]
 * 00000001C003C36E: mov     rsi, [r11+20h]
 * 00000001C003C372: mov     rsp, r11
 * 00000001C003C375: pop     rdi
 * 00000001C003C376: retn
 */
