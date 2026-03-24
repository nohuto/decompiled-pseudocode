/*
 * XREFs of WPP_RECORDER_SF_DDDd @ 0x1C003F0D0
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000C480 (Bulk_RetrieveNextStage.c)
 *     TR_Create @ 0x1C006AA48 (TR_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDd @ 0x1C003F0D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C003F0D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003F0D0: mov     r11, rsp
 * 00000001C003F0D3: mov     [r11+8], rbx
 * 00000001C003F0D7: mov     [r11+10h], rbp
 * 00000001C003F0DB: mov     [r11+18h], rsi
 * 00000001C003F0DF: push    rdi
 * 00000001C003F0E0: sub     rsp, 70h
 * 00000001C003F0E4: mov     rsi, rcx
 * 00000001C003F0E7: movzx   edi, r9w
 * 00000001C003F0EB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003F0F2: mov     ebp, 4
 * 00000001C003F0F7: movzx   ebx, dl
 * 00000001C003F0FA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C003F101: jz      short loc_1C003F15C
 * 00000001C003F103: cmp     [rcx+29h], bl
 * 00000001C003F106: jb      short loc_1C003F15C
 * 00000001C003F108: and     qword ptr [r11-18h], 0
 * 00000001C003F10D: lea     rdx, [r11+48h]
 * 00000001C003F111: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003F118: mov     r9d, edi
 * 00000001C003F11B: mov     r8, [rsp+78h+arg_20]
 * 00000001C003F123: mov     rcx, [rcx+18h]
 * 00000001C003F127: mov     [r11-20h], rbp
 * 00000001C003F12B: mov     [r11-28h], rdx
 * 00000001C003F12F: lea     rdx, [r11+40h]
 * 00000001C003F133: mov     [r11-30h], rbp
 * 00000001C003F137: mov     [r11-38h], rdx
 * 00000001C003F13B: lea     rdx, [r11+38h]
 * 00000001C003F13F: mov     [r11-40h], rbp
 * 00000001C003F143: mov     [r11-48h], rdx
 * 00000001C003F147: lea     rdx, [r11+30h]
 * 00000001C003F14B: mov     [r11-50h], rbp
 * 00000001C003F14F: mov     [r11-58h], rdx
 * 00000001C003F153: lea     edx, [rbp+27h]
 * 00000001C003F156: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003F15C: and     [rsp+78h+var_10], 0
 * 00000001C003F162: lea     rax, [rsp+78h+arg_40]
 * 00000001C003F16A: mov     r9, [rsp+78h+arg_20]
 * 00000001C003F172: mov     r8d, 0Eh
 * 00000001C003F178: mov     [rsp+78h+var_18], rbp
 * 00000001C003F17D: mov     edx, ebx
 * 00000001C003F17F: mov     [rsp+78h+var_20], rax
 * 00000001C003F184: mov     rcx, rsi
 * 00000001C003F187: mov     [rsp+78h+var_28], rbp
 * 00000001C003F18C: lea     rax, [rsp+78h+arg_38]
 * 00000001C003F194: mov     [rsp+78h+var_30], rax
 * 00000001C003F199: lea     rax, [rsp+78h+arg_30]
 * 00000001C003F1A1: mov     [rsp+78h+var_38], rbp
 * 00000001C003F1A6: mov     [rsp+78h+var_40], rax
 * 00000001C003F1AB: lea     rax, [rsp+78h+arg_28]
 * 00000001C003F1B3: mov     [rsp+78h+var_48], rbp
 * 00000001C003F1B8: mov     [rsp+78h+var_50], rax
 * 00000001C003F1BD: mov     [rsp+78h+var_58], di
 * 00000001C003F1C2: call    cs:__imp_WppAutoLogTrace
 * 00000001C003F1C9: nop     dword ptr [rax+rax+00h]
 * 00000001C003F1CE: lea     r11, [rsp+78h+var_8]
 * 00000001C003F1D3: mov     rbx, [r11+10h]
 * 00000001C003F1D7: mov     rbp, [r11+18h]
 * 00000001C003F1DB: mov     rsi, [r11+20h]
 * 00000001C003F1DF: mov     rsp, r11
 * 00000001C003F1E2: pop     rdi
 * 00000001C003F1E3: retn
 */
