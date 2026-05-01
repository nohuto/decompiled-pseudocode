/*
 * XREFs of sub_180066C9C @ 0x180066C9C
 * Callers:
 *     sub_18006693C @ 0x18006693C (sub_18006693C.c)
 * Callees:
 *     sub_18003AB4C @ 0x18003AB4C (sub_18003AB4C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180046880 @ 0x180046880 (sub_180046880.c)
 *     sub_180066BC0 @ 0x180066BC0 (sub_180066BC0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_180066C9C @ 0x180066C9C
 * Reason: Hex-Rays returned no pseudocode for 0x180066C9C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180066C9C: mov     rax, rsp
 * 0000000180066C9F: mov     [rax+8], rbx
 * 0000000180066CA3: mov     [rax+10h], rsi
 * 0000000180066CA7: mov     [rax+18h], rdi
 * 0000000180066CAB: push    rbp
 * 0000000180066CAC: push    r12
 * 0000000180066CAE: push    r13
 * 0000000180066CB0: push    r14
 * 0000000180066CB2: push    r15
 * 0000000180066CB4: lea     rbp, [rax-0F88h]
 * 0000000180066CBB: mov     eax, 1060h
 * 0000000180066CC0: call    sub_180046880
 * 0000000180066CC5: sub     rsp, rax
 * 0000000180066CC8: mov     rax, cs:__security_cookie
 * 0000000180066CCF: xor     rax, rsp
 * 0000000180066CD2: mov     [rbp+0F80h+var_30], rax
 * 0000000180066CD9: mov     rax, [rcx+18h]
 * 0000000180066CDD: xor     r13d, r13d
 * 0000000180066CE0: mov     rdi, [rcx+28h]
 * 0000000180066CE4: mov     r12d, r9d
 * 0000000180066CE7: movzx   r14d, r8w
 * 0000000180066CEB: mov     esi, edx
 * 0000000180066CED: mov     r15, rcx
 * 0000000180066CF0: mov     r10d, r13d
 * 0000000180066CF3: mov     ebx, r13d
 * 0000000180066CF6: cmp     r13w, [rax+6]
 * 0000000180066CFB: jnb     loc_180066E0C
 * 0000000180066D01: mov     ecx, ebx
 * 0000000180066D03: add     rcx, rcx
 * 0000000180066D06: cmp     [rdi+rcx*8], esi
 * 0000000180066D09: jnz     loc_180066DFA
 * 0000000180066D0F: cmp     [rdi+rcx*8+0Ch], r14w
 * 0000000180066D15: jnz     loc_180066DFA
 * 0000000180066D1B: test    dword ptr [rdi+rcx*8+0Ch], 10000h
 * 0000000180066D23: jz      short loc_180066D2E
 * 0000000180066D25: test    r12d, r12d
 * 0000000180066D28: jz      loc_180066DFA
 * 0000000180066D2E: mov     eax, [rdi+rcx*8+4]
 * 0000000180066D32: mov     [rsp+20h+arg_18], eax
 * 0000000180066D36: mov     eax, [rdi+rcx*8+8]
 * 0000000180066D3A: mov     [rsp+20h+arg_1C], eax
 * 0000000180066D3E: lea     rax, [rsp+20h+arg_10]
 * 0000000180066D43: mov     [rsp+20h+arg_10], 1000h
 * 0000000180066D4B: mov     [rsp+28h], rax
 * 0000000180066D50: lea     r9, [rsp+20h+arg_14]
 * 0000000180066D55: lea     rax, [rsp+20h+arg_20]
 * 0000000180066D5A: lea     rcx, [rsp+20h+arg_18]
 * 0000000180066D5F: mov     [rsp+20h], rax
 * 0000000180066D64: call    sub_18003AB4C
 * 0000000180066D69: mov     r10d, eax
 * 0000000180066D6C: test    eax, eax
 * 0000000180066D6E: jnz     short loc_180066DED
 * 0000000180066D70: mov     r8d, [rsp+20h+arg_10]
 * 0000000180066D75: mov     edx, r13d
 * 0000000180066D78: test    r8b, 7
 * 0000000180066D7C: cmovnz  r8d, r13d
 * 0000000180066D80: mov     ecx, r8d
 * 0000000180066D83: mov     [rsp+20h+arg_10], r8d
 * 0000000180066D88: shr     ecx, 3
 * 0000000180066D8B: test    ecx, ecx
 * 0000000180066D8D: jz      short loc_180066DA9
 * 0000000180066D8F: lea     rax, [rsp+20h+arg_24]
 * 0000000180066D94: cmp     [rax-4], esi
 * 0000000180066D97: jnz     short loc_180066D9F
 * 0000000180066D99: cmp     [rax], r14w
 * 0000000180066D9D: jz      short loc_180066DCB
 * 0000000180066D9F: inc     edx
 * 0000000180066DA1: add     rax, 8
 * 0000000180066DA5: cmp     edx, ecx
 * 0000000180066DA7: jb      short loc_180066D94
 * 0000000180066DA9: mov     eax, r8d
 * 0000000180066DAC: add     rax, 8
 * 0000000180066DB0: cmp     rax, 1000h
 * 0000000180066DB6: ja      short loc_180066DCB
 * 0000000180066DB8: add     r8d, 8
 * 0000000180066DBC: mov     [rsp+rcx*8+20h+arg_20], esi
 * 0000000180066DC0: mov     [rsp+20h+arg_10], r8d
 * 0000000180066DC5: mov     [rsp+rcx*8+20h+arg_24], r14w
 * 0000000180066DCB: mov     eax, [rsp+20h+arg_14]
 * 0000000180066DCF: lea     rdx, [rsp+20h+arg_20]
 * 0000000180066DD4: mov     [rsp+20h+arg_0], 1
 * 0000000180066DDC: lea     rcx, [rsp+20h+arg_18]
 * 0000000180066DE1: mov     [rsp+28h], eax
 * 0000000180066DE5: call    sub_180066BC0
 * 0000000180066DEA: mov     r10d, eax
 * 0000000180066DED: cmp     r10d, 0C0000001h
 * 0000000180066DF4: jz      loc_180066D3E
 * 0000000180066DFA: mov     rax, [r15+18h]
 * 0000000180066DFE: inc     ebx
 * 0000000180066E00: movzx   ecx, word ptr [rax+6]
 * 0000000180066E04: cmp     ebx, ecx
 * 0000000180066E06: jb      loc_180066D01
 * 0000000180066E0C: mov     eax, r10d
 * 0000000180066E0F: mov     rcx, [rbp+0F80h+var_30]
 * 0000000180066E16: xor     rcx, rsp; StackCookie
 * 0000000180066E19: call    __security_check_cookie
 * 0000000180066E1E: lea     r11, [rsp+20h+arg_1030]
 * 0000000180066E26: mov     rbx, [r11+30h]
 * 0000000180066E2A: mov     rsi, [r11+38h]
 * 0000000180066E2E: mov     rdi, [r11+40h]
 * 0000000180066E32: mov     rsp, r11
 * 0000000180066E35: pop     r15
 * 0000000180066E37: pop     r14
 * 0000000180066E39: pop     r13
 * 0000000180066E3B: pop     r12
 * 0000000180066E3D: pop     rbp
 * 0000000180066E3E: retn
 */
