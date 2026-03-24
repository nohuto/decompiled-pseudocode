/*
 * XREFs of WPP_RECORDER_SF_DDqDD @ 0x1C00402C0
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDD @ 0x1C00402C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00402C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00402C0: mov     r11, rsp
 * 00000001C00402C3: mov     [r11+8], rbx
 * 00000001C00402C7: mov     [r11+10h], rsi
 * 00000001C00402CB: push    rdi
 * 00000001C00402CC: sub     rsp, 80h
 * 00000001C00402D3: mov     rdi, rcx
 * 00000001C00402D6: movzx   ebx, r9w
 * 00000001C00402DA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00402E1: mov     esi, 4
 * 00000001C00402E6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00402ED: jz      short loc_1C0040359
 * 00000001C00402EF: cmp     byte ptr [rcx+29h], 2
 * 00000001C00402F3: jb      short loc_1C0040359
 * 00000001C00402F5: and     qword ptr [r11-18h], 0
 * 00000001C00402FA: lea     rdx, [r11+50h]
 * 00000001C00402FE: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0040305: mov     r9d, ebx
 * 00000001C0040308: mov     r8, [rsp+88h+arg_20]
 * 00000001C0040310: mov     rcx, [rcx+18h]
 * 00000001C0040314: mov     [r11-20h], rsi
 * 00000001C0040318: mov     [r11-28h], rdx
 * 00000001C004031C: lea     rdx, [r11+48h]
 * 00000001C0040320: mov     [r11-30h], rsi
 * 00000001C0040324: mov     [r11-38h], rdx
 * 00000001C0040328: lea     rdx, [r11+40h]
 * 00000001C004032C: mov     qword ptr [r11-40h], 8
 * 00000001C0040334: mov     [r11-48h], rdx
 * 00000001C0040338: lea     rdx, [r11+38h]
 * 00000001C004033C: mov     [r11-50h], rsi
 * 00000001C0040340: mov     [r11-58h], rdx
 * 00000001C0040344: lea     rdx, [r11+30h]
 * 00000001C0040348: mov     [r11-60h], rsi
 * 00000001C004034C: mov     [r11-68h], rdx
 * 00000001C0040350: lea     edx, [rsi+27h]
 * 00000001C0040353: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040359: and     [rsp+88h+var_10], 0
 * 00000001C004035F: lea     rax, [rsp+88h+arg_48]
 * 00000001C0040367: mov     r9, [rsp+88h+arg_20]
 * 00000001C004036F: mov     edx, 2
 * 00000001C0040374: mov     [rsp+88h+var_18], rsi
 * 00000001C0040379: mov     rcx, rdi
 * 00000001C004037C: mov     [rsp+88h+var_20], rax
 * 00000001C0040381: lea     rax, [rsp+88h+arg_40]
 * 00000001C0040389: mov     [rsp+88h+var_28], rsi
 * 00000001C004038E: mov     [rsp+88h+var_30], rax
 * 00000001C0040393: lea     r8d, [rdx+0Ch]
 * 00000001C0040397: mov     [rsp+88h+var_38], 8
 * 00000001C00403A0: lea     rax, [rsp+88h+arg_38]
 * 00000001C00403A8: mov     [rsp+88h+var_40], rax
 * 00000001C00403AD: lea     rax, [rsp+88h+arg_30]
 * 00000001C00403B5: mov     [rsp+88h+var_48], rsi
 * 00000001C00403BA: mov     [rsp+88h+var_50], rax
 * 00000001C00403BF: lea     rax, [rsp+88h+arg_28]
 * 00000001C00403C7: mov     [rsp+88h+var_58], rsi
 * 00000001C00403CC: mov     [rsp+88h+var_60], rax
 * 00000001C00403D1: mov     [rsp+88h+var_68], bx
 * 00000001C00403D6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00403DD: nop     dword ptr [rax+rax+00h]
 * 00000001C00403E2: lea     r11, [rsp+88h+var_8]
 * 00000001C00403EA: mov     rbx, [r11+10h]
 * 00000001C00403EE: mov     rsi, [r11+18h]
 * 00000001C00403F2: mov     rsp, r11
 * 00000001C00403F5: pop     rdi
 * 00000001C00403F6: retn
 */
