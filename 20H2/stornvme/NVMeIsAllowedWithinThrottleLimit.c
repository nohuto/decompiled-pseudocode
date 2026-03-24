/*
 * XREFs of NVMeIsAllowedWithinThrottleLimit @ 0x1C00047A8
 * Callers:
 *     NVMeMapError @ 0x1C0001008 (NVMeMapError.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C0014090 (NVMeValidateProtocolCommandRequest.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C000484C (CalculateTimeDurationIn100ns.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeIsAllowedWithinThrottleLimit @ 0x1C00047A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00047A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00047A8: mov     rax, rsp
 * 00000001C00047AB: mov     [rax+8], rbx
 * 00000001C00047AF: push    rdi
 * 00000001C00047B0: sub     rsp, 30h
 * 00000001C00047B4: and     qword ptr [rax-18h], 0
 * 00000001C00047B9: mov     rdi, r8
 * 00000001C00047BC: and     qword ptr [rax+20h], 0
 * 00000001C00047C1: movsxd  rbx, edx
 * 00000001C00047C4: cmp     qword ptr [rcx+rbx*8+0F18h], 0
 * 00000001C00047CD: jz      loc_1C0008A16
 * 00000001C00047D3: lfence
 * 00000001C00047D6: mov     rbx, [rcx+rbx*8+0F18h]
 * 00000001C00047DE: lea     r9, [rax-18h]
 * 00000001C00047E2: mov     rdx, rcx
 * 00000001C00047E5: lea     r8, [rax+20h]
 * 00000001C00047E9: mov     ecx, 2Fh ; '/'
 * 00000001C00047EE: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00047F5: nop     dword ptr [rax+rax+00h]
 * 00000001C00047FA: mov     rdx, [rsp+38h+arg_18]
 * 00000001C00047FF: mov     rcx, [rsp+38h+var_18]
 * 00000001C0004804: call    CalculateTimeDurationIn100ns
 * 00000001C0004809: mov     rdx, [rbx+8]
 * 00000001C000480D: mov     rcx, rax
 * 00000001C0004810: sub     rcx, rdx
 * 00000001C0004813: cmp     rcx, [rbx+10h]
 * 00000001C0004817: jnb     short loc_1C000481E
 * 00000001C0004819: test    rdx, rdx
 * 00000001C000481C: jnz     short loc_1C000483E
 * 00000001C000481E: mov     [rbx+8], rax
 * 00000001C0004822: test    rdi, rdi
 * 00000001C0004825: jz      short loc_1C000482C
 * 00000001C0004827: mov     eax, [rbx+18h]
 * 00000001C000482A: mov     [rdi], eax
 * 00000001C000482C: and     dword ptr [rbx+18h], 0
 * 00000001C0004830: mov     al, 1
 * 00000001C0004832: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0004837: add     rsp, 30h
 * 00000001C000483B: pop     rdi
 * 00000001C000483C: retn
 * 00000001C000483E: inc     dword ptr [rbx+18h]
 * 00000001C0004841: xor     al, al
 * 00000001C0004843: jmp     short loc_1C0004832
 * 00000001C0008A16: test    rdi, rdi
 * 00000001C0008A19: jz      loc_1C0004830
 * 00000001C0008A1F: and     dword ptr [r8], 0
 * 00000001C0008A23: jmp     loc_1C0004830
 */
