/*
 * XREFs of SmStoreResize @ 0x140927060
 * Callers:
 *     SmcStoreResize @ 0x14092AA80 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1403F6B00 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140926F10 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x140927060
 * Reason: Hex-Rays returned no pseudocode for 0x140927060
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140927060: mov     [rsp-8+arg_0], rbx
 * 0000000140927065: push    rbp
 * 0000000140927066: mov     rbp, rsp
 * 0000000140927069: sub     rsp, 60h
 * 000000014092706D: xor     r10d, r10d
 * 0000000140927070: mov     [rbp+var_8], 18h
 * 0000000140927078: neg     [rbp+arg_20]
 * 000000014092707B: lea     rax, [rbp+var_30]
 * 000000014092707F: mov     [rbp+var_10], rax
 * 0000000140927083: mov     rbx, r9
 * 0000000140927086: sbb     eax, eax
 * 0000000140927088: mov     [rbp+arg_10], r10
 * 000000014092708C: and     eax, 100h
 * 0000000140927091: mov     [rbp+SystemInformation], 1
 * 0000000140927098: add     eax, 6
 * 000000014092709B: mov     [rbp+var_14], 11h
 * 00000001409270A2: mov     [rbp+var_30], eax
 * 00000001409270A5: lea     r9d, [r10+18h]
 * 00000001409270A9: mov     eax, [rbx]
 * 00000001409270AB: mov     [rbp+var_28], eax
 * 00000001409270AE: mov     [rbp+var_24], r10d
 * 00000001409270B2: mov     [rbp+var_2C], edx
 * 00000001409270B5: mov     [rbp+var_20], r8
 * 00000001409270B9: test    ecx, ecx
 * 00000001409270BB: jnz     short loc_1409270E2
 * 00000001409270BD: mov     rcx, cs:DeviceObject; DeviceObject
 * 00000001409270C4: lea     rax, [rbp+arg_10]
 * 00000001409270C8: mov     [rsp+60h+var_38], rax; __int64
 * 00000001409270CD: lea     r8, [rbp+var_30]
 * 00000001409270D1: mov     edx, 2281CCh
 * 00000001409270D6: mov     [rsp+60h+var_40], r9d; int
 * 00000001409270DB: call    SmStorePhysicalRequestIssue
 * 00000001409270E0: jmp     short loc_1409270F8
 * 00000001409270E2: cmp     ecx, 1
 * 00000001409270E5: jnz     short loc_140927101
 * 00000001409270E7: mov     r8d, r9d; SystemInformationLength
 * 00000001409270EA: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 00000001409270EE: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 00000001409270F3: call    ZwSetSystemInformation
 * 00000001409270F8: mov     ecx, eax
 * 00000001409270FA: mov     eax, [rbp+var_28]
 * 00000001409270FD: mov     [rbx], eax
 * 00000001409270FF: jmp     short loc_140927106
 * 0000000140927101: mov     ecx, 0C000000Dh
 * 0000000140927106: mov     rbx, [rsp+60h+arg_0]
 * 000000014092710B: mov     eax, ecx
 * 000000014092710D: add     rsp, 60h
 * 0000000140927111: pop     rbp
 * 0000000140927112: retn
 */
