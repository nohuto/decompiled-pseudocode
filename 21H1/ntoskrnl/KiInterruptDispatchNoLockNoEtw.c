/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1403F7E20
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403F77F0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1403FC500 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14050D180 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1403F7E20
 * Reason: Hex-Rays returned no pseudocode for 0x1403F7E20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F7E20: mov     rdx, rsp
 * 00000001403F7E23: mov     rcx, gs:8758h
 * 00000001403F7E2C: lea     rax, [rcx-6000h]
 * 00000001403F7E33: cmp     rax, rsp
 * 00000001403F7E36: ja      short loc_1403F7E3D
 * 00000001403F7E38: cmp     rsp, rcx
 * 00000001403F7E3B: jb      short loc_1403F7E49
 * 00000001403F7E3D: cmp     cs:KiBugCheckActive, 0
 * 00000001403F7E44: jnz     short loc_1403F7E49
 * 00000001403F7E46: mov     rsp, rcx
 * 00000001403F7E49: sub     rsp, 20h
 * 00000001403F7E4D: mov     [rsp+20h+var_10], rdx
 * 00000001403F7E52: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001403F7E57: mov     rsp, [rsp+20h+var_10]
 * 00000001403F7E5C: mov     rcx, rsi
 * 00000001403F7E5F: call    HalPerformEndOfInterrupt
 * 00000001403F7E64: mov     rcx, gs:20h
 * 00000001403F7E6D: cmp     byte ptr [rcx+20h], 1
 * 00000001403F7E71: ja      short loc_1403F7EED
 * 00000001403F7E73: rdtsc
 * 00000001403F7E75: shl     rdx, 20h
 * 00000001403F7E79: or      rax, rdx
 * 00000001403F7E7C: sub     rax, [rcx+7EC0h]
 * 00000001403F7E83: add     [rcx+7F38h], rax
 * 00000001403F7E8A: add     [rcx+7EC0h], rax
 * 00000001403F7E91: mov     r8, rax
 * 00000001403F7E94: mov     rax, [rcx+8]
 * 00000001403F7E98: test    byte ptr [rax+2], 72h
 * 00000001403F7E9C: jz      short loc_1403F7EB1
 * 00000001403F7E9E: xor     edx, edx
 * 00000001403F7EA0: call    KiBeginThreadAccountingPeriod
 * 00000001403F7EA5: mov     rcx, gs:20h
 * 00000001403F7EAE: inc     byte ptr [rcx+20h]
 * 00000001403F7EB1: mov     dl, [rcx+6]
 * 00000001403F7EB4: and     byte ptr [rcx+6], 0
 * 00000001403F7EB8: cmp     byte ptr [rcx+7], 0
 * 00000001403F7EBC: jnz     short loc_1403F7EED
 * 00000001403F7EBE: test    dl, dl
 * 00000001403F7EC0: jz      short loc_1403F7EED
 * 00000001403F7EC2: cmp     byte ptr [rbp-57h], 2
 * 00000001403F7EC6: jnb     short loc_1403F7ED3
 * 00000001403F7EC8: and     byte ptr [rcx+20h], 0
 * 00000001403F7ECC: call    KiDpcInterruptBypass
 * 00000001403F7ED1: jmp     short loc_1403F7EF0
 * 00000001403F7ED3: mov     ecx, 2
 * 00000001403F7ED8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403F7EDF: nop     dword ptr [rax+rax+00h]
 * 00000001403F7EE4: mov     rcx, gs:20h
 * 00000001403F7EED: dec     byte ptr [rcx+20h]
 * 00000001403F7EF0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403F7EF4: cmp     cs:KiIrqlFlags, 0
 * 00000001403F7EFB: jz      short loc_1403F7F04
 * 00000001403F7EFD: call    KzSetIrqlUnsafe
 * 00000001403F7F02: jmp     short loc_1403F7F08
 * 00000001403F7F04: mov     cr8, rcx
 * 00000001403F7F08: mov     rsi, [rbp+0D0h]
 * 00000001403F7F0F: test    byte ptr [rbp+0F0h], 1
 * 00000001403F7F16: jz      loc_1403F8055
 * 00000001403F7F1C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403F7F23: jz      short loc_1403F7F28
 * 00000001403F7F25: stac
 * 00000001403F7F28: mov     rcx, gs:188h
 * 00000001403F7F31: test    byte ptr [rcx+0C2h], 3
 * 00000001403F7F38: jz      short loc_1403F7F55
 * 00000001403F7F3A: mov     ecx, 1
 * 00000001403F7F3F: mov     cr8, rcx
 * 00000001403F7F43: sti
 * 00000001403F7F44: call    KiInitiateUserApc
 * 00000001403F7F49: cli
 * 00000001403F7F4A: mov     ecx, 0
 * 00000001403F7F4F: mov     cr8, rcx
 * 00000001403F7F53: jmp     short loc_1403F7F28
 * 00000001403F7F55: test    byte ptr gs:27Eh, 2
 * 00000001403F7F5E: jz      short loc_1403F7F67
 * 00000001403F7F60: xor     ecx, ecx
 * 00000001403F7F62: call    KiUpdateStibpPairing
 * 00000001403F7F67: mov     rcx, gs:188h
 * 00000001403F7F70: test    dword ptr [rcx], 8000000h
 * 00000001403F7F76: jz      short loc_1403F7F7D
 * 00000001403F7F78: call    KiRestoreSetContextState
 * 00000001403F7F7D: mov     rcx, gs:188h
 * 00000001403F7F86: test    dword ptr [rcx], 40010000h
 * 00000001403F7F8C: jz      short loc_1403F7FA2
 * 00000001403F7F8E: test    byte ptr [rcx+2], 1
 * 00000001403F7F92: jz      short loc_1403F7FA2
 * 00000001403F7F94: call    KiCopyCounters
 * 00000001403F7F99: mov     rcx, gs:188h
 * 00000001403F7FA2: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F7FA6: cmp     word ptr [rbp+80h], 0
 * 00000001403F7FAE: jz      short loc_1403F7FB5
 * 00000001403F7FB0: call    KiRestoreDebugRegisterState
 * 00000001403F7FB5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F7FB9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F7FBD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F7FC1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F7FC5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F7FC9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F7FCD: mov     r11, [rbp-20h]
 * 00000001403F7FD1: mov     r10, [rbp-28h]
 * 00000001403F7FD5: mov     r9, [rbp-30h]
 * 00000001403F7FD9: mov     r8, [rbp-38h]
 * 00000001403F7FDD: mov     byte ptr gs:853h, 0
 * 00000001403F7FE6: movzx   eax, byte ptr gs:27Dh
 * 00000001403F7FEF: cmp     gs:27Ah, al
 * 00000001403F7FF7: jz      short loc_1403F800A
 * 00000001403F7FF9: mov     gs:27Ah, al
 * 00000001403F8001: mov     ecx, 48h ; 'H'
 * 00000001403F8006: xor     edx, edx
 * 00000001403F8008: wrmsr
 * 00000001403F800A: btr     word ptr gs:278h, 2
 * 00000001403F8015: jnb     short loc_1403F8025
 * 00000001403F8017: mov     eax, 1
 * 00000001403F801C: xor     edx, edx
 * 00000001403F801E: mov     ecx, 49h ; 'I'
 * 00000001403F8023: wrmsr
 * 00000001403F8025: mov     rdx, [rbp-40h]
 * 00000001403F8029: mov     rcx, [rbp-48h]
 * 00000001403F802D: mov     rax, [rbp-50h]
 * 00000001403F8031: mov     rsp, rbp
 * 00000001403F8034: mov     rbp, [rbp+0D8h]
 * 00000001403F803B: add     rsp, 0E8h
 * 00000001403F8042: test    cs:KiKvaShadow, 1
 * 00000001403F8049: jz      short loc_1403F8050
 * 00000001403F804B: jmp     KiKernelExit
 * 00000001403F8050: swapgs
 * 00000001403F8053: iretq
 * 00000001403F8055: ldmxcsr dword ptr [rbp-54h]
 * 00000001403F8059: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403F805D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403F8061: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403F8065: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403F8069: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403F806D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403F8071: mov     r11, [rbp-20h]
 * 00000001403F8075: mov     r10, [rbp-28h]
 * 00000001403F8079: mov     r9, [rbp-30h]
 * 00000001403F807D: mov     r8, [rbp-38h]
 * 00000001403F8081: mov     rdx, [rbp-40h]
 * 00000001403F8085: mov     rcx, [rbp-48h]
 * 00000001403F8089: mov     rax, [rbp-50h]
 * 00000001403F808D: mov     rsp, rbp
 * 00000001403F8090: mov     rbp, [rbp+0D8h]
 * 00000001403F8097: add     rsp, 0E8h
 * 00000001403F809E: iretq
 */
