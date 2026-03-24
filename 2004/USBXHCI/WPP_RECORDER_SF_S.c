/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0035560
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0035560
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035560
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035560: mov     rax, rsp
 * 00000001C0035563: mov     [rax+8], rbx
 * 00000001C0035567: mov     [rax+10h], rsi
 * 00000001C003556B: mov     [rax+18h], rdi
 * 00000001C003556F: mov     [rax+20h], r12
 * 00000001C0035573: push    r15
 * 00000001C0035575: sub     rsp, 40h
 * 00000001C0035579: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0035580: lea     r15, aNull; "NULL"
 * 00000001C0035587: mov     rdi, [rsp+48h+arg_28]
 * 00000001C003558C: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0035590: mov     rsi, rcx
 * 00000001C0035593: mov     r12d, 0E6h
 * 00000001C0035599: mov     eax, [rdx+2Ch]
 * 00000001C003559C: test    al, 8
 * 00000001C003559E: jz      short loc_1C0035603
 * 00000001C00355A0: cmp     byte ptr [rdx+29h], 2
 * 00000001C00355A4: jb      short loc_1C0035603
 * 00000001C00355A6: test    rdi, rdi
 * 00000001C00355A9: jz      short loc_1C00355BC
 * 00000001C00355AB: mov     rdx, rbx
 * 00000001C00355AE: inc     rdx
 * 00000001C00355B1: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00355B5: jnz     short loc_1C00355AE
 * 00000001C00355B7: inc     rdx
 * 00000001C00355BA: jmp     short loc_1C00355C1
 * 00000001C00355BC: mov     edx, 5
 * 00000001C00355C1: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00355C8: lea     r8, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C00355CF: test    rdi, rdi
 * 00000001C00355D2: movzx   r9d, r12w
 * 00000001C00355D6: mov     rcx, rdi
 * 00000001C00355D9: cmovz   rcx, r15
 * 00000001C00355DD: and     [rsp+48h+var_18], 0
 * 00000001C00355E3: mov     [rsp+48h+var_20], rdx
 * 00000001C00355E8: mov     edx, 2Bh ; '+'
 * 00000001C00355ED: mov     [rsp+48h+var_28], rcx
 * 00000001C00355F2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00355F9: mov     rcx, [rcx+18h]
 * 00000001C00355FD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035603: test    rdi, rdi
 * 00000001C0035606: jz      short loc_1C0035616
 * 00000001C0035608: inc     rbx
 * 00000001C003560B: cmp     byte ptr [rdi+rbx], 0
 * 00000001C003560F: jnz     short loc_1C0035608
 * 00000001C0035611: inc     rbx
 * 00000001C0035614: jmp     short loc_1C003561B
 * 00000001C0035616: mov     ebx, 5
 * 00000001C003561B: test    rdi, rdi
 * 00000001C003561E: lea     r9, WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids
 * 00000001C0035625: mov     edx, 2
 * 00000001C003562A: mov     rcx, rsi
 * 00000001C003562D: cmovz   rdi, r15
 * 00000001C0035631: and     [rsp+48h+var_10], 0
 * 00000001C0035637: mov     [rsp+48h+var_18], rbx
 * 00000001C003563C: mov     [rsp+48h+var_20], rdi
 * 00000001C0035641: lea     r8d, [rdx+2]
 * 00000001C0035645: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C003564B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0035652: nop     dword ptr [rax+rax+00h]
 * 00000001C0035657: mov     rbx, [rsp+48h+arg_0]
 * 00000001C003565C: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0035661: mov     rdi, [rsp+48h+arg_10]
 * 00000001C0035666: mov     r12, [rsp+48h+arg_18]
 * 00000001C003566B: add     rsp, 40h
 * 00000001C003566F: pop     r15
 * 00000001C0035671: retn
 */
