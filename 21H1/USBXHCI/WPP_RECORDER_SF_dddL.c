/*
 * XREFs of WPP_RECORDER_SF_DDDL @ 0x1C0042B6C
 * Callers:
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0041A20 (Isoch_ProcessTransferRingEmptyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDL @ 0x1C0042B6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0042B6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0042B6C: mov     r11, rsp
 * 00000001C0042B6F: mov     [r11+8], rbx
 * 00000001C0042B73: mov     [r11+10h], rsi
 * 00000001C0042B77: push    rdi
 * 00000001C0042B78: sub     rsp, 70h
 * 00000001C0042B7C: mov     rbx, rcx
 * 00000001C0042B7F: mov     edi, 4
 * 00000001C0042B84: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0042B8B: lea     esi, [rdi+22h]
 * 00000001C0042B8E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0042B95: jz      short loc_1C0042BF1
 * 00000001C0042B97: cmp     [rcx+29h], dil
 * 00000001C0042B9B: jb      short loc_1C0042BF1
 * 00000001C0042B9D: and     qword ptr [r11-18h], 0
 * 00000001C0042BA2: lea     rdx, [r11+48h]
 * 00000001C0042BA6: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0042BAD: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042BB4: mov     rcx, [rcx+18h]
 * 00000001C0042BB8: mov     [r11-20h], rdi
 * 00000001C0042BBC: mov     [r11-28h], rdx
 * 00000001C0042BC0: lea     rdx, [r11+40h]
 * 00000001C0042BC4: mov     [r11-30h], rdi
 * 00000001C0042BC8: mov     [r11-38h], rdx
 * 00000001C0042BCC: lea     rdx, [r11+38h]
 * 00000001C0042BD0: mov     [r11-40h], rdi
 * 00000001C0042BD4: mov     [r11-48h], rdx
 * 00000001C0042BD8: lea     rdx, [r11+30h]
 * 00000001C0042BDC: mov     [r11-50h], rdi
 * 00000001C0042BE0: mov     [r11-58h], rdx
 * 00000001C0042BE4: lea     edx, [rdi+27h]
 * 00000001C0042BE7: movzx   r9d, si
 * 00000001C0042BEB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042BF1: and     [rsp+78h+var_10], 0
 * 00000001C0042BF7: lea     rax, [rsp+78h+arg_40]
 * 00000001C0042BFF: mov     [rsp+78h+var_18], rdi
 * 00000001C0042C04: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0042C0B: mov     [rsp+78h+var_20], rax
 * 00000001C0042C10: mov     r8d, 0Eh
 * 00000001C0042C16: mov     [rsp+78h+var_28], rdi
 * 00000001C0042C1B: lea     rax, [rsp+78h+arg_38]
 * 00000001C0042C23: mov     [rsp+78h+var_30], rax
 * 00000001C0042C28: mov     edx, edi
 * 00000001C0042C2A: mov     [rsp+78h+var_38], rdi
 * 00000001C0042C2F: lea     rax, [rsp+78h+arg_30]
 * 00000001C0042C37: mov     [rsp+78h+var_40], rax
 * 00000001C0042C3C: mov     rcx, rbx
 * 00000001C0042C3F: lea     rax, [rsp+78h+arg_28]
 * 00000001C0042C47: mov     [rsp+78h+var_48], rdi
 * 00000001C0042C4C: mov     [rsp+78h+var_50], rax
 * 00000001C0042C51: mov     [rsp+78h+var_58], si
 * 00000001C0042C56: call    cs:__imp_WppAutoLogTrace
 * 00000001C0042C5D: nop     dword ptr [rax+rax+00h]
 * 00000001C0042C62: lea     r11, [rsp+78h+var_8]
 * 00000001C0042C67: mov     rbx, [r11+10h]
 * 00000001C0042C6B: mov     rsi, [r11+18h]
 * 00000001C0042C6F: mov     rsp, r11
 * 00000001C0042C72: pop     rdi
 * 00000001C0042C73: retn
 */
