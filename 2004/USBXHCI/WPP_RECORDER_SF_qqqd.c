/*
 * XREFs of WPP_RECORDER_SF_qqqd @ 0x1C0035444
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033400 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqd @ 0x1C0035444
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035444
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035444: mov     r11, rsp
 * 00000001C0035447: mov     [r11+8], rbx
 * 00000001C003544B: mov     [r11+10h], rbp
 * 00000001C003544F: push    rdi
 * 00000001C0035450: sub     rsp, 70h
 * 00000001C0035454: mov     rbx, rcx
 * 00000001C0035457: mov     edi, 8
 * 00000001C003545C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0035463: mov     ebp, 12Eh
 * 00000001C0035468: mov     eax, [rcx+2Ch]
 * 00000001C003546B: test    dil, al
 * 00000001C003546E: jz      short loc_1C00354CE
 * 00000001C0035470: cmp     byte ptr [rcx+29h], 5
 * 00000001C0035474: jb      short loc_1C00354CE
 * 00000001C0035476: and     qword ptr [r11-18h], 0
 * 00000001C003547B: lea     rdx, [r11+48h]
 * 00000001C003547F: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035486: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C003548D: mov     rcx, [rcx+18h]
 * 00000001C0035491: mov     qword ptr [r11-20h], 4
 * 00000001C0035499: mov     [r11-28h], rdx
 * 00000001C003549D: lea     rdx, [r11+40h]
 * 00000001C00354A1: mov     [r11-30h], rdi
 * 00000001C00354A5: mov     [r11-38h], rdx
 * 00000001C00354A9: lea     rdx, [r11+38h]
 * 00000001C00354AD: mov     [r11-40h], rdi
 * 00000001C00354B1: mov     [r11-48h], rdx
 * 00000001C00354B5: lea     rdx, [r11+30h]
 * 00000001C00354B9: mov     [r11-50h], rdi
 * 00000001C00354BD: mov     [r11-58h], rdx
 * 00000001C00354C1: lea     edx, [rdi+23h]
 * 00000001C00354C4: movzx   r9d, bp
 * 00000001C00354C8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00354CE: and     [rsp+78h+var_10], 0
 * 00000001C00354D4: lea     rax, [rsp+78h+arg_40]
 * 00000001C00354DC: mov     [rsp+78h+var_18], 4
 * 00000001C00354E5: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C00354EC: mov     [rsp+78h+var_20], rax
 * 00000001C00354F1: mov     edx, 5
 * 00000001C00354F6: mov     [rsp+78h+var_28], rdi
 * 00000001C00354FB: lea     rax, [rsp+78h+arg_38]
 * 00000001C0035503: mov     [rsp+78h+var_30], rax
 * 00000001C0035508: mov     rcx, rbx
 * 00000001C003550B: mov     [rsp+78h+var_38], rdi
 * 00000001C0035510: lea     rax, [rsp+78h+arg_30]
 * 00000001C0035518: mov     [rsp+78h+var_40], rax
 * 00000001C003551D: lea     r8d, [rdx-1]
 * 00000001C0035521: lea     rax, [rsp+78h+arg_28]
 * 00000001C0035529: mov     [rsp+78h+var_48], rdi
 * 00000001C003552E: mov     [rsp+78h+var_50], rax
 * 00000001C0035533: mov     [rsp+78h+var_58], bp
 * 00000001C0035538: call    cs:__imp_WppAutoLogTrace
 * 00000001C003553F: nop     dword ptr [rax+rax+00h]
 * 00000001C0035544: lea     r11, [rsp+78h+var_8]
 * 00000001C0035549: mov     rbx, [r11+10h]
 * 00000001C003554D: mov     rbp, [r11+18h]
 * 00000001C0035551: mov     rsp, r11
 * 00000001C0035554: pop     rdi
 * 00000001C0035555: retn
 */
