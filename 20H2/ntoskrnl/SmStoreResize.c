/*
 * XREFs of SmStoreResize @ 0x14092CE88
 * Callers:
 *     SmcStoreResize @ 0x1409308A8 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1403FB6D0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14092CD38 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x14092CE88
 * Reason: Hex-Rays returned no pseudocode for 0x14092CE88
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014092CE88: mov     [rsp-8+arg_0], rbx
 * 000000014092CE8D: push    rbp
 * 000000014092CE8E: mov     rbp, rsp
 * 000000014092CE91: sub     rsp, 60h
 * 000000014092CE95: xor     r10d, r10d
 * 000000014092CE98: mov     [rbp+var_8], 18h
 * 000000014092CEA0: neg     [rbp+arg_20]
 * 000000014092CEA3: lea     rax, [rbp+var_30]
 * 000000014092CEA7: mov     [rbp+var_10], rax
 * 000000014092CEAB: mov     rbx, r9
 * 000000014092CEAE: sbb     eax, eax
 * 000000014092CEB0: mov     [rbp+arg_10], r10
 * 000000014092CEB4: and     eax, 100h
 * 000000014092CEB9: mov     [rbp+SystemInformation], 1
 * 000000014092CEC0: add     eax, 6
 * 000000014092CEC3: mov     [rbp+var_14], 11h
 * 000000014092CECA: mov     [rbp+var_30], eax
 * 000000014092CECD: lea     r9d, [r10+18h]
 * 000000014092CED1: mov     eax, [rbx]
 * 000000014092CED3: mov     [rbp+var_28], eax
 * 000000014092CED6: mov     [rbp+var_24], r10d
 * 000000014092CEDA: mov     [rbp+var_2C], edx
 * 000000014092CEDD: mov     [rbp+var_20], r8
 * 000000014092CEE1: test    ecx, ecx
 * 000000014092CEE3: jnz     short loc_14092CF0A
 * 000000014092CEE5: mov     rcx, cs:DeviceObject; DeviceObject
 * 000000014092CEEC: lea     rax, [rbp+arg_10]
 * 000000014092CEF0: mov     [rsp+60h+var_38], rax; __int64
 * 000000014092CEF5: lea     r8, [rbp+var_30]
 * 000000014092CEF9: mov     edx, 2281CCh
 * 000000014092CEFE: mov     [rsp+60h+var_40], r9d; int
 * 000000014092CF03: call    SmStorePhysicalRequestIssue
 * 000000014092CF08: jmp     short loc_14092CF20
 * 000000014092CF0A: cmp     ecx, 1
 * 000000014092CF0D: jnz     short loc_14092CF29
 * 000000014092CF0F: mov     r8d, r9d; SystemInformationLength
 * 000000014092CF12: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 000000014092CF16: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 000000014092CF1B: call    ZwSetSystemInformation
 * 000000014092CF20: mov     ecx, eax
 * 000000014092CF22: mov     eax, [rbp+var_28]
 * 000000014092CF25: mov     [rbx], eax
 * 000000014092CF27: jmp     short loc_14092CF2E
 * 000000014092CF29: mov     ecx, 0C000000Dh
 * 000000014092CF2E: mov     rbx, [rsp+60h+arg_0]
 * 000000014092CF33: mov     eax, ecx
 * 000000014092CF35: add     rsp, 60h
 * 000000014092CF39: pop     rbp
 * 000000014092CF3A: retn
 */
