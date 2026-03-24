/*
 * XREFs of NVMeIsAllowedWithinThrottleLimit @ 0x1C00047AC
 * Callers:
 *     NVMeMapError @ 0x1C0001008 (NVMeMapError.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C0014110 (NVMeValidateProtocolCommandRequest.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0004850 (CalculateTimeDurationIn100ns.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeIsAllowedWithinThrottleLimit @ 0x1C00047AC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00047AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00047AC: mov     rax, rsp
 * 00000001C00047AF: mov     [rax+8], rbx
 * 00000001C00047B3: push    rdi
 * 00000001C00047B4: sub     rsp, 30h
 * 00000001C00047B8: and     qword ptr [rax-18h], 0
 * 00000001C00047BD: mov     rdi, r8
 * 00000001C00047C0: and     qword ptr [rax+20h], 0
 * 00000001C00047C5: movsxd  rbx, edx
 * 00000001C00047C8: cmp     qword ptr [rcx+rbx*8+0F18h], 0
 * 00000001C00047D1: jz      loc_1C0008A56
 * 00000001C00047D7: lfence
 * 00000001C00047DA: mov     rbx, [rcx+rbx*8+0F18h]
 * 00000001C00047E2: lea     r9, [rax-18h]
 * 00000001C00047E6: mov     rdx, rcx
 * 00000001C00047E9: lea     r8, [rax+20h]
 * 00000001C00047ED: mov     ecx, 2Fh ; '/'
 * 00000001C00047F2: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00047F9: nop     dword ptr [rax+rax+00h]
 * 00000001C00047FE: mov     rdx, [rsp+38h+arg_18]
 * 00000001C0004803: mov     rcx, [rsp+38h+var_18]
 * 00000001C0004808: call    CalculateTimeDurationIn100ns
 * 00000001C000480D: mov     rdx, [rbx+8]
 * 00000001C0004811: mov     rcx, rax
 * 00000001C0004814: sub     rcx, rdx
 * 00000001C0004817: cmp     rcx, [rbx+10h]
 * 00000001C000481B: jnb     short loc_1C0004822
 * 00000001C000481D: test    rdx, rdx
 * 00000001C0004820: jnz     short loc_1C0004842
 * 00000001C0004822: mov     [rbx+8], rax
 * 00000001C0004826: test    rdi, rdi
 * 00000001C0004829: jz      short loc_1C0004830
 * 00000001C000482B: mov     eax, [rbx+18h]
 * 00000001C000482E: mov     [rdi], eax
 * 00000001C0004830: and     dword ptr [rbx+18h], 0
 * 00000001C0004834: mov     al, 1
 * 00000001C0004836: mov     rbx, [rsp+38h+arg_0]
 * 00000001C000483B: add     rsp, 30h
 * 00000001C000483F: pop     rdi
 * 00000001C0004840: retn
 * 00000001C0004842: inc     dword ptr [rbx+18h]
 * 00000001C0004845: xor     al, al
 * 00000001C0004847: jmp     short loc_1C0004836
 * 00000001C0008A56: test    rdi, rdi
 * 00000001C0008A59: jz      loc_1C0004834
 * 00000001C0008A5F: and     dword ptr [r8], 0
 * 00000001C0008A63: jmp     loc_1C0004834
 */
