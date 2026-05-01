/*
 * XREFs of sub_180066E48 @ 0x180066E48
 * Callers:
 *     sub_180063DD0 @ 0x180063DD0 (sub_180063DD0.c)
 * Callees:
 *     sub_18003AB4C @ 0x18003AB4C (sub_18003AB4C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180046880 @ 0x180046880 (sub_180046880.c)
 *     sub_180066BC0 @ 0x180066BC0 (sub_180066BC0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_180066E48 @ 0x180066E48
 * Reason: Hex-Rays returned no pseudocode for 0x180066E48
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180066E48: mov     rax, rsp
 * 0000000180066E4B: mov     [rax+8], rbx
 * 0000000180066E4F: mov     [rax+10h], rsi
 * 0000000180066E53: mov     [rax+18h], rdi
 * 0000000180066E57: mov     [rax+20h], r13
 * 0000000180066E5B: push    rbp
 * 0000000180066E5C: push    r14
 * 0000000180066E5E: push    r15
 * 0000000180066E60: lea     rbp, [rax-0F78h]
 * 0000000180066E67: mov     eax, 1060h
 * 0000000180066E6C: call    sub_180046880
 * 0000000180066E71: sub     rsp, rax
 * 0000000180066E74: mov     rax, cs:__security_cookie
 * 0000000180066E7B: xor     rax, rsp
 * 0000000180066E7E: mov     [rbp+0F70h+var_20], rax
 * 0000000180066E85: mov     rax, [rcx+8]
 * 0000000180066E89: xor     r15d, r15d
 * 0000000180066E8C: sub     rax, [rcx]
 * 0000000180066E8F: mov     r14, rcx
 * 0000000180066E92: mov     ebx, r15d
 * 0000000180066E95: mov     edi, r15d
 * 0000000180066E98: cmp     rax, 0Ch
 * 0000000180066E9C: jb      loc_180066FE2
 * 0000000180066EA2: mov     esi, r15d
 * 0000000180066EA5: mov     r13, 0AAAAAAAAAAAAAAABh
 * 0000000180066EAF: lea     rax, [rsp+10h+arg_20]
 * 0000000180066EB4: mov     [rsp+10h+arg_20], 1000h
 * 0000000180066EBC: mov     [rsp+10h+arg_8], rax
 * 0000000180066EC1: lea     r9, [rsp+10h+arg_24]
 * 0000000180066EC6: lea     rax, [rsp+10h+arg_30]
 * 0000000180066ECB: lea     rcx, unk_1800A3AE8
 * 0000000180066ED2: mov     [rsp+10h+arg_0], rax
 * 0000000180066ED7: call    sub_18003AB4C
 * 0000000180066EDC: mov     ebx, eax
 * 0000000180066EDE: test    eax, eax
 * 0000000180066EE0: jnz     loc_180066FCB
 * 0000000180066EE6: mov     r9d, [rsp+10h+arg_20]
 * 0000000180066EEB: mov     rax, r13
 * 0000000180066EEE: mov     r8, [r14]
 * 0000000180066EF1: mul     r9
 * 0000000180066EF4: mov     rax, r13
 * 0000000180066EF7: shr     rdx, 3
 * 0000000180066EFB: lea     rcx, [rdx+rdx*2]
 * 0000000180066EFF: shl     rcx, 2
 * 0000000180066F03: cmp     r9, rcx
 * 0000000180066F06: cmovnz  r9d, r15d
 * 0000000180066F0A: mov     ecx, r9d
 * 0000000180066F0D: mul     rcx
 * 0000000180066F10: mov     rcx, [r14+8]
 * 0000000180066F14: mov     rax, r13
 * 0000000180066F17: mov     r10, rdx
 * 0000000180066F1A: mov     [rsp+10h+arg_20], r9d
 * 0000000180066F1F: sub     rcx, r8
 * 0000000180066F22: shr     r10, 3
 * 0000000180066F26: mul     rcx
 * 0000000180066F29: shr     rdx, 3
 * 0000000180066F2D: lea     rax, [rdx+rdx*2]
 * 0000000180066F31: lea     rdi, [r8+rax*4]
 * 0000000180066F35: jmp     short loc_180066FA0
 * 0000000180066F37: mov     eax, r10d
 * 0000000180066F3A: lea     rcx, [rax+rax*2]
 * 0000000180066F3E: lea     rdx, [rdx+rcx*4]
 * 0000000180066F42: lea     rax, [rsp+10h+arg_30]
 * 0000000180066F47: cmp     rax, rdx
 * 0000000180066F4A: jz      short loc_180066F71
 * 0000000180066F4C: mov     r11d, [r8]
 * 0000000180066F4F: lea     rcx, [rsp+10h+arg_30]
 * 0000000180066F54: cmp     [rcx], r11d
 * 0000000180066F57: jnz     short loc_180066F68
 * 0000000180066F59: movzx   eax, word ptr [r8+4]
 * 0000000180066F5E: cmp     [rcx+4], ax
 * 0000000180066F62: jz      loc_18006701A
 * 0000000180066F68: add     rcx, 0Ch
 * 0000000180066F6C: cmp     rcx, rdx
 * 0000000180066F6F: jnz     short loc_180066F54
 * 0000000180066F71: mov     eax, r9d
 * 0000000180066F74: add     rax, 0Ch
 * 0000000180066F78: cmp     rax, 1000h
 * 0000000180066F7E: ja      short loc_180066F9C
 * 0000000180066F80: movsd   xmm0, qword ptr [r8]
 * 0000000180066F85: add     r9d, 0Ch
 * 0000000180066F89: movsd   qword ptr [rdx], xmm0
 * 0000000180066F8D: inc     r10d
 * 0000000180066F90: mov     eax, [r8+8]
 * 0000000180066F94: mov     [rdx+8], eax
 * 0000000180066F97: mov     [rsp+10h+arg_20], r9d
 * 0000000180066F9C: add     r8, 0Ch
 * 0000000180066FA0: lea     rdx, [rsp+10h+arg_30]
 * 0000000180066FA5: cmp     r8, rdi
 * 0000000180066FA8: jnz     short loc_180066F37
 * 0000000180066FAA: mov     eax, [rsp+10h+arg_24]
 * 0000000180066FAE: lea     rcx, unk_1800A3AE8
 * 0000000180066FB5: mov     [rsp+10h+arg_10], 1
 * 0000000180066FBD: mov     r8d, r9d
 * 0000000180066FC0: mov     dword ptr [rsp+10h+arg_8], eax
 * 0000000180066FC4: call    sub_180066BC0
 * 0000000180066FC9: mov     edi, eax
 * 0000000180066FCB: inc     esi
 * 0000000180066FCD: cmp     edi, 0C0000001h
 * 0000000180066FD3: jnz     short loc_180066FE2
 * 0000000180066FD5: cmp     esi, 64h ; 'd'
 * 0000000180066FD8: jge     short loc_180066FE2
 * 0000000180066FDA: test    ebx, ebx
 * 0000000180066FDC: jz      loc_180066EAF
 * 0000000180066FE2: test    ebx, ebx
 * 0000000180066FE4: cmovz   ebx, edi
 * 0000000180066FE7: mov     eax, ebx
 * 0000000180066FE9: mov     rcx, [rbp+0F70h+var_20]
 * 0000000180066FF0: xor     rcx, rsp; StackCookie
 * 0000000180066FF3: call    __security_check_cookie
 * 0000000180066FF8: lea     r11, [rsp+10h+arg_1040]
 * 0000000180067000: mov     rbx, [r11+20h]
 * 0000000180067004: mov     rsi, [r11+28h]
 * 0000000180067008: mov     rdi, [r11+30h]
 * 000000018006700C: mov     r13, [r11+38h]
 * 0000000180067010: mov     rsp, r11
 * 0000000180067013: pop     r15
 * 0000000180067015: pop     r14
 * 0000000180067017: pop     rbp
 * 0000000180067018: retn
 * 000000018006701A: mov     eax, [r8+8]
 * 000000018006701E: add     [rcx+8], eax
 * 0000000180067021: mov     r9d, [rsp+10h+arg_20]
 * 0000000180067026: jmp     loc_180066F9C
 */
