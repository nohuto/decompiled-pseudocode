/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1403F8E20
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402FBAC0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F8930 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FD790 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1403F8E20
 * Reason: Hex-Rays returned no pseudocode for 0x1403F8E20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F8E20: mov     rdx, rsp
 * 00000001403F8E23: mov     rcx, gs:8758h
 * 00000001403F8E2C: lea     rax, [rcx-6000h]
 * 00000001403F8E33: cmp     rax, rsp
 * 00000001403F8E36: ja      short loc_1403F8E3D
 * 00000001403F8E38: cmp     rsp, rcx
 * 00000001403F8E3B: jb      short loc_1403F8E49
 * 00000001403F8E3D: cmp     cs:KiBugCheckActive, 0
 * 00000001403F8E44: jnz     short loc_1403F8E49
 * 00000001403F8E46: mov     rsp, rcx
 * 00000001403F8E49: sub     rsp, 20h
 * 00000001403F8E4D: mov     [rsp+20h+var_10], rdx
 * 00000001403F8E52: call    KiInterruptSubDispatchNoLock
 * 00000001403F8E57: mov     rsp, [rsp+20h+var_10]
 * 00000001403F8E5C: mov     rcx, rsi
 * 00000001403F8E5F: call    HalPerformEndOfInterrupt
 * 00000001403F8E64: mov     rcx, gs:20h
 * 00000001403F8E6D: cmp     byte ptr [rcx+20h], 1
 * 00000001403F8E71: ja      short loc_1403F8EED
 * 00000001403F8E73: rdtsc
 * 00000001403F8E75: shl     rdx, 20h
 * 00000001403F8E79: or      rax, rdx
 * 00000001403F8E7C: sub     rax, [rcx+7EC0h]
 * 00000001403F8E83: add     [rcx+7F38h], rax
 * 00000001403F8E8A: add     [rcx+7EC0h], rax
 * 00000001403F8E91: mov     r8, rax
 * 00000001403F8E94: mov     rax, [rcx+8]
 * 00000001403F8E98: test    byte ptr [rax+2], 72h
 * 00000001403F8E9C: jz      short loc_1403F8EB1
 * 00000001403F8E9E: xor     edx, edx
 * 00000001403F8EA0: call    KiBeginThreadAccountingPeriod
 * 00000001403F8EA5: mov     rcx, gs:20h
 * 00000001403F8EAE: inc     byte ptr [rcx+20h]
 * 00000001403F8EB1: mov     dl, [rcx+6]
 * 00000001403F8EB4: and     byte ptr [rcx+6], 0
 * 00000001403F8EB8: cmp     byte ptr [rcx+7], 0
 * 00000001403F8EBC: jnz     short loc_1403F8EED
 * 00000001403F8EBE: test    dl, dl
 * 00000001403F8EC0: jz      short loc_1403F8EED
 * 00000001403F8EC2: cmp     byte ptr [rbp-57h], 2
 * 00000001403F8EC6: jnb     short loc_1403F8ED3
 * 00000001403F8EC8: and     byte ptr [rcx+20h], 0
 * 00000001403F8ECC: call    KiDpcInterruptBypass
 * 00000001403F8ED1: jmp     short loc_1403F8EF0
 * 00000001403F8ED3: mov     ecx, 2
 * 00000001403F8ED8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F8EDF: nop     dword ptr [rax+rax+00h]
 * 00000001403F8EE4: mov     rcx, gs:20h
 * 00000001403F8EED: dec     byte ptr [rcx+20h]
 * 00000001403F8EF0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F8EF4: cmp     cs:KiIrqlFlags, 0
 * 00000001403F8EFB: jz      short loc_1403F8F04
 * 00000001403F8EFD: call    KzSetIrqlUnsafe
 * 00000001403F8F02: jmp     short loc_1403F8F08
 * 00000001403F8F04: mov     cr8, rcx
 * 00000001403F8F08: mov     rsi, [rbp+0D0h]
 * 00000001403F8F0F: test    byte ptr [rbp+0F0h], 1
 * 00000001403F8F16: jz      loc_1403F9055
 * 00000001403F8F1C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F8F23: jz      short loc_1403F8F28
 * 00000001403F8F25: stac
 * 00000001403F8F28: mov     rcx, gs:188h
 * 00000001403F8F31: test    byte ptr [rcx+0C2h], 3
 * 00000001403F8F38: jz      short loc_1403F8F55
 * 00000001403F8F3A: mov     ecx, 1
 * 00000001403F8F3F: mov     cr8, rcx
 * 00000001403F8F43: sti
 * 00000001403F8F44: call    KiInitiateUserApc
 * 00000001403F8F49: cli
 * 00000001403F8F4A: mov     ecx, 0
 * 00000001403F8F4F: mov     cr8, rcx
 * 00000001403F8F53: jmp     short loc_1403F8F28
 * 00000001403F8F55: test    byte ptr gs:27Eh, 2
 * 00000001403F8F5E: jz      short loc_1403F8F67
 * 00000001403F8F60: xor     ecx, ecx
 * 00000001403F8F62: call    KiUpdateStibpPairing
 * 00000001403F8F67: mov     rcx, gs:188h
 * 00000001403F8F70: test    dword ptr [rcx], 8000000h
 * 00000001403F8F76: jz      short loc_1403F8F7D
 * 00000001403F8F78: call    KiRestoreSetContextState
 * 00000001403F8F7D: mov     rcx, gs:188h
 * 00000001403F8F86: test    dword ptr [rcx], 40010000h
 * 00000001403F8F8C: jz      short loc_1403F8FA2
 * 00000001403F8F8E: test    byte ptr [rcx+2], 1
 * 00000001403F8F92: jz      short loc_1403F8FA2
 * 00000001403F8F94: call    KiCopyCounters
 * 00000001403F8F99: mov     rcx, gs:188h
 * 00000001403F8FA2: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F8FA6: cmp     word ptr [rbp+80h], 0
 * 00000001403F8FAE: jz      short loc_1403F8FB5
 * 00000001403F8FB0: call    KiRestoreDebugRegisterState
 * 00000001403F8FB5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F8FB9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F8FBD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F8FC1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F8FC5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F8FC9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F8FCD: mov     r11, [rbp-20h]
 * 00000001403F8FD1: mov     r10, [rbp-28h]
 * 00000001403F8FD5: mov     r9, [rbp-30h]
 * 00000001403F8FD9: mov     r8, [rbp-38h]
 * 00000001403F8FDD: mov     byte ptr gs:853h, 0
 * 00000001403F8FE6: movzx   eax, byte ptr gs:27Dh
 * 00000001403F8FEF: cmp     gs:27Ah, al
 * 00000001403F8FF7: jz      short loc_1403F900A
 * 00000001403F8FF9: mov     gs:27Ah, al
 * 00000001403F9001: mov     ecx, 48h ; 'H'
 * 00000001403F9006: xor     edx, edx
 * 00000001403F9008: wrmsr
 * 00000001403F900A: btr     word ptr gs:278h, 2
 * 00000001403F9015: jnb     short loc_1403F9025
 * 00000001403F9017: mov     eax, 1
 * 00000001403F901C: xor     edx, edx
 * 00000001403F901E: mov     ecx, 49h ; 'I'
 * 00000001403F9023: wrmsr
 * 00000001403F9025: mov     rdx, [rbp-40h]
 * 00000001403F9029: mov     rcx, [rbp-48h]
 * 00000001403F902D: mov     rax, [rbp-50h]
 * 00000001403F9031: mov     rsp, rbp
 * 00000001403F9034: mov     rbp, [rbp+0D8h]
 * 00000001403F903B: add     rsp, 0E8h
 * 00000001403F9042: test    cs:KiKvaShadow, 1
 * 00000001403F9049: jz      short loc_1403F9050
 * 00000001403F904B: jmp     KiKernelExit
 * 00000001403F9050: swapgs
 * 00000001403F9053: iretq
 * 00000001403F9055: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F9059: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F905D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F9061: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F9065: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F9069: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F906D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F9071: mov     r11, [rbp-20h]
 * 00000001403F9075: mov     r10, [rbp-28h]
 * 00000001403F9079: mov     r9, [rbp-30h]
 * 00000001403F907D: mov     r8, [rbp-38h]
 * 00000001403F9081: mov     rdx, [rbp-40h]
 * 00000001403F9085: mov     rcx, [rbp-48h]
 * 00000001403F9089: mov     rax, [rbp-50h]
 * 00000001403F908D: mov     rsp, rbp
 * 00000001403F9090: mov     rbp, [rbp+0D8h]
 * 00000001403F9097: add     rsp, 0E8h
 * 00000001403F909E: iretq
 */
