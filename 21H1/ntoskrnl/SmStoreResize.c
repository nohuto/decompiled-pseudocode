/*
 * XREFs of SmStoreResize @ 0x140925DB0
 * Callers:
 *     SmcStoreResize @ 0x1409297D0 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1403F5870 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140925C60 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x140925DB0
 * Reason: Hex-Rays returned no pseudocode for 0x140925DB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140925DB0: mov     [rsp-8+arg_0], rbx
 * 0000000140925DB5: push    rbp
 * 0000000140925DB6: mov     rbp, rsp
 * 0000000140925DB9: sub     rsp, 60h
 * 0000000140925DBD: xor     r10d, r10d
 * 0000000140925DC0: mov     [rbp+var_8], 18h
 * 0000000140925DC8: neg     [rbp+arg_20]
 * 0000000140925DCB: lea     rax, [rbp+var_30]
 * 0000000140925DCF: mov     [rbp+var_10], rax
 * 0000000140925DD3: mov     rbx, r9
 * 0000000140925DD6: sbb     eax, eax
 * 0000000140925DD8: mov     [rbp+arg_10], r10
 * 0000000140925DDC: and     eax, 100h
 * 0000000140925DE1: mov     [rbp+SystemInformation], 1
 * 0000000140925DE8: add     eax, 6
 * 0000000140925DEB: mov     [rbp+var_14], 11h
 * 0000000140925DF2: mov     [rbp+var_30], eax
 * 0000000140925DF5: lea     r9d, [r10+18h]
 * 0000000140925DF9: mov     eax, [rbx]
 * 0000000140925DFB: mov     [rbp+var_28], eax
 * 0000000140925DFE: mov     [rbp+var_24], r10d
 * 0000000140925E02: mov     [rbp+var_2C], edx
 * 0000000140925E05: mov     [rbp+var_20], r8
 * 0000000140925E09: test    ecx, ecx
 * 0000000140925E0B: jnz     short loc_140925E32
 * 0000000140925E0D: mov     rcx, cs:DeviceObject; DeviceObject
 * 0000000140925E14: lea     rax, [rbp+arg_10]
 * 0000000140925E18: mov     [rsp+60h+var_38], rax; __int64
 * 0000000140925E1D: lea     r8, [rbp+var_30]
 * 0000000140925E21: mov     edx, 2281CCh
 * 0000000140925E26: mov     [rsp+60h+var_40], r9d; int
 * 0000000140925E2B: call    SmStorePhysicalRequestIssue
 * 0000000140925E30: jmp     short loc_140925E48
 * 0000000140925E32: cmp     ecx, 1
 * 0000000140925E35: jnz     short loc_140925E51
 * 0000000140925E37: mov     r8d, r9d; SystemInformationLength
 * 0000000140925E3A: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 0000000140925E3E: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 0000000140925E43: call    ZwSetSystemInformation
 * 0000000140925E48: mov     ecx, eax
 * 0000000140925E4A: mov     eax, [rbp+var_28]
 * 0000000140925E4D: mov     [rbx], eax
 * 0000000140925E4F: jmp     short loc_140925E56
 * 0000000140925E51: mov     ecx, 0C000000Dh
 * 0000000140925E56: mov     rbx, [rsp+60h+arg_0]
 * 0000000140925E5B: mov     eax, ecx
 * 0000000140925E5D: add     rsp, 60h
 * 0000000140925E61: pop     rbp
 * 0000000140925E62: retn
 */
