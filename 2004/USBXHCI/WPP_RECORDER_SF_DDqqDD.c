/*
 * XREFs of WPP_RECORDER_SF_DDqqDD @ 0x1C0043148
 * Callers:
 *     Isoch_PrepareStage @ 0x1C00038A0 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDD @ 0x1C0043148
 * Reason: Hex-Rays returned no pseudocode for 0x1C0043148
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0043148: mov     r11, rsp
 * 00000001C004314B: mov     [r11+8], rbx
 * 00000001C004314F: mov     [r11+10h], rsi
 * 00000001C0043153: mov     [r11+18h], rdi
 * 00000001C0043157: mov     [r11+20h], r14
 * 00000001C004315B: push    rbp
 * 00000001C004315C: lea     rbp, [r11-27h]
 * 00000001C0043160: sub     rsp, 90h
 * 00000001C0043167: mov     edi, 4
 * 00000001C004316C: mov     rbx, rcx
 * 00000001C004316F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043176: lea     esi, [rdi+4]
 * 00000001C0043179: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043180: lea     r14d, [rdi+2Bh]
 * 00000001C0043184: jz      short loc_1C00431F8
 * 00000001C0043186: cmp     [rcx+29h], dil
 * 00000001C004318A: jb      short loc_1C00431F8
 * 00000001C004318C: and     qword ptr [r11-18h], 0
 * 00000001C0043191: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0043195: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004319C: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00431A3: mov     rcx, [rcx+18h]
 * 00000001C00431A7: mov     [r11-20h], rdi
 * 00000001C00431AB: mov     [r11-28h], rdx
 * 00000001C00431AF: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00431B3: mov     [r11-30h], rdi
 * 00000001C00431B7: mov     [r11-38h], rdx
 * 00000001C00431BB: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00431BF: mov     [r11-40h], rsi
 * 00000001C00431C3: mov     [r11-48h], rdx
 * 00000001C00431C7: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00431CB: mov     [r11-50h], rsi
 * 00000001C00431CF: mov     [r11-58h], rdx
 * 00000001C00431D3: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C00431D7: mov     [r11-60h], rdi
 * 00000001C00431DB: mov     [r11-68h], rdx
 * 00000001C00431DF: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C00431E3: mov     [r11-70h], rdi
 * 00000001C00431E7: mov     [r11-78h], rdx
 * 00000001C00431EB: lea     edx, [rdi+27h]
 * 00000001C00431EE: movzx   r9d, r14w
 * 00000001C00431F2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00431F8: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0043201: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0043205: mov     [rsp+90h+var_10], rdi
 * 00000001C004320D: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043214: mov     [rsp+90h+var_18], rax
 * 00000001C0043219: mov     r8d, 0Eh
 * 00000001C004321F: mov     [rsp+90h+var_20], rdi
 * 00000001C0043224: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0043228: mov     [rsp+90h+var_28], rax
 * 00000001C004322D: mov     edx, edi
 * 00000001C004322F: mov     [rsp+90h+var_30], rsi
 * 00000001C0043234: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0043238: mov     [rsp+90h+var_38], rax
 * 00000001C004323D: mov     rcx, rbx
 * 00000001C0043240: mov     [rsp+90h+var_40], rsi
 * 00000001C0043245: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0043249: mov     [rsp+90h+var_48], rax
 * 00000001C004324E: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0043252: mov     [rsp+90h+var_50], rdi
 * 00000001C0043257: mov     [rsp+90h+var_58], rax
 * 00000001C004325C: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0043260: mov     [rsp+90h+var_60], rdi
 * 00000001C0043265: mov     [rsp+90h+var_68], rax
 * 00000001C004326A: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C0043270: call    cs:__imp_WppAutoLogTrace
 * 00000001C0043277: nop     dword ptr [rax+rax+00h]
 * 00000001C004327C: lea     r11, [rsp+90h+var_s0]
 * 00000001C0043284: mov     rbx, [r11+10h]
 * 00000001C0043288: mov     rsi, [r11+18h]
 * 00000001C004328C: mov     rdi, [r11+20h]
 * 00000001C0043290: mov     r14, [r11+28h]
 * 00000001C0043294: mov     rsp, r11
 * 00000001C0043297: pop     rbp
 * 00000001C0043298: retn
 */
