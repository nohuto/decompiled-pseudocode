/*
 * XREFs of NVMeSystemPowerHint @ 0x1C000F768
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C000F82C (NVMeUpdateResumeLatencyTolerance.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeSystemPowerHint @ 0x1C000F768
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F768
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F768: mov     [rsp+arg_0], rbx
 * 00000001C000F76D: push    rdi
 * 00000001C000F76E: sub     rsp, 20h
 * 00000001C000F772: cmp     dword ptr [rdx+4], 10h
 * 00000001C000F776: mov     rdi, rdx
 * 00000001C000F779: mov     rbx, rcx
 * 00000001C000F77C: jb      loc_1C000F818
 * 00000001C000F782: cmp     dword ptr [rdx], 1
 * 00000001C000F785: jb      loc_1C000F818
 * 00000001C000F78B: mov     r9d, [rdx+0Ch]
 * 00000001C000F78F: mov     ecx, 3
 * 00000001C000F794: mov     r8d, [rdx+8]
 * 00000001C000F798: lea     rdx, aStornvmePowerS; "StorNVMe - POWER: System Power Hint - L"...
 * 00000001C000F79F: call    cs:__imp_StorPortDebugPrint
 * 00000001C000F7A6: nop     dword ptr [rax+rax+00h]
 * 00000001C000F7AB: mov     eax, [rdi+8]
 * 00000001C000F7AE: mov     rcx, rbx
 * 00000001C000F7B1: mov     [rbx+67Ch], eax
 * 00000001C000F7B7: mov     eax, [rdi+0Ch]
 * 00000001C000F7BA: mov     [rbx+684h], eax
 * 00000001C000F7C0: call    NVMeUpdateResumeLatencyTolerance
 * 00000001C000F7C5: cmp     dword ptr [rbx+50h], 5
 * 00000001C000F7C9: jnz     short loc_1C000F7E7
 * 00000001C000F7CB: xor     r8d, r8d
 * 00000001C000F7CE: mov     rdx, rbx
 * 00000001C000F7D1: cmp     dword ptr [rdi+8], 1
 * 00000001C000F7D5: lea     ecx, [r8+39h]
 * 00000001C000F7D9: jnz     short loc_1C000F7E1
 * 00000001C000F7DB: mov     r9d, [rbx+60h]
 * 00000001C000F7DF: jmp     short loc_1C000F80C
 * 00000001C000F7E1: mov     r9d, [rbx+5Ch]
 * 00000001C000F7E5: jmp     short loc_1C000F80C
 * 00000001C000F7E7: mov     eax, [rbx+670h]
 * 00000001C000F7ED: test    al, 10h
 * 00000001C000F7EF: jz      short loc_1C000F818
 * 00000001C000F7F1: cmp     dword ptr [rdi+8], 1
 * 00000001C000F7F5: mov     rdx, rbx
 * 00000001C000F7F8: mov     ecx, 39h ; '9'
 * 00000001C000F7FD: jnz     short loc_1C000F805
 * 00000001C000F7FF: mov     r9d, [rbx+60h]
 * 00000001C000F803: jmp     short loc_1C000F809
 * 00000001C000F805: or      r9d, 0FFFFFFFFh
 * 00000001C000F809: xor     r8d, r8d
 * 00000001C000F80C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000F813: nop     dword ptr [rax+rax+00h]
 * 00000001C000F818: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000F81D: add     rsp, 20h
 * 00000001C000F821: pop     rdi
 * 00000001C000F822: retn
 */
