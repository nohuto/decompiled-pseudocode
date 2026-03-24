/*
 * XREFs of NVMeSystemPowerHint @ 0x1C000F770
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C000F834 (NVMeUpdateResumeLatencyTolerance.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeSystemPowerHint @ 0x1C000F770
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F770
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F770: mov     [rsp+arg_0], rbx
 * 00000001C000F775: push    rdi
 * 00000001C000F776: sub     rsp, 20h
 * 00000001C000F77A: cmp     dword ptr [rdx+4], 10h
 * 00000001C000F77E: mov     rdi, rdx
 * 00000001C000F781: mov     rbx, rcx
 * 00000001C000F784: jb      loc_1C000F820
 * 00000001C000F78A: cmp     dword ptr [rdx], 1
 * 00000001C000F78D: jb      loc_1C000F820
 * 00000001C000F793: mov     r9d, [rdx+0Ch]
 * 00000001C000F797: mov     ecx, 3
 * 00000001C000F79C: mov     r8d, [rdx+8]
 * 00000001C000F7A0: lea     rdx, aStornvmePowerS; "StorNVMe - POWER: System Power Hint - L"...
 * 00000001C000F7A7: call    cs:__imp_StorPortDebugPrint
 * 00000001C000F7AE: nop     dword ptr [rax+rax+00h]
 * 00000001C000F7B3: mov     eax, [rdi+8]
 * 00000001C000F7B6: mov     rcx, rbx
 * 00000001C000F7B9: mov     [rbx+67Ch], eax
 * 00000001C000F7BF: mov     eax, [rdi+0Ch]
 * 00000001C000F7C2: mov     [rbx+684h], eax
 * 00000001C000F7C8: call    NVMeUpdateResumeLatencyTolerance
 * 00000001C000F7CD: cmp     dword ptr [rbx+50h], 5
 * 00000001C000F7D1: jnz     short loc_1C000F7EF
 * 00000001C000F7D3: xor     r8d, r8d
 * 00000001C000F7D6: mov     rdx, rbx
 * 00000001C000F7D9: cmp     dword ptr [rdi+8], 1
 * 00000001C000F7DD: lea     ecx, [r8+39h]
 * 00000001C000F7E1: jnz     short loc_1C000F7E9
 * 00000001C000F7E3: mov     r9d, [rbx+60h]
 * 00000001C000F7E7: jmp     short loc_1C000F814
 * 00000001C000F7E9: mov     r9d, [rbx+5Ch]
 * 00000001C000F7ED: jmp     short loc_1C000F814
 * 00000001C000F7EF: mov     eax, [rbx+670h]
 * 00000001C000F7F5: test    al, 10h
 * 00000001C000F7F7: jz      short loc_1C000F820
 * 00000001C000F7F9: cmp     dword ptr [rdi+8], 1
 * 00000001C000F7FD: mov     rdx, rbx
 * 00000001C000F800: mov     ecx, 39h ; '9'
 * 00000001C000F805: jnz     short loc_1C000F80D
 * 00000001C000F807: mov     r9d, [rbx+60h]
 * 00000001C000F80B: jmp     short loc_1C000F811
 * 00000001C000F80D: or      r9d, 0FFFFFFFFh
 * 00000001C000F811: xor     r8d, r8d
 * 00000001C000F814: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000F81B: nop     dword ptr [rax+rax+00h]
 * 00000001C000F820: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000F825: add     rsp, 20h
 * 00000001C000F829: pop     rdi
 * 00000001C000F82A: retn
 */
