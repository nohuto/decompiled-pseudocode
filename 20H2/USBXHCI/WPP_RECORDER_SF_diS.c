/*
 * XREFs of WPP_RECORDER_SF_diS @ 0x1C00174F8
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00170F0 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_diS @ 0x1C00174F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00174F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00174F8: mov     rax, rsp
 * 00000001C00174FB: mov     [rax+8], rbx
 * 00000001C00174FF: mov     [rax+10h], rbp
 * 00000001C0017503: mov     [rax+18h], rsi
 * 00000001C0017507: mov     [rax+20h], rdi
 * 00000001C001750B: push    r12
 * 00000001C001750D: push    r14
 * 00000001C001750F: push    r15
 * 00000001C0017511: sub     rsp, 60h
 * 00000001C0017515: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C001751C: lea     r8, aNull_1; "NULL"
 * 00000001C0017523: mov     rbx, [rsp+78h+arg_38]
 * 00000001C001752B: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C001752F: xor     r15d, r15d
 * 00000001C0017532: movzx   ebp, r9w
 * 00000001C0017536: mov     r14, rcx
 * 00000001C0017539: mov     r12d, 4
 * 00000001C001753F: mov     eax, [rdx+2Ch]
 * 00000001C0017542: lea     esi, [rdi+0Bh]
 * 00000001C0017545: test    al, 8
 * 00000001C0017547: jnz     loc_1C0028D12
 * 00000001C001754D: test    rbx, rbx
 * 00000001C0017550: jz      short loc_1C0017567
 * 00000001C0017552: inc     rdi
 * 00000001C0017555: cmp     [rbx+rdi*2], r15w
 * 00000001C001755A: jnz     short loc_1C0017552
 * 00000001C001755C: lea     rsi, ds:2[rdi*2]
 * 00000001C0017564: test    rbx, rbx
 * 00000001C0017567: mov     [rsp+78h+var_20], r15
 * 00000001C001756C: lea     rax, [rsp+78h+arg_30]
 * 00000001C0017574: mov     [rsp+78h+var_28], rsi
 * 00000001C0017579: lea     r9, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0017580: cmovz   rbx, r8
 * 00000001C0017584: mov     edx, r12d
 * 00000001C0017587: mov     [rsp+78h+var_30], rbx
 * 00000001C001758C: mov     r8d, r12d
 * 00000001C001758F: mov     [rsp+78h+var_38], 8
 * 00000001C0017598: mov     rcx, r14
 * 00000001C001759B: mov     [rsp+78h+var_40], rax
 * 00000001C00175A0: lea     rax, [rsp+78h+arg_28]
 * 00000001C00175A8: mov     [rsp+78h+var_48], r12
 * 00000001C00175AD: mov     [rsp+78h+var_50], rax
 * 00000001C00175B2: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00175B7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00175BE: nop     dword ptr [rax+rax+00h]
 * 00000001C00175C3: lea     r11, [rsp+78h+var_18]
 * 00000001C00175C8: mov     rbx, [r11+20h]
 * 00000001C00175CC: mov     rbp, [r11+28h]
 * 00000001C00175D0: mov     rsi, [r11+30h]
 * 00000001C00175D4: mov     rdi, [r11+38h]
 * 00000001C00175D8: mov     rsp, r11
 * 00000001C00175DB: pop     r15
 * 00000001C00175DD: pop     r14
 * 00000001C00175DF: pop     r12
 * 00000001C00175E1: retn
 * 00000001C0028D12: cmp     [rdx+29h], r12b
 * 00000001C0028D16: jb      loc_1C001754D
 * 00000001C0028D1C: test    rbx, rbx
 * 00000001C0028D1F: jz      short loc_1C0028D38
 * 00000001C0028D21: mov     rax, rdi
 * 00000001C0028D24: inc     rax
 * 00000001C0028D27: cmp     [rbx+rax*2], r15w
 * 00000001C0028D2C: jnz     short loc_1C0028D24
 * 00000001C0028D2E: lea     rdx, ds:2[rax*2]
 * 00000001C0028D36: jmp     short loc_1C0028D3B
 * 00000001C0028D38: mov     rdx, rsi
 * 00000001C0028D3B: mov     rax, qword ptr cs:WPP_MAIN_CB+148h
 * 00000001C0028D42: test    rbx, rbx
 * 00000001C0028D45: mov     [rsp+78h+var_28], r15
 * 00000001C0028D4A: mov     rcx, rbx
 * 00000001C0028D4D: cmovz   rcx, r8
 * 00000001C0028D51: mov     [rsp+78h+var_30], rdx
 * 00000001C0028D56: mov     [rsp+78h+var_38], rcx
 * 00000001C0028D5B: lea     r8, WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids
 * 00000001C0028D62: mov     [rsp+78h+var_40], 8
 * 00000001C0028D6B: lea     rcx, [rsp+78h+arg_30]
 * 00000001C0028D73: mov     [rsp+78h+var_48], rcx
 * 00000001C0028D78: mov     r9d, ebp
 * 00000001C0028D7B: lea     rcx, [rsp+78h+arg_28]
 * 00000001C0028D83: mov     [rsp+78h+var_50], r12
 * 00000001C0028D88: mov     [rsp+78h+var_58], rcx
 * 00000001C0028D8D: mov     edx, 2Bh ; '+'
 * 00000001C0028D92: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0028D99: mov     rcx, [rcx+18h]
 * 00000001C0028D9D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0028DA3: lea     r8, aNull_1; "NULL"
 * 00000001C0028DAA: jmp     loc_1C001754D
 */
